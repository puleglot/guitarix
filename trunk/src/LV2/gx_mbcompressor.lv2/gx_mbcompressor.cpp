/*
 * Copyright (C) 2012 Hermann Meyer, Andreas Degert, Pete Shorthose, Steve Poskitt
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * --------------------------------------------------------------------------
 */


////////////////////////////// LOCAL INCLUDES //////////////////////////

#include "gx_common.h"      // faust support and denormal protection (SSE)
#include "gx_mbcompressor.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
#include "mbc.cc"    // dsp class generated by faust -> dsp2cc

////////////////////////////// PLUG-IN CLASS ///////////////////////////

class Gx_mbcompressor_
{
private:
  // pointer to buffer
  float*      output;
  float*      input;
  // pointer to dsp class
  PluginLV2*  mbcompressor;
  // private functions
  inline void run_dsp_(uint32_t n_samples);
  inline void connect_(uint32_t port,void* data);
  inline void init_dsp_(uint32_t rate);
  inline void connect_all__ports(uint32_t port, void* data);
  inline void activate_f();
  inline void clean_up();
  inline void deactivate_f();

public:
  // LV2 Descriptor
  static const LV2_Descriptor descriptor;
  // static wrapper to private functions
  static void deactivate(LV2_Handle instance);
  static void cleanup(LV2_Handle instance);
  static void run(LV2_Handle instance, uint32_t n_samples);
  static void activate(LV2_Handle instance);
  static void connect_port(LV2_Handle instance, uint32_t port, void* data);
  static LV2_Handle instantiate(const LV2_Descriptor* descriptor,
                                double rate, const char* bundle_path,
                                const LV2_Feature* const* features);
  Gx_mbcompressor_();
  ~Gx_mbcompressor_();
};

// constructor
Gx_mbcompressor_::Gx_mbcompressor_() :
  output(NULL),
  input(NULL),
  mbcompressor(mbc::plugin()) {};

// destructor
Gx_mbcompressor_::~Gx_mbcompressor_()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (mbcompressor->activate_plugin !=0)
    mbcompressor->activate_plugin(false, mbcompressor);
  // delete DSP class
  mbcompressor->delete_instance(mbcompressor);
};

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

void Gx_mbcompressor_::init_dsp_(uint32_t rate)
{
  AVOIDDENORMALS(); // init the SSE denormal protection
  mbcompressor->set_samplerate(rate, mbcompressor); // init the DSP class
}

// connect the Ports used by the plug-in class
void Gx_mbcompressor_::connect_(uint32_t port,void* data)
{
  switch ((PortIndex)port)
    {
    case EFFECTS_OUTPUT:
      output = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT:
      input = static_cast<float*>(data);
      break;
    default:
      break;
    }
}

void Gx_mbcompressor_::activate_f()
{
  // allocate the internal DSP mem
  if (mbcompressor->activate_plugin !=0)
    mbcompressor->activate_plugin(true, mbcompressor);
}

void Gx_mbcompressor_::clean_up()
{
  // delete the internal DSP mem
  if (mbcompressor->activate_plugin !=0)
    mbcompressor->activate_plugin(false, mbcompressor);
}

void Gx_mbcompressor_::deactivate_f()
{
  // delete the internal DSP mem
  if (mbcompressor->activate_plugin !=0)
    mbcompressor->activate_plugin(false, mbcompressor);
}

void Gx_mbcompressor_::run_dsp_(uint32_t n_samples)
{
  mbcompressor->mono_audio(static_cast<int>(n_samples), input, output, mbcompressor);
}

void Gx_mbcompressor_::connect_all__ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_(port,data); 
  // connect the Ports used by the DSP class
  mbcompressor->connect_ports(port,  data, mbcompressor);
}

////////////////////// STATIC CLASS  FUNCTIONS  ////////////////////////

LV2_Handle 
Gx_mbcompressor_::instantiate(const LV2_Descriptor* descriptor,
                            double rate, const char* bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_mbcompressor_ *self = new Gx_mbcompressor_();
  if (!self)
    {
      return NULL;
    }

  self->init_dsp_((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_mbcompressor_::connect_port(LV2_Handle instance, 
                                   uint32_t port, void* data)
{
  // connect all ports
  static_cast<Gx_mbcompressor_*>(instance)->connect_all__ports(port, data);
}

void Gx_mbcompressor_::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_mbcompressor_*>(instance)->activate_f();
}

void Gx_mbcompressor_::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_mbcompressor_*>(instance)->run_dsp_(n_samples);
}

void Gx_mbcompressor_::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_mbcompressor_*>(instance)->deactivate_f();
}

void Gx_mbcompressor_::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_mbcompressor_* self = static_cast<Gx_mbcompressor_*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_mbcompressor_::descriptor =
{
  GXPLUGIN_URI "#_mbcompressor_",
  Gx_mbcompressor_::instantiate,
  Gx_mbcompressor_::connect_port,
  Gx_mbcompressor_::activate,
  Gx_mbcompressor_::run,
  Gx_mbcompressor_::deactivate,
  Gx_mbcompressor_::cleanup,
  NULL
};

////////////////////////// LV2 SYMBOL EXPORT ///////////////////////////

extern "C"
LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &Gx_mbcompressor_::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
