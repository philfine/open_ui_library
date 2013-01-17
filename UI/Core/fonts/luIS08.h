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

const char font_luIS08[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC3,0x00,
0xC8,0x00,
0xCD,0x00,
0xD6,0x00,
0xE2,0x00,
0xEC,0x00,
0xF5,0x00,
0xF8,0x00,
0x02,0x01,
0x0C,0x01,
0x12,0x01,
0x1B,0x01,
0x1F,0x01,
0x24,0x01,
0x28,0x01,
0x38,0x01,
0x40,0x01,
0x45,0x01,
0x4D,0x01,
0x55,0x01,
0x5D,0x01,
0x65,0x01,
0x6D,0x01,
0x75,0x01,
0x7D,0x01,
0x85,0x01,
0x89,0x01,
0x8E,0x01,
0x97,0x01,
0xA0,0x01,
0xA9,0x01,
0xAF,0x01,
0xB9,0x01,
0xC2,0x01,
0xCA,0x01,
0xD3,0x01,
0xDD,0x01,
0xE5,0x01,
0xED,0x01,
0xF6,0x01,
0x00,0x02,
0x05,0x02,
0x11,0x02,
0x1A,0x02,
0x21,0x02,
0x2C,0x02,
0x36,0x02,
0x40,0x02,
0x48,0x02,
0x5A,0x02,
0x62,0x02,
0x6A,0x02,
0x73,0x02,
0x7C,0x02,
0x85,0x02,
0x90,0x02,
0x9A,0x02,
0xA2,0x02,
0xAB,0x02,
0xB5,0x02,
0xBD,0x02,
0xC7,0x02,
0xCF,0x02,
0xD7,0x02,
0xDC,0x02,
0xE4,0x02,
0xEC,0x02,
0xF3,0x02,
0xFB,0x02,
0x02,0x03,
0x0E,0x03,
0x16,0x03,
0x1E,0x03,
0x23,0x03,
0x2F,0x03,
0x37,0x03,
0x3C,0x03,
0x47,0x03,
0x4F,0x03,
0x56,0x03,
0x5E,0x03,
0x66,0x03,
0x6D,0x03,
0x74,0x03,
0x7A,0x03,
0x82,0x03,
0x89,0x03,
0x93,0x03,
0x9B,0x03,
0xA3,0x03,
0xAB,0x03,
0xB5,0x03,
0xBD,0x03,
0xC7,0x03,

// space (32): w=1, h=1
0x00,0xEA,
0x00,

// exclam (33): w=3, h=8
0x02,0x0D,
0x80,0x3C,0x03,

// quotedbl (34): w=3, h=3
0x02,0x13,
0x07,0x00,0x07,

// numbersign (35): w=7, h=8
0x06,0x0D,
0xA0,0x64,0xBC,0xE7,0x3D,0x26,0x05,

// dollar (36): w=5, h=9
0x24,0x14,
0x80,0x86,0xF9,0xD7,0x21,
0x00,0x03,0x00,0x00,0x00,

// percent (37): w=8, h=8
0x07,0x0D,
0x80,0x4E,0x29,0x17,0xE8,0x94,0x73,0x01,

// ampersand (38): w=7, h=8
0x06,0x0E,
0x70,0x90,0x8E,0xB9,0x65,0xE7,0x30,

// quotesingle (39): w=1, h=3
0x00,0x13,
0x07,

// parenleft (40): w=4, h=10
0x23,0x0D,
0xF0,0x0C,0x02,0x01,
0x01,0x02,0x00,0x00,

// parenright (41): w=4, h=10
0x23,0x08,
0x00,0x00,0xE3,0x1C,
0x02,0x01,0x00,0x00,

// asterisk (42): w=4, h=4
0x03,0x13,
0x0A,0x06,0x0F,0x02,

// plus (43): w=7, h=7
0x06,0x2D,
0x08,0x08,0x48,0x3E,0x09,0x08,0x08,

// comma (44): w=2, h=4
0x01,0xCE,
0x0A,0x07,

// hyphen (45): w=3, h=1
0x02,0x8D,
0x01,0x01,0x01,

// period (46): w=2, h=1
0x01,0xEE,
0x01,0x01,

// slash (47): w=7, h=10
0x26,0x06,
0x00,0x80,0x40,0x30,0x0C,0x02,0x01,
0x02,0x01,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=6, h=8
0x05,0x0E,
0x78,0x86,0x81,0xC1,0x63,0x1E,

// one (49): w=3, h=8
0x02,0x1B,
0xC1,0x7D,0x03,

// two (50): w=6, h=8
0x05,0x0E,
0x80,0xC2,0xA3,0x91,0x89,0x06,

// three (51): w=6, h=8
0x05,0x0E,
0x80,0x89,0x89,0xD9,0x77,0x02,

// four (52): w=6, h=8
0x05,0x0E,
0x20,0x30,0x2C,0xA6,0x7F,0x23,

// five (53): w=6, h=8
0x05,0x0E,
0x80,0x8E,0x89,0xD9,0x71,0x01,

// six (54): w=6, h=8
0x05,0x0E,
0x78,0x9E,0x8A,0x89,0x79,0x01,

// seven (55): w=6, h=8
0x05,0x13,
0xC0,0x61,0x19,0x0D,0x07,0x03,

// eight (56): w=6, h=8
0x05,0x0E,
0x60,0x96,0x89,0x99,0x75,0x06,

// nine (57): w=6, h=8
0x05,0x0E,
0x80,0x9E,0x91,0x51,0x79,0x1E,

// colon (58): w=2, h=6
0x01,0x4E,
0x20,0x01,

// semicolon (59): w=3, h=8
0x02,0x4D,
0xE0,0x20,0x01,

// less (60): w=7, h=7
0x06,0x2D,
0x08,0x18,0x14,0x24,0x22,0x42,0x01,

// equal (61): w=7, h=4
0x06,0x6D,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=7, h=7
0x06,0x28,
0x40,0x21,0x22,0x12,0x14,0x0C,0x08,

// question (63): w=4, h=8
0x03,0x0E,
0xA1,0x31,0x09,0x07,

// at (64): w=8, h=8
0x07,0x0E,
0x7C,0xC2,0xBA,0xB5,0xB5,0x2D,0x23,0x1E,

// A (65): w=7, h=8
0x06,0x09,
0x80,0x60,0x38,0x2C,0x23,0x3F,0xE0,

// B (66): w=6, h=8
0x05,0x0E,
0xE0,0xBF,0x89,0x89,0x7D,0x03,

// C (67): w=7, h=8
0x06,0x0D,
0x78,0xCE,0x82,0x81,0x81,0x41,0x01,

// D (68): w=8, h=8
0x07,0x0D,
0xC0,0xBE,0x83,0x81,0x81,0x41,0x63,0x1E,

// E (69): w=6, h=8
0x05,0x0D,
0xE0,0xBF,0x89,0x89,0x89,0x01,

// F (70): w=6, h=8
0x05,0x0D,
0xE0,0x3F,0x11,0x11,0x11,0x01,

// G (71): w=7, h=8
0x06,0x0E,
0x78,0xC6,0x82,0x81,0x81,0x71,0x01,

// H (72): w=8, h=8
0x07,0x0D,
0xC0,0x3E,0x09,0x08,0x08,0xC8,0x7E,0x03,

// I (73): w=3, h=8
0x02,0x0D,
0xC0,0x3C,0x03,

// J (74): w=5, h=10
0x24,0x07,
0x00,0x00,0x00,0xFC,0x07,
0x02,0x02,0x03,0x00,0x00,

// K (75): w=7, h=8
0x06,0x0D,
0xC0,0x3E,0x19,0x3C,0xC6,0x83,0x01,

// L (76): w=5, h=8
0x04,0x0E,
0xE0,0xBF,0x81,0x80,0x80,

// M (77): w=9, h=8
0x08,0x0D,
0xC0,0x3E,0x03,0x7C,0x60,0x18,0x84,0x7F,0x03,

// N (78): w=8, h=8
0x07,0x0D,
0xC0,0x3E,0x03,0x0C,0x30,0xC0,0x7C,0x03,

// O (79): w=8, h=8
0x07,0x0E,
0x78,0xC4,0x82,0x81,0x81,0x41,0x37,0x0C,

// P (80): w=6, h=8
0x05,0x0D,
0xE0,0x3F,0x11,0x11,0x09,0x07,

// Q (81): w=8, h=10
0x27,0x0E,
0x78,0xC4,0x82,0x81,0x81,0x41,0x37,0x0C,
0x00,0x00,0x00,0x00,0x01,0x01,0x02,0x02,

// R (82): w=6, h=8
0x05,0x0E,
0xE0,0x3F,0x11,0x31,0xC9,0x87,

// S (83): w=6, h=8
0x05,0x0D,
0xC0,0x86,0x8F,0x99,0x71,0x01,

// T (84): w=7, h=8
0x06,0x0D,
0x01,0x81,0xF9,0x07,0x01,0x01,0x01,

// U (85): w=7, h=8
0x06,0x0E,
0x78,0x8F,0x80,0x80,0xC0,0x3C,0x03,

// V (86): w=7, h=8
0x06,0x13,
0x07,0xFC,0xC0,0x30,0x18,0x06,0x01,

// W (87): w=9, h=8
0x08,0x13,
0xFF,0xC0,0x30,0x0C,0xFF,0xC0,0x30,0x0C,0x03,

// X (88): w=8, h=8
0x07,0x07,
0x80,0xC0,0x23,0x1E,0x38,0xE4,0x83,0x01,

// Y (89): w=6, h=8
0x05,0x13,
0x01,0xEE,0x38,0x0C,0x03,0x01,

// Z (90): w=7, h=8
0x06,0x07,
0x80,0xE0,0xB1,0x99,0x8D,0x83,0x01,

// bracketleft (91): w=4, h=10
0x23,0x0D,
0x80,0x7C,0x03,0x01,
0x03,0x02,0x00,0x00,

// backslash (92): w=3, h=10
0x22,0x14,
0x03,0xFC,0x00,
0x00,0x00,0x03,

// bracketright (93): w=4, h=10
0x23,0x08,
0x00,0x00,0xF9,0x07,
0x02,0x03,0x00,0x00,

// asciicircum (94): w=6, h=7
0x05,0x0E,
0x40,0x30,0x18,0x06,0x1F,0x60,

// underscore (95): w=5, h=1
0x84,0x08,0x46,
0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=1
0x81,0x00,0x85,
0x01,0x01,

// a (97): w=6, h=6
0x05,0x4E,
0x38,0x26,0x33,0x19,0x3D,0x07,

// b (98): w=6, h=8
0x05,0x0E,
0xC0,0xBE,0x99,0xCC,0x64,0x1C,

// c (99): w=5, h=6
0x04,0x4E,
0x1C,0x22,0x21,0x31,0x01,

// d (100): w=6, h=8
0x05,0x0E,
0xE0,0x98,0xC4,0xE4,0xFC,0x07,

// e (101): w=5, h=6
0x04,0x4E,
0x1C,0x2A,0x29,0x25,0x13,

// f (102): w=5, h=10
0x24,0x0C,
0x88,0xF8,0x0E,0x09,0x01,
0x03,0x00,0x00,0x00,0x00,

// g (103): w=6, h=8
0x05,0x4E,
0xC8,0xBC,0xA2,0x91,0x7D,0x07,

// h (104): w=6, h=8
0x05,0x0E,
0xC0,0x3E,0x1B,0x0C,0xC4,0x3C,

// i (105): w=3, h=8
0x02,0x0D,
0xC0,0x3C,0x05,

// j (106): w=5, h=10
0x24,0x07,
0x00,0x00,0x00,0xFC,0x05,
0x02,0x02,0x01,0x00,0x00,

// k (107): w=6, h=8
0x05,0x0D,
0xC0,0x3E,0x31,0x68,0x84,0x04,

// l (108): w=3, h=8
0x02,0x0D,
0xC0,0x3C,0x03,

// m (109): w=9, h=6
0x08,0x4E,
0x38,0x0F,0x06,0x01,0x3F,0x04,0x02,0x31,0x0F,

// n (110): w=6, h=6
0x05,0x4E,
0x30,0x0F,0x06,0x03,0x31,0x0F,

// o (111): w=5, h=6
0x04,0x4E,
0x1C,0x22,0x21,0x31,0x1F,

// p (112): w=6, h=8
0x05,0x4E,
0xE0,0x3F,0x27,0x23,0x19,0x07,

// q (113): w=6, h=8
0x05,0x4E,
0x38,0x26,0x33,0x99,0x7D,0x03,

// r (114): w=5, h=6
0x04,0x4D,
0x38,0x0F,0x06,0x01,0x01,

// s (115): w=5, h=6
0x04,0x4D,
0x30,0x26,0x2D,0x39,0x01,

// t (116): w=4, h=7
0x03,0x2D,
0x32,0x4F,0x43,0x02,

// u (117): w=6, h=6
0x05,0x4E,
0x3C,0x23,0x30,0x18,0x3C,0x03,

// v (118): w=5, h=6
0x04,0x53,
0x1F,0x20,0x18,0x06,0x01,

// w (119): w=8, h=6
0x07,0x4E,
0x3F,0x30,0x0C,0x03,0x3F,0x18,0x06,0x01,

// x (120): w=6, h=6
0x05,0x4D,
0x20,0x11,0x0F,0x1C,0x22,0x01,

// y (121): w=6, h=8
0x05,0x4D,
0x81,0x7F,0x30,0x0C,0x06,0x01,

// z (122): w=6, h=6
0x05,0x48,
0x20,0x31,0x29,0x25,0x23,0x01,

// braceleft (123): w=4, h=10
0x23,0x0D,
0x90,0x7C,0x07,0x01,
0x01,0x02,0x00,0x00,

// bar (124): w=3, h=10
0x22,0x08,
0x00,0xFC,0x03,
0x03,0x00,0x00,

// braceright (125): w=4, h=10
0x23,0x08,
0x00,0xC0,0x3D,0x12,
0x02,0x03,0x00,0x00,

// asciitilde (126): w=7, h=3
0x06,0x6D,
0x06,0x01,0x01,0x02,0x04,0x04,0x03

};
// 786 bytes
// 976 bytes with FAST_FONT_INDEX