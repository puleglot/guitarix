// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gxwmm/fastmeter.h>
#include <gxwmm/private/fastmeter_p.h>


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

#include <gxw/GxFastMeter.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Gxw::FastMeter* wrap(GxFastMeter* object, bool take_copy)
{
  return dynamic_cast<Gxw::FastMeter *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gxw
{


/* The *_Class implementation: */

const Glib::Class& FastMeter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FastMeter_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gx_fast_meter_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void FastMeter_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FastMeter_Class::wrap_new(GObject* o)
{
  return manage(new FastMeter((GxFastMeter*)(o)));

}


/* The implementation: */

FastMeter::FastMeter(const Glib::ConstructParams& construct_params)
:
  Gtk::DrawingArea(construct_params)
{
  }

FastMeter::FastMeter(GxFastMeter* castitem)
:
  Gtk::DrawingArea((GtkDrawingArea*)(castitem))
{
  }


FastMeter::FastMeter(FastMeter&& src) noexcept
: Gtk::DrawingArea(std::move(src))
{}

FastMeter& FastMeter::operator=(FastMeter&& src) noexcept
{
  Gtk::DrawingArea::operator=(std::move(src));
  return *this;
}

FastMeter::~FastMeter() noexcept
{
  destroy_();
}

FastMeter::CppClassType FastMeter::fastmeter_class_; // initialize static member

GType FastMeter::get_type()
{
  return fastmeter_class_.init().get_type();
}


GType FastMeter::get_base_type()
{
  return gx_fast_meter_get_type();
}


FastMeter::FastMeter()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::DrawingArea(Glib::ConstructParams(fastmeter_class_.init()))
{
  

}

void FastMeter::set(double lvl)
{
  gx_fast_meter_set(gobj(), lvl);
}

void FastMeter::set_by_power(double lvl)
{
  gx_fast_meter_set_by_power(gobj(), lvl);
}

void FastMeter::set_c_level(double lvl)
{
  gx_fast_meter_set_c_level(gobj(), lvl);
}

void FastMeter::clear()
{
  gx_fast_meter_clear(gobj());
}

void FastMeter::set_hold_count(int val)
{
  gx_fast_meter_set_hold_count(gobj(), val);
}


Glib::PropertyProxy< int > FastMeter::property_hold() 
{
  return Glib::PropertyProxy< int >(this, "hold");
}

Glib::PropertyProxy_ReadOnly< int > FastMeter::property_hold() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "hold");
}

Glib::PropertyProxy< int > FastMeter::property_dimen() 
{
  return Glib::PropertyProxy< int >(this, "dimen");
}

Glib::PropertyProxy_ReadOnly< int > FastMeter::property_dimen() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "dimen");
}

Glib::PropertyProxy< bool > FastMeter::property_horiz() 
{
  return Glib::PropertyProxy< bool >(this, "horiz");
}

Glib::PropertyProxy_ReadOnly< bool > FastMeter::property_horiz() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "horiz");
}

Glib::PropertyProxy< int > FastMeter::property_type() 
{
  return Glib::PropertyProxy< int >(this, "type");
}

Glib::PropertyProxy_ReadOnly< int > FastMeter::property_type() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "type");
}

Glib::PropertyProxy< Glib::ustring > FastMeter::property_var_id() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "var-id");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > FastMeter::property_var_id() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "var-id");
}


} // namespace Gxw


