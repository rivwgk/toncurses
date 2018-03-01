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
WINDOW* create_elem(int h, int w, int y, int x, char esym[2], double val);
void destroy_win(WINDOW* local_win);

int h = 4, w = 7;

#define MAX_ELEM 118

int x[MAX_ELEM] = {
    0,                                       17,
    0,1,                      12,13,14,15,16,17,
    0,1,                      12,13,14,15,16,17,
    0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,
    0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,
    0,1,
      1,2,3,4,5,6,7,8,9,10,11,12,13,14,
        2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,
    0,1,
      1,2,3,4,5,6,7,8,9,10,11,12,13,14,
        2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,
};
int y[MAX_ELEM] = {
    0,0,
    1,1,1,1,1,1,1,1,
    2,2,2,2,2,2,2,2,
    3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
    4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
    5,5,
        8,8,8,8,8,8,8,8,8,8,8,8,8,8,
        5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
    6,6,
        9,9,9,9,9,9,9,9,9,9,9,9,9,9,
        6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
};
int ch;
int iw;
char* esym[MAX_ELEM] = {          "H ","He",
    "Li","Be","B ","C ","N ","O ","F ","Ne",
    "Na","Mg","Al","Si","P ","S ","Cl","Ar",
    "Ca","K ",
    "Sc","Ti","V ","Cr","Mn","Fe","Co","Ni","Cu","Zn",
              "Ga","Ge","As","Se","Br","Kr",
    "Rb","Sr",
    "Y ","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd",
              "In","Sn","Sb","Te","I ","Xe",
    "Cs","Ba",
    "La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb",
    "Lu","Hf","Ta","W ","Re","Os","Ir","Pt","Au","Hg",
              "Tl","Pb","Bi","Po","At","Rn",
    "Fr","Ra",
    "Ac","Th","Pa","U ","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No",
    "Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn",
              "Nh","Fl","Mc","Lv","Ts","Og",
};
double val[MAX_ELEM] = {
    2.20,3.00,
    0.98,1.57,2.04,2.55,3.04,3.44,3.98,4.50,
    0.93,1.31,1.61,1.90,2.19,2.58,3.16,3.50,
    0.82,1.00,
              1.36,1.54,1.63,1.66,1.55,1.83,1.88,1.91,1.90,1.65,
              1.81,2.01,2.18,2.55,2.96,3.00,
    0.82,0.95,
              1.22,1.33,1.60,2.16,1.90,2.20,2.28,2.20,1.93,1.69,
              1.78,1.96,2.05,2.10,2.66,2.60,
    0.79,0.89,
         1.10,1.12,1.13,1.14,1.15,1.17,1.18,
         1.20,1.21,1.22,1.23,1.24,1.25,1.26,
              1.27,1.30,1.50,2.36,1.90,2.20,2.20,2.28,2.54,2.00,
              1.62,2.33,2.02,2.00,2.20,2.20,
    1.50,1.50,1.50,1.50,1.50,1.50,1.50,1.50,
    1.50,1.50,1.50,1.50,1.50,1.50,1.50,1.50,
    1.50,1.50,1.50,1.50,1.50,1.50,1.50,1.50,
    1.50,1.50,1.50,1.50,1.50,1.50,1.50,1.50,
};



#endif /* !TNC_MAIN_H */
