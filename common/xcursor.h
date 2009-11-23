/*
 * xcursor.h - X cursors management
 *
 * Copyright © 2008 Julien Danjou <julien@danjou.info>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef AWESOME_COMMON_XCURSORS_H
#define AWESOME_COMMON_XCURSORS_H

#include <X11/cursorfont.h>
#include <xcb/xcb.h>

#define CURSOR_DEFAULT_NAME "left_ptr"

uint16_t xcursor_font_fromstr(const char *);
const char * xcursor_font_tostr(uint16_t);
xcb_cursor_t xcursor_new(xcb_connection_t *, uint16_t);

#endif
// vim: filetype=c:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:encoding=utf-8:textwidth=80
