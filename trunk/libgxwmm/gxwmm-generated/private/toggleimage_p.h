// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GXWMM_TOGGLEIMAGE_P_H
#define _GXWMM_TOGGLEIMAGE_P_H


#include <gtkmm/private/misc_p.h>

#include <glibmm/class.h>

namespace Gxw
{

class ToggleImage_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = ToggleImage;
  using BaseObjectType = GxToggleImage;
  using BaseClassType = GxToggleImageClass;
  using CppClassParent = Gtk::Misc_Class;
  using BaseClassParent = GtkMiscClass;

  friend class ToggleImage;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gxw


#endif /* _GXWMM_TOGGLEIMAGE_P_H */

