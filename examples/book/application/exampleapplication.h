/* gtkmm example Copyright (C) 2002 gtkmm development team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef GTKMM_EXAMPLEAPPLICATION_H
#define GTKMM_EXAMPLEAPPLICATION_H

#include <gtkmm.h>

class ExampleApplication: public Gtk::Application
{
public:
  explicit ExampleApplication(const Glib::ustring& appid, Gio::ApplicationFlags flags =
    Gio::APPLICATION_FLAGS_NONE);
  void new_window(const Glib::RefPtr<Gio::File>& file);

protected:
  void on_activate();
  void on_open(const Gio::Application::type_vec_files& files,
    const Glib::ustring& hint);

  void on_window_hide(Gtk::Window* window);
};

#endif /* GTKMM_EXAMPLEAPPLICATION_H */
