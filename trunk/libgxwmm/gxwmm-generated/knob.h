// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GXWMM_KNOB_H
#define _GXWMM_KNOB_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <gxwmm/regler.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GxKnob = struct _GxKnob;
using GxKnobClass = struct _GxKnobClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gxw
{ class Knob_Class; } // namespace Gxw
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gxw {


class Knob: public Gxw::Regler {
	public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Knob CppObjectType;
  typedef Knob_Class CppClassType;
  typedef GxKnob BaseObjectType;
  typedef GxKnobClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Knob(Knob&& src) noexcept;
  Knob& operator=(Knob&& src) noexcept;

  // noncopyable
  Knob(const Knob&) = delete;
  Knob& operator=(const Knob&) = delete;

  ~Knob() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Knob_Class;
  static CppClassType knob_class_;

protected:
  explicit Knob(const Glib::ConstructParams& construct_params);
  explicit Knob(GxKnob* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GxKnob*       gobj()       { return reinterpret_cast<GxKnob*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GxKnob* gobj() const { return reinterpret_cast<GxKnob*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

	protected:
	Knob();


};


} // namespace Gxw


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gxw::Knob
   */
  Gxw::Knob* wrap(GxKnob* object, bool take_copy = false);
} //namespace Glib


#endif /* _GXWMM_KNOB_H */

