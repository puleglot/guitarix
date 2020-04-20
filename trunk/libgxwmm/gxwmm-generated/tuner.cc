// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gxwmm/tuner.h>
#include <gxwmm/private/tuner_p.h>


/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
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
 */

#include <gxw/GxTuner.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Gxw::Tuner* wrap(GxTuner* object, bool take_copy)
{
  return dynamic_cast<Gxw::Tuner *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gxw
{


/* The *_Class implementation: */

const Glib::Class& Tuner_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Tuner_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gx_tuner_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Tuner_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Tuner_Class::wrap_new(GObject* o)
{
  return manage(new Tuner((GxTuner*)(o)));

}


/* The implementation: */

Tuner::Tuner(const Glib::ConstructParams& construct_params)
:
  Gtk::DrawingArea(construct_params)
{
  }

Tuner::Tuner(GxTuner* castitem)
:
  Gtk::DrawingArea((GtkDrawingArea*)(castitem))
{
  }


Tuner::Tuner(Tuner&& src) noexcept
: Gtk::DrawingArea(std::move(src))
{}

Tuner& Tuner::operator=(Tuner&& src) noexcept
{
  Gtk::DrawingArea::operator=(std::move(src));
  return *this;
}

Tuner::~Tuner() noexcept
{
  destroy_();
}

Tuner::CppClassType Tuner::tuner_class_; // initialize static member

GType Tuner::get_type()
{
  return tuner_class_.init().get_type();
}


GType Tuner::get_base_type()
{
  return gx_tuner_get_type();
}


Tuner::Tuner()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::DrawingArea(Glib::ConstructParams(tuner_class_.init()))
{
  

}

void Tuner::set_freq(double p1)
{
  gx_tuner_set_freq(gobj(), p1);
}

double Tuner::get_freq()
{
  return gx_tuner_get_freq(gobj());
}

void Tuner::set_reference_pitch(double p1)
{
  gx_tuner_set_reference_pitch(gobj(), p1);
}

double Tuner::get_reference_pitch()
{
  return gx_tuner_get_reference_pitch(gobj());
}

void Tuner::set_scale(double p1)
{
  gx_tuner_set_scale(gobj(), p1);
}

double Tuner::get_scale()
{
  return gx_tuner_get_scale(gobj());
}


Glib::PropertyProxy< double > Tuner::property_freq() 
{
  return Glib::PropertyProxy< double >(this, "freq");
}

Glib::PropertyProxy_ReadOnly< double > Tuner::property_freq() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "freq");
}

Glib::PropertyProxy< double > Tuner::property_reference_pitch() 
{
  return Glib::PropertyProxy< double >(this, "reference-pitch");
}

Glib::PropertyProxy_ReadOnly< double > Tuner::property_reference_pitch() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "reference-pitch");
}

Glib::PropertyProxy< double > Tuner::property_scale() 
{
  return Glib::PropertyProxy< double >(this, "scale");
}

Glib::PropertyProxy_ReadOnly< double > Tuner::property_scale() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "scale");
}


} // namespace Gxw


