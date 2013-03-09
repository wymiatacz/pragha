/*************************************************************************/
/* Copyright (C) 2013 matias <mati86dl@gmail.com>			 */
/* 									 */
/* This program is free software: you can redistribute it and/or modify	 */
/* it under the terms of the GNU General Public License as published by	 */
/* the Free Software Foundation, either version 3 of the License, or	 */
/* (at your option) any later version.					 */
/* 									 */
/* This program is distributed in the hope that it will be useful,	 */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of	 */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the	 */
/* GNU General Public License for more details.				 */
/* 									 */
/* You should have received a copy of the GNU General Public License	 */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */
/*************************************************************************/

#ifndef PRAGHA_SCANNER_H
#define PRAGHA_SCANNER_H

#define PROGRESS_BAR_WIDTH         300

typedef struct _PraghaScanner PraghaScanner;

void
pragha_scanner_update_library(PraghaScanner *scanner);

void
pragha_scanner_scan_library(PraghaScanner *scanner);

void
pragha_scanner_free(PraghaScanner *scanner);

PraghaScanner *
pragha_scanner_new();

#endif /* PRAGHA_SCANNER_H */