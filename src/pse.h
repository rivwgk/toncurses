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

#ifndef TNC_PSE_H
#define TNC_PSE_H 1

struct tnc_element
{
    uint16_t  oz;
    char      symbol[2];
    double    ram;
};

struct tnc_element g_pse[2];

#endif /* !TNC_PSE_H */
