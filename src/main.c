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

#include "main.h"

int
main(int argc, char* argv[argc+1])
{
    char str[80];
    int  row,col;
    WINDOW* elem;
    int x,y;
    int ch;

    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    getmaxyx(stdscr, row, col);

    x = 6;
    y = 4;

    elem = create_elem(y,x,"He",0.0);

    refresh();
    wrefresh(elem);

    while ((ch = getch()) != 'q') {
        switch(ch) {
            case KEY_RIGHT:
               destroy_win(elem);
               elem = create_elem(y,++x,"He",0.0);
               break;
            case KEY_LEFT:
               destroy_win(elem);
               elem = create_elem(y,--x,"He",0.0);
               break;
            case KEY_UP:
               destroy_win(elem);
               elem = create_elem(--y,x,"He",0.0);
               break;
            case KEY_DOWN:
               destroy_win(elem);
               elem = create_elem(++y,x,"He",0.0);
               break;
        }
    }

    endwin();
    return EXIT_SUCCESS;
}

WINDOW* create_elem(int y, int x, char esym[2], double val)
{
  int h = 4, w = 6;
  WINDOW* local_win;
  local_win = newwin(h,w,y,x);
  mvwprintw(local_win, 1, w/2-1, esym);
  box(local_win,0,0);
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
