/* rss.h - Data tables for Reduced Space Symbology */

/*
    libzint - the open source barcode library
    Copyright (C) 2007 Robin Stuart <robin@zint.org.uk>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#define NUMERIC		110
#define ALPHA		97
#define ISOIEC		105
#define	INVALID_CHAR	100
#define	ANY_ENC		120
#define ALPHA_OR_ISO	121

/* RSS-14 Tables */
const int g_sum_table[9] = { 0, 161, 961, 2015, 2715, 0, 336, 1036, 1516};
const int t_table[9] = { 1, 10, 34, 70, 126, 4, 20, 48, 81};
const int modules_odd[9] = { 12, 10, 8, 6, 4, 5, 7, 9, 11 };
const int modules_even[9] = { 4, 6, 8, 10, 12, 10, 8, 6, 4 };
const int widest_odd[9] = { 8, 6, 4, 3, 1, 2, 4, 6, 8 };
const int widest_even[9] = { 1, 3, 5, 6, 8, 7, 5, 3, 1 };
int widths[8];

const int finder_pattern[45] = {
	3, 8, 2, 1, 1,
	3, 5, 5, 1, 1,
	3, 3, 7, 1, 1,
	3, 1, 9, 1, 1,
	2, 7, 4, 1, 1,
	2, 5, 6, 1, 1,
	2, 3, 8, 1, 1,
	1, 5, 7, 1, 1,
	1, 3, 9, 1, 1
};

const int checksum_weight[32] = { /* Table 5 */
	1, 3, 9, 27, 2, 6, 18, 54,
	4, 12, 36, 29, 8, 24, 72, 58,
	16, 48, 65, 37, 32, 17, 51, 74,
	64, 34, 23, 69, 49, 68, 46, 59
};

/* RSS Limited Tables */
const int t_even_ltd[7] = { 28, 728, 6454, 203, 2408, 1, 16632 };
const int modules_odd_ltd[7] = { 17, 13, 9, 15, 11, 19, 7 };
const int modules_even_ltd[7] = { 9, 13, 17, 11, 15, 7, 19 };
const int widest_odd_ltd[7] = { 6, 5, 3, 5, 4, 8, 1 };
const int widest_even_ltd[7] = { 3, 4, 6, 4, 5, 1, 8 };
const int checksum_weight_ltd[28] = { /* Table 7 */
	1, 3, 9, 27, 81, 65, 17, 51, 64, 14, 42, 37, 22, 66,
	20, 60, 2, 6, 18, 54, 73, 41, 34, 13, 39, 28, 84, 74
};
const int finder_pattern_ltd[1232] = {
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 2, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 3, 2, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 3, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 3, 1, 1, 1,
	1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 3, 2, 1, 1,
	1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 3, 1, 1, 1,
	1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 3, 1, 1, 1,
	1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 3, 1, 1, 1,
	1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 3, 2, 1, 1,
	1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 3, 1, 1, 1,
	1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 3, 1, 1, 1,
	1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 3, 1, 1, 1,
	1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1,
	1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 3, 2, 1, 1,
	1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 1,
	1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 3, 1, 1, 1,
	1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 3, 1, 1, 1,
	1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1,
	1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 3, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 2, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 3, 2, 1, 2, 1, 1, 1,
	1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1,
	1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1,
	1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1,
	1, 1, 1, 1, 1, 3, 1, 1, 2, 1, 2, 1, 1, 1,
	1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1,
	1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1,
	1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1,
	1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1,
	1, 1, 1, 3, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1,
	1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1,
	1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1,
	1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1,
	1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1,
	1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1,
	1, 3, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 3, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 3, 2, 1, 2, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 2, 1, 1,
	1, 1, 1, 2, 1, 1, 1, 1, 3, 1, 1, 2, 1, 1,
	1, 2, 1, 1, 1, 1, 1, 1, 3, 1, 1, 2, 1, 1,
	1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 3, 1, 1,
	1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1,
	1, 1, 1, 1, 1, 1, 2, 1, 1, 3, 2, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1,
	1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1,
	1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1,
	1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1,
	1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1,
	1, 1, 1, 3, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1,
	1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1,
	1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1,
	1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1,
	1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 3, 1, 1,
	1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1,
	1, 1, 1, 1, 2, 1, 1, 1, 1, 3, 2, 1, 1, 1,
	1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1,
	1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 1,
	1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1,
	1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1,
	1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1,
	1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1,
	1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1,
	1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1,
	1, 3, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1,
	1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1,
	1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1,
	1, 1, 2, 1, 1, 1, 1, 1, 1, 3, 2, 1, 1, 1,
	1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1,
	1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1,
	1, 1, 2, 1, 1, 1, 1, 3, 1, 1, 2, 1, 1, 1,
	1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1,
	1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1,
	1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1,
	2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1,
	2, 1, 1, 1, 1, 1, 1, 1, 1, 3, 2, 1, 1, 1,
	2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1,
	2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1,
	2, 1, 1, 1, 1, 1, 1, 3, 1, 1, 2, 1, 1, 1,
	2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1,
	2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 1,
	2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1
};

