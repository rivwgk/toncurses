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

#include "window.h"

WINDOW* create_elem(int h, int w, int y, int x, char esym[2], double val)
{
  WINDOW* local_win;
  local_win = newwin(h,w,h*y,w*x);
  mvwprintw(local_win, 2, 1, "%f1.2", val);
  wborder(local_win,' ','|',' ','-',' ','|','-','+');
  mvwprintw(local_win, 0, 1, esym);
  wrefresh(local_win);
  return local_win;
}

WINDOW* create_newwin(int h, int w, int sy, int sx)
{
  WINDOW* local_win;
  local_win = newwin(h,w,sy,sx);
  box(local_win,0,0);
  wrefresh(local_win);
  return local_win;
}

void destroy_win(WINDOW* local_win)
{
  wborder(local_win,' ',' ',' ',' ',' ',' ',' ',' ');
  wrefresh(local_win);
  delwin(local_win);
}
