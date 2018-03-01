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
    WINDOW* elem[MAX_ELEM];
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    getmaxyx(stdscr, row, col);

    iw = 0;

    for (size_t i = 0; i < MAX_ELEM; i++){
        elem[i] = create_elem(h,w,y[i],x[i],esym[i],val[i]);
        wrefresh(elem[i]);
    }

    refresh();

    while ((ch = getch()) != 'q') {
        switch(ch) {
            case 'r':
               for (size_t i = 0; i < MAX_ELEM; i++){
                   destroy_win(elem[i]);
                   elem[i] = create_elem(h,w,y[i],x[i],esym[i],val[i]);
               }
               break;
        }
    }

    endwin();
    return EXIT_SUCCESS;
}