/* RSS Expanded Tables */
const int g_sum_exp[5] = { 0, 348, 1388, 2948, 3988 };
const int t_even_exp[5] = { 4, 20, 52, 104, 204 };
const int modules_odd_exp[5] = { 12, 10, 8, 6, 4 };
const int modules_even_exp[5] = { 5, 7, 9, 11, 13 };
const int widest_odd_exp[5] = { 7, 5, 4, 3, 1 };
const int widest_even_exp[5] = { 2, 4, 5, 6, 8 };
const int checksum_weight_exp[184] = { /* Table 14 */
	1, 3, 9, 27, 81, 32, 96, 77,
	20, 60, 180, 118, 143, 7, 21, 63,
	189, 145, 13, 39, 117, 140, 209, 205,
	193, 157, 49, 147, 19, 57, 171, 91,
	62, 186, 136, 197, 169, 85, 44, 132,
	185, 133, 188, 142, 4, 12, 36, 108,
	113, 128, 173, 97, 80, 29, 87, 50,
	150, 28, 84, 41, 123, 158, 52, 156,
	46, 138, 203, 187, 139, 206, 196, 166,
	76, 17, 51, 153, 37, 111, 122, 155,
	43, 129, 176, 106, 107, 110, 119, 146,
	16, 48, 144, 10, 30, 90, 59, 177,
	109, 116, 137, 200, 178, 112, 125, 164,
	70, 210, 208, 202, 184, 130, 179, 115,
	134, 191, 151, 31, 93, 68, 204, 190,
	148, 22, 66, 198, 172, 94, 71, 2,
	6, 18, 54, 162, 64, 192, 154, 40,
	120, 149, 25, 75, 14, 42, 126, 167,
	79, 26, 78, 23, 69, 207, 199, 175,
	103, 98, 83, 38, 114, 131, 182, 124,
	161, 61, 183, 127, 170, 88, 53, 159,
	55, 165, 73, 8, 24, 72, 5, 15,
	45, 135, 194, 160, 58, 174, 100, 89
};
const int finder_pattern_exp[60] = { /* Table 15 */
	1, 8, 4, 1, 1,
	1, 1, 4, 8, 1,
	3, 6, 4, 1, 1,
	1, 1, 4, 6, 3,
	3, 4, 6, 1, 1,
	1, 1, 6, 4, 3,
	3, 2, 8, 1, 1,
	1, 1, 8, 2, 3,
	2, 6, 5, 1, 1,
	1, 1, 5, 6, 2,
	2, 2, 9, 1, 1,
	1, 1, 9, 2, 2
};
const int finder_sequence[198] = { /* Table 16 */
	1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	1, 4, 3, 0, 0, 0, 0, 0, 0, 0, 0,
	1, 6, 3, 8, 0, 0, 0, 0, 0, 0, 0,
	1, 10, 3, 8, 5, 0, 0, 0, 0, 0, 0,
	1, 10, 3, 8, 7, 12, 0, 0, 0, 0, 0,
	1, 10, 3, 8, 9, 12, 11, 0, 0, 0, 0,
	1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0,
	1, 2, 3, 4, 5, 6, 7, 10, 9, 0, 0,
	1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 0,
	1, 2, 3, 4, 5, 8, 7, 10, 9, 12, 11
};
const int weight_rows[210] = {
	0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 5, 6, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 9, 10, 3, 4, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 17, 18, 3, 4, 13, 14, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 17, 18, 3, 4, 13, 14, 11, 12, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 17, 18, 3, 4, 13, 14, 15, 16, 21, 22, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 0, 0, 0, 0, 0,
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 17, 18, 15, 16, 0, 0, 0, 0,
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 17, 18, 19, 20, 21, 22, 0, 0,
	0, 1, 2, 3, 4, 5, 6, 7, 8, 13, 14, 11, 12, 17, 18, 15, 16, 21, 22, 19, 20
};
