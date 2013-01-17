/* 
 * Copyright (C) 2013 Cupertino Miranda
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see <http://www.gnu.org/
 * licenses>.
 * 
 * Contributors:
 *     Cupertino Miranda - initial API and implementation
 */
#include "../Global.h"

const char font_6x10[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xC7,0x00,
0xCC,0x00,
0xD3,0x00,
0xDA,0x00,
0xE1,0x00,
0xE8,0x00,
0xEB,0x00,
0xF0,0x00,
0xF5,0x00,
0xFC,0x00,
0x03,0x01,
0x08,0x01,
0x0F,0x01,
0x14,0x01,
0x1B,0x01,
0x22,0x01,
0x29,0x01,
0x30,0x01,
0x37,0x01,
0x3E,0x01,
0x45,0x01,
0x4C,0x01,
0x53,0x01,
0x5A,0x01,
0x61,0x01,
0x66,0x01,
0x6B,0x01,
0x71,0x01,
0x78,0x01,
0x7E,0x01,
0x85,0x01,
0x8C,0x01,
0x93,0x01,
0x9A,0x01,
0xA1,0x01,
0xA8,0x01,
0xAF,0x01,
0xB6,0x01,
0xBD,0x01,
0xC4,0x01,
0xC9,0x01,
0xD0,0x01,
0xD7,0x01,
0xDE,0x01,
0xE5,0x01,
0xEC,0x01,
0xF3,0x01,
0xFA,0x01,
0x01,0x02,
0x08,0x02,
0x0F,0x02,
0x16,0x02,
0x1D,0x02,
0x24,0x02,
0x2B,0x02,
0x32,0x02,
0x39,0x02,
0x40,0x02,
0x45,0x02,
0x4C,0x02,
0x51,0x02,
0x58,0x02,
0x5F,0x02,
0x63,0x02,
0x6A,0x02,
0x71,0x02,
0x78,0x02,
0x7F,0x02,
0x86,0x02,
0x8D,0x02,
0x94,0x02,
0x9B,0x02,
0xA0,0x02,
0xAA,0x02,
0xB1,0x02,
0xB6,0x02,
0xBD,0x02,
0xC4,0x02,
0xCB,0x02,
0xD2,0x02,
0xD9,0x02,
0xE0,0x02,
0xE7,0x02,
0xEE,0x02,
0xF5,0x02,
0xFC,0x02,
0x03,0x03,
0x0A,0x03,
0x11,0x03,
0x18,0x03,
0x1E,0x03,
0x21,0x03,
0x27,0x03,

// space (32): w=1, h=1
0x80,0x08,0x95,
0x00,

// exclam (33): w=1, h=7
0x00,0x17,
0x5F,

// quotedbl (34): w=3, h=3
0x02,0x10,
0x07,0x00,0x07,

// numbersign (35): w=5, h=7
0x04,0x09,
0x14,0x7F,0x14,0x7F,0x14,

// dollar (36): w=5, h=7
0x04,0x09,
0x04,0x2A,0x7F,0x2A,0x10,

// percent (37): w=5, h=7
0x04,0x09,
0x62,0x15,0x2A,0x54,0x23,

// ampersand (38): w=5, h=7
0x04,0x09,
0x36,0x49,0x56,0x20,0x50,

// quotesingle (39): w=1, h=3
0x00,0x17,
0x07,

// parenleft (40): w=3, h=7
0x02,0x10,
0x1C,0x22,0x41,

// parenright (41): w=3, h=7
0x02,0x10,
0x41,0x22,0x1C,

// asterisk (42): w=5, h=5
0x04,0x29,
0x15,0x0E,0x04,0x0E,0x15,

// plus (43): w=5, h=5
0x04,0x29,
0x04,0x04,0x1F,0x04,0x04,

// comma (44): w=3, h=3
0x02,0xB0,
0x04,0x03,0x01,

// hyphen (45): w=5, h=1
0x04,0x69,
0x01,0x01,0x01,0x01,0x01,

// period (46): w=3, h=3
0x02,0xB0,
0x02,0x07,0x02,

// slash (47): w=5, h=7
0x04,0x09,
0x60,0x10,0x08,0x04,0x03,

// zero (48): w=5, h=7
0x04,0x09,
0x1C,0x22,0x41,0x22,0x1C,

// one (49): w=5, h=7
0x04,0x09,
0x44,0x42,0x7F,0x40,0x40,

// two (50): w=5, h=7
0x04,0x09,
0x62,0x51,0x49,0x49,0x46,

// three (51): w=5, h=7
0x04,0x09,
0x21,0x41,0x49,0x4D,0x33,

// four (52): w=5, h=7
0x04,0x09,
0x18,0x14,0x12,0x7F,0x10,

// five (53): w=5, h=7
0x04,0x09,
0x2F,0x49,0x45,0x45,0x39,

// six (54): w=5, h=7
0x04,0x09,
0x3C,0x52,0x49,0x49,0x30,

// seven (55): w=5, h=7
0x04,0x09,
0x01,0x61,0x11,0x0D,0x03,

// eight (56): w=5, h=7
0x04,0x09,
0x36,0x49,0x49,0x49,0x36,

// nine (57): w=5, h=7
0x04,0x09,
0x06,0x49,0x49,0x25,0x1E,

// colon (58): w=3, h=7
0x02,0x30,
0x22,0x77,0x22,

// semicolon (59): w=3, h=7
0x02,0x30,
0x42,0x37,0x12,

// less (60): w=4, h=7
0x03,0x0F,
0x08,0x14,0x22,0x41,

// equal (61): w=5, h=3
0x04,0x49,
0x05,0x05,0x05,0x05,0x05,

// greater (62): w=4, h=7
0x03,0x0F,
0x41,0x22,0x14,0x08,

// question (63): w=5, h=7
0x04,0x09,
0x02,0x01,0x59,0x05,0x02,

// at (64): w=5, h=7
0x04,0x09,
0x3E,0x41,0x59,0x55,0x0E,

// A (65): w=5, h=7
0x04,0x09,
0x7C,0x12,0x11,0x12,0x7C,

// B (66): w=5, h=7
0x04,0x09,
0x41,0x7F,0x49,0x49,0x36,

// C (67): w=5, h=7
0x04,0x09,
0x3E,0x41,0x41,0x41,0x22,

// D (68): w=5, h=7
0x04,0x09,
0x41,0x7F,0x41,0x41,0x3E,

// E (69): w=5, h=7
0x04,0x09,
0x7F,0x49,0x49,0x49,0x41,

// F (70): w=5, h=7
0x04,0x09,
0x7F,0x09,0x09,0x09,0x01,

// G (71): w=5, h=7
0x04,0x09,
0x3E,0x41,0x41,0x51,0x32,

// H (72): w=5, h=7
0x04,0x09,
0x7F,0x08,0x08,0x08,0x7F,

// I (73): w=3, h=7
0x02,0x10,
0x41,0x7F,0x41,

// J (74): w=5, h=7
0x04,0x09,
0x20,0x40,0x41,0x3F,0x01,

// K (75): w=5, h=7
0x04,0x09,
0x7F,0x08,0x14,0x22,0x41,

// L (76): w=5, h=7
0x04,0x09,
0x7F,0x40,0x40,0x40,0x40,

// M (77): w=5, h=7
0x04,0x09,
0x7F,0x04,0x08,0x04,0x7F,

// N (78): w=5, h=7
0x04,0x09,
0x7F,0x04,0x08,0x10,0x7F,

// O (79): w=5, h=7
0x04,0x09,
0x3E,0x41,0x41,0x41,0x3E,

// P (80): w=5, h=7
0x04,0x09,
0x7F,0x09,0x09,0x09,0x06,

// Q (81): w=5, h=8
0x04,0x09,
0x3E,0x41,0x61,0x41,0xBE,

// R (82): w=5, h=7
0x04,0x09,
0x7F,0x09,0x19,0x29,0x46,

// S (83): w=5, h=7
0x04,0x09,
0x26,0x49,0x49,0x49,0x32,

// T (84): w=5, h=7
0x04,0x09,
0x01,0x01,0x7F,0x01,0x01,

// U (85): w=5, h=7
0x04,0x09,
0x3F,0x40,0x40,0x40,0x3F,

// V (86): w=5, h=7
0x04,0x09,
0x07,0x38,0x40,0x38,0x07,

// W (87): w=5, h=7
0x04,0x09,
0x7F,0x20,0x18,0x20,0x7F,

// X (88): w=5, h=7
0x04,0x09,
0x63,0x14,0x08,0x14,0x63,

// Y (89): w=5, h=7
0x04,0x09,
0x03,0x04,0x78,0x04,0x03,

// Z (90): w=5, h=7
0x04,0x09,
0x61,0x51,0x49,0x45,0x43,

// bracketleft (91): w=3, h=7
0x02,0x10,
0x7F,0x41,0x41,

// backslash (92): w=5, h=7
0x04,0x09,
0x03,0x04,0x08,0x10,0x60,

// bracketright (93): w=3, h=7
0x02,0x10,
0x41,0x41,0x7F,

// asciicircum (94): w=5, h=3
0x04,0x09,
0x04,0x02,0x01,0x02,0x04,

// underscore (95): w=5, h=1
0x04,0xE9,
0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=1
0x01,0x16,
0x00,0x03,

// a (97): w=5, h=5
0x04,0x49,
0x08,0x15,0x15,0x15,0x1E,

// b (98): w=5, h=7
0x04,0x09,
0x7F,0x28,0x44,0x44,0x38,

// c (99): w=5, h=5
0x04,0x49,
0x0E,0x11,0x11,0x11,0x0A,

// d (100): w=5, h=7
0x04,0x09,
0x38,0x44,0x44,0x28,0x7F,

// e (101): w=5, h=5
0x04,0x49,
0x0E,0x15,0x15,0x15,0x06,

// f (102): w=5, h=7
0x04,0x09,
0x08,0x7E,0x09,0x09,0x02,

// g (103): w=5, h=7
0x04,0x49,
0x26,0x49,0x49,0x49,0x3F,

// h (104): w=5, h=7
0x04,0x09,
0x7F,0x08,0x04,0x04,0x78,

// i (105): w=3, h=7
0x02,0x10,
0x44,0x7D,0x40,

// j (106): w=4, h=9
0x23,0x0F,
0xC0,0x00,0x04,0xFD,
0x00,0x01,0x01,0x00,

// k (107): w=5, h=7
0x04,0x09,
0x7F,0x10,0x10,0x28,0x44,

// l (108): w=3, h=7
0x02,0x10,
0x41,0x7F,0x40,

// m (109): w=5, h=5
0x04,0x49,
0x1F,0x01,0x0E,0x01,0x1E,

// n (110): w=5, h=5
0x04,0x49,
0x1F,0x02,0x01,0x01,0x1E,

// o (111): w=5, h=5
0x04,0x49,
0x0E,0x11,0x11,0x11,0x0E,

// p (112): w=5, h=7
0x04,0x49,
0x7F,0x0A,0x11,0x11,0x0E,

// q (113): w=5, h=7
0x04,0x49,
0x0E,0x11,0x11,0x0A,0x7F,

// r (114): w=5, h=5
0x04,0x49,
0x1F,0x02,0x01,0x01,0x02,

// s (115): w=5, h=5
0x04,0x49,
0x12,0x15,0x15,0x15,0x08,

// t (116): w=5, h=7
0x04,0x09,
0x04,0x3F,0x44,0x44,0x20,

// u (117): w=5, h=5
0x04,0x49,
0x0F,0x10,0x10,0x08,0x1F,

// v (118): w=5, h=5
0x04,0x49,
0x03,0x0C,0x10,0x0C,0x03,

// w (119): w=5, h=5
0x04,0x49,
0x0F,0x10,0x0C,0x10,0x0F,

// x (120): w=5, h=5
0x04,0x49,
0x11,0x0A,0x04,0x0A,0x11,

// y (121): w=5, h=7
0x04,0x49,
0x27,0x48,0x48,0x44,0x3F,

// z (122): w=5, h=5
0x04,0x49,
0x11,0x19,0x15,0x13,0x11,

// braceleft (123): w=4, h=7
0x03,0x0F,
0x08,0x2A,0x55,0x41,

// bar (124): w=1, h=7
0x00,0x17,
0x7F,

// braceright (125): w=4, h=7
0x03,0x0F,
0x41,0x55,0x2A,0x08,

// asciitilde (126): w=5, h=3
0x04,0x09,
0x06,0x01,0x02,0x04,0x03

};
// 624 bytes
// 814 bytes with FAST_FONT_INDEX
