/* This file is part of toncurses
** (C) 2018 by Tobias Ehlert <rivwgk24@bitmessage.ch>
**
** This program is free software, you are allowed to redistribute it and/or
** modify it under the terms of the GNU General Public License as published
** by the Free Software Foundation under version 3 of the License.
**
** This program is distributed in the hope that it will be useful, but WITH-
** OUT ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
** FITNESS FOR A PARTICULAR PURPOSE.
**
** You should have received a copy of the GNU GPL along with this program.
** If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TNC_MAIN_H
#define TNC_MAIN_H 1

#include <assert.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <tgmath.h>

#include <ncurses.h>

WINDOW* create_newwin(int height, int width, int starty, int startx);
WINDOW* create_elem(int h, int w, int y, int x, char const esym[2], double val);
void destroy_win(WINDOW* local_win);

#endif /* !TNC_MAIN_H */
