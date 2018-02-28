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

#include <stdlib.h>
#include <stdint.h>

struct tnc_element
{
    uint16_t atomic_no;
    char     symbol[2];
    double   ram;
};

extern struct tnc_element g_pse[2];

extern void tnc_export_pse(char const *const path);
extern void tnc_import_pse(char const *const path);

#endif /* !TNC_PSE_H */
