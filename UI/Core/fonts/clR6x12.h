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

const char font_clR6x12[] PROGMEM = {
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
0xF3,0x00,
0xFB,0x00,
0x02,0x01,
0x09,0x01,
0x0E,0x01,
0x15,0x01,
0x19,0x01,
0x25,0x01,
0x2C,0x01,
0x30,0x01,
0x37,0x01,
0x3E,0x01,
0x45,0x01,
0x4C,0x01,
0x53,0x01,
0x5A,0x01,
0x61,0x01,
0x68,0x01,
0x6C,0x01,
0x71,0x01,
0x79,0x01,
0x80,0x01,
0x88,0x01,
0x8F,0x01,
0x96,0x01,
0x9D,0x01,
0xA4,0x01,
0xAB,0x01,
0xB2,0x01,
0xB9,0x01,
0xC0,0x01,
0xC7,0x01,
0xCE,0x01,
0xD5,0x01,
0xDC,0x01,
0xE3,0x01,
0xEA,0x01,
0xF1,0x01,
0xF8,0x01,
0xFF,0x01,
0x06,0x02,
0x0D,0x02,
0x14,0x02,
0x1B,0x02,
0x22,0x02,
0x29,0x02,
0x30,0x02,
0x37,0x02,
0x3E,0x02,
0x45,0x02,
0x4C,0x02,
0x54,0x02,
0x60,0x02,
0x68,0x02,
0x6F,0x02,
0x78,0x02,
0x7C,0x02,
0x83,0x02,
0x8A,0x02,
0x91,0x02,
0x98,0x02,
0x9F,0x02,
0xA6,0x02,
0xAD,0x02,
0xB4,0x02,
0xB9,0x02,
0xC3,0x02,
0xC9,0x02,
0xCE,0x02,
0xD5,0x02,
0xDC,0x02,
0xE3,0x02,
0xEA,0x02,
0xF1,0x02,
0xF7,0x02,
0xFE,0x02,
0x04,0x03,
0x0B,0x03,
0x12,0x03,
0x19,0x03,
0x20,0x03,
0x27,0x03,
0x2E,0x03,
0x36,0x03,
0x3A,0x03,
0x42,0x03,

// space (32): w=1, h=1
0x80,0x0A,0x95,
0x00,

// exclam (33): w=1, h=8
0x00,0x17,
0xBF,

// quotedbl (34): w=3, h=3
0x02,0x10,
0x07,0x00,0x07,

// numbersign (35): w=5, h=7
0x04,0x29,
0x14,0x7F,0x14,0x7F,0x14,

// dollar (36): w=5, h=7
0x04,0x29,
0x24,0x2A,0x7F,0x2A,0x12,

// percent (37): w=5, h=7
0x04,0x29,
0x23,0x13,0x08,0x64,0x62,

// ampersand (38): w=5, h=7
0x04,0x29,
0x36,0x49,0x51,0x21,0x50,

// quotesingle (39): w=1, h=3
0x00,0x17,
0x07,

// parenleft (40): w=3, h=10
0x22,0x15,
0x7C,0x83,0x00,
0x00,0x01,0x06,

// parenright (41): w=3, h=10
0x22,0x10,
0x00,0x83,0x7C,
0x06,0x01,0x00,

// asterisk (42): w=5, h=5
0x04,0x49,
0x0A,0x04,0x1F,0x04,0x0A,

// plus (43): w=5, h=5
0x04,0x49,
0x04,0x04,0x1F,0x04,0x04,

// comma (44): w=3, h=4
0x02,0xD0,
0x08,0x07,0x03,

// hyphen (45): w=5, h=1
0x04,0x89,
0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x01,0xD6,
0x03,0x03,

// slash (47): w=5, h=9
0x24,0x09,
0x80,0x60,0x18,0x06,0x01,
0x03,0x00,0x00,0x00,0x00,

// zero (48): w=5, h=8
0x04,0x09,
0x7E,0x91,0x89,0x85,0x7E,

// one (49): w=2, h=8
0x01,0x16,
0x02,0xFF,

// two (50): w=5, h=8
0x04,0x09,
0xC2,0xA1,0x91,0x89,0x86,

// three (51): w=5, h=8
0x04,0x09,
0x42,0x81,0x89,0x89,0x76,

// four (52): w=5, h=8
0x04,0x09,
0x20,0x38,0xA6,0xFF,0xA0,

// five (53): w=5, h=8
0x04,0x09,
0x4F,0x89,0x89,0x89,0x71,

// six (54): w=5, h=8
0x04,0x09,
0x7C,0x8A,0x89,0x89,0x70,

// seven (55): w=5, h=8
0x04,0x09,
0x03,0x01,0xC1,0x31,0x0F,

// eight (56): w=5, h=8
0x04,0x09,
0x76,0x89,0x89,0x89,0x76,

// nine (57): w=5, h=8
0x04,0x09,
0x0E,0x91,0x91,0x51,0x3E,

// colon (58): w=2, h=6
0x01,0x56,
0x33,0x33,

// semicolon (59): w=3, h=8
0x02,0x50,
0x80,0x73,0x33,

// less (60): w=6, h=5
0x05,0x48,
0x04,0x04,0x0A,0x0A,0x11,0x11,

// equal (61): w=5, h=3
0x04,0x69,
0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=5
0x05,0x48,
0x11,0x11,0x0A,0x0A,0x04,0x04,

// question (63): w=5, h=8
0x04,0x09,
0x02,0x01,0xB1,0x09,0x06,

// at (64): w=5, h=7
0x04,0x29,
0x3E,0x41,0x5D,0x5D,0x0E,

// A (65): w=5, h=7
0x04,0x29,
0x7C,0x12,0x11,0x12,0x7C,

// B (66): w=5, h=7
0x04,0x29,
0x7F,0x49,0x49,0x49,0x36,

// C (67): w=5, h=7
0x04,0x29,
0x3E,0x41,0x41,0x41,0x22,

// D (68): w=5, h=7
0x04,0x29,
0x7F,0x41,0x41,0x22,0x1C,

// E (69): w=5, h=7
0x04,0x29,
0x7F,0x49,0x49,0x49,0x41,

// F (70): w=5, h=7
0x04,0x29,
0x7F,0x09,0x09,0x09,0x01,

// G (71): w=5, h=7
0x04,0x29,
0x3E,0x41,0x41,0x49,0x7A,

// H (72): w=5, h=7
0x04,0x29,
0x7F,0x08,0x08,0x08,0x7F,

// I (73): w=5, h=7
0x04,0x29,
0x41,0x41,0x7F,0x41,0x41,

// J (74): w=5, h=7
0x04,0x29,
0x30,0x40,0x41,0x41,0x3F,

// K (75): w=5, h=7
0x04,0x29,
0x7F,0x08,0x14,0x22,0x41,

// L (76): w=5, h=7
0x04,0x29,
0x7F,0x40,0x40,0x40,0x40,

// M (77): w=5, h=7
0x04,0x29,
0x7F,0x02,0x0C,0x02,0x7F,

// N (78): w=5, h=7
0x04,0x29,
0x7F,0x06,0x08,0x30,0x7F,

// O (79): w=5, h=7
0x04,0x29,
0x3E,0x41,0x41,0x41,0x3E,

// P (80): w=5, h=7
0x04,0x29,
0x7F,0x09,0x09,0x09,0x06,

// Q (81): w=5, h=8
0x04,0x29,
0x3E,0x41,0x41,0xC1,0xBE,

// R (82): w=5, h=7
0x04,0x29,
0x7F,0x09,0x19,0x29,0x46,

// S (83): w=5, h=7
0x04,0x29,
0x26,0x49,0x49,0x49,0x32,

// T (84): w=5, h=7
0x04,0x29,
0x01,0x01,0x7F,0x01,0x01,

// U (85): w=5, h=7
0x04,0x29,
0x3F,0x40,0x40,0x40,0x3F,

// V (86): w=5, h=7
0x04,0x29,
0x07,0x18,0x60,0x18,0x07,

// W (87): w=5, h=7
0x04,0x29,
0x7F,0x20,0x18,0x20,0x7F,

// X (88): w=5, h=7
0x04,0x29,
0x63,0x14,0x08,0x14,0x63,

// Y (89): w=5, h=7
0x04,0x29,
0x03,0x04,0x78,0x04,0x03,

// Z (90): w=5, h=7
0x04,0x29,
0x61,0x51,0x49,0x45,0x43,

// bracketleft (91): w=3, h=10
0x22,0x15,
0xFF,0x00,0x00,
0x07,0x06,0x06,

// backslash (92): w=5, h=9
0x24,0x09,
0x01,0x06,0x18,0x60,0x80,
0x00,0x00,0x00,0x00,0x03,

// bracketright (93): w=3, h=10
0x22,0x10,
0x00,0x00,0xFF,
0x06,0x06,0x07,

// asciicircum (94): w=5, h=3
0x04,0x09,
0x04,0x02,0x01,0x02,0x04,

// underscore (95): w=6, h=1
0x85,0x08,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=2
0x01,0x16,
0x01,0x02,

// a (97): w=5, h=5
0x04,0x69,
0x0E,0x11,0x11,0x09,0x1F,

// b (98): w=5, h=8
0x04,0x09,
0xFF,0x88,0x88,0x88,0x70,

// c (99): w=5, h=5
0x04,0x69,
0x0E,0x11,0x11,0x11,0x11,

// d (100): w=5, h=8
0x04,0x09,
0x70,0x88,0x88,0x88,0xFF,

// e (101): w=5, h=5
0x04,0x69,
0x0E,0x15,0x15,0x15,0x06,

// f (102): w=5, h=8
0x04,0x09,
0x08,0xFE,0x09,0x09,0x01,

// g (103): w=5, h=8
0x04,0x69,
0x0E,0x91,0x91,0x91,0x7F,

// h (104): w=5, h=8
0x04,0x09,
0xFF,0x08,0x08,0x08,0xF0,

// i (105): w=3, h=8
0x02,0x10,
0x88,0xFB,0x80,

// j (106): w=4, h=11
0x23,0x0F,
0x00,0x08,0x08,0xFB,
0x04,0x04,0x04,0x03,

// k (107): w=4, h=8
0x03,0x0F,
0xFF,0x20,0x50,0x88,

// l (108): w=3, h=8
0x02,0x10,
0x81,0xFF,0x80,

// m (109): w=5, h=5
0x04,0x69,
0x1F,0x01,0x0E,0x01,0x1E,

// n (110): w=5, h=5
0x04,0x69,
0x1F,0x02,0x01,0x01,0x1E,

// o (111): w=5, h=5
0x04,0x69,
0x0E,0x11,0x11,0x11,0x0E,

// p (112): w=5, h=8
0x04,0x69,
0xFF,0x11,0x11,0x11,0x0E,

// q (113): w=5, h=8
0x04,0x69,
0x0E,0x11,0x11,0x11,0xFF,

// r (114): w=4, h=5
0x03,0x6F,
0x1F,0x02,0x01,0x01,

// s (115): w=5, h=5
0x04,0x69,
0x12,0x15,0x15,0x15,0x09,

// t (116): w=4, h=8
0x03,0x0F,
0x08,0x7F,0x88,0x80,

// u (117): w=5, h=5
0x04,0x69,
0x0F,0x10,0x10,0x08,0x1F,

// v (118): w=5, h=5
0x04,0x69,
0x01,0x07,0x18,0x07,0x01,

// w (119): w=5, h=5
0x04,0x69,
0x0F,0x10,0x0E,0x10,0x0F,

// x (120): w=5, h=5
0x04,0x69,
0x11,0x0A,0x04,0x0A,0x11,

// y (121): w=5, h=8
0x04,0x69,
0x0F,0x90,0x90,0x90,0x7F,

// z (122): w=5, h=5
0x04,0x69,
0x11,0x19,0x15,0x13,0x11,

// braceleft (123): w=3, h=10
0x22,0x15,
0x10,0xEF,0x00,
0x00,0x01,0x06,

// bar (124): w=1, h=10
0x20,0x17,
0xFF,
0x07,

// braceright (125): w=3, h=10
0x22,0x10,
0x00,0xEF,0x10,
0x06,0x01,0x00,

// asciitilde (126): w=5, h=3
0x04,0x69,
0x02,0x01,0x02,0x04,0x02

};
// 651 bytes
// 841 bytes with FAST_FONT_INDEX
