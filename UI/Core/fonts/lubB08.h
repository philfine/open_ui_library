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

const char font_lubB08[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD1,0x00,
0xE1,0x00,
0xED,0x00,
0xFF,0x00,
0x11,0x01,
0x16,0x01,
0x1E,0x01,
0x26,0x01,
0x2C,0x01,
0x35,0x01,
0x39,0x01,
0x3E,0x01,
0x42,0x01,
0x50,0x01,
0x5E,0x01,
0x68,0x01,
0x76,0x01,
0x84,0x01,
0x94,0x01,
0xA0,0x01,
0xAE,0x01,
0xBA,0x01,
0xC8,0x01,
0xD6,0x01,
0xDA,0x01,
0xDE,0x01,
0xE6,0x01,
0xEE,0x01,
0xF6,0x01,
0x02,0x02,
0x16,0x02,
0x2A,0x02,
0x38,0x02,
0x48,0x02,
0x5A,0x02,
0x68,0x02,
0x76,0x02,
0x88,0x02,
0x9C,0x02,
0xA6,0x02,
0xB2,0x02,
0xC4,0x02,
0xD4,0x02,
0xEA,0x02,
0xFC,0x02,
0x0E,0x03,
0x1C,0x03,
0x30,0x03,
0x40,0x03,
0x4E,0x03,
0x60,0x03,
0x72,0x03,
0x84,0x03,
0x9C,0x03,
0xAE,0x03,
0xC0,0x03,
0xCE,0x03,
0xD6,0x03,
0xE4,0x03,
0xEC,0x03,
0xF4,0x03,
0xFC,0x03,
0x01,0x04,
0x09,0x04,
0x19,0x04,
0x20,0x04,
0x30,0x04,
0x37,0x04,
0x43,0x04,
0x4B,0x04,
0x5B,0x04,
0x65,0x04,
0x6F,0x04,
0x7F,0x04,
0x89,0x04,
0x95,0x04,
0x9E,0x04,
0xA6,0x04,
0xAF,0x04,
0xB8,0x04,
0xBF,0x04,
0xC6,0x04,
0xD0,0x04,
0xD9,0x04,
0xE2,0x04,
0xEE,0x04,
0xF7,0x04,
0x00,0x05,
0x07,0x05,
0x0F,0x05,
0x13,0x05,
0x1B,0x05,

// space (32): w=1, h=1
0x80,0x08,0x48,
0x00,

// exclam (33): w=2, h=9
0x21,0x09,
0x8F,0xBF,
0x01,0x01,

// quotedbl (34): w=5, h=4
0x04,0x08,
0x03,0x0F,0x00,0x0F,0x03,

// numbersign (35): w=7, h=9
0x26,0x08,
0x20,0xE4,0x3E,0xA5,0x7C,0x27,0x04,
0x00,0x01,0x00,0x01,0x00,0x00,0x00,

// dollar (36): w=5, h=10
0x24,0x0F,
0x86,0x0F,0xFF,0xF1,0xE3,
0x01,0x01,0x03,0x01,0x00,

// percent (37): w=8, h=9
0x27,0x08,
0x0E,0x9F,0x5F,0x3E,0xD8,0xE4,0xE3,0xC1,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,

// ampersand (38): w=8, h=9
0x27,0x08,
0xE0,0xF6,0x9F,0x39,0xE7,0xC6,0xF0,0x10,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// quotesingle (39): w=3, h=4
0x02,0x08,
0x03,0x0F,0x03,

// parenleft (40): w=3, h=11
0x22,0x09,
0xF8,0xFE,0x01,
0x00,0x03,0x04,

// parenright (41): w=3, h=11
0x22,0x09,
0x01,0xFE,0xF8,
0x04,0x03,0x00,

// asterisk (42): w=4, h=4
0x03,0x09,
0x06,0x0F,0x0F,0x0A,

// plus (43): w=7, h=8
0x06,0x28,
0x10,0x10,0x10,0xFF,0x10,0x10,0x10,

// comma (44): w=2, h=4
0x01,0xE9,
0x0F,0x0F,

// hyphen (45): w=3, h=2
0x02,0xA8,
0x03,0x03,0x03,

// period (46): w=2, h=2
0x01,0xE9,
0x03,0x03,

// slash (47): w=6, h=11
0x25,0x08,
0x00,0x00,0xE0,0x38,0x06,0x01,
0x04,0x03,0x00,0x00,0x00,0x00,

// zero (48): w=6, h=9
0x25,0x09,
0x7C,0xFE,0x01,0x01,0xFE,0x7C,
0x00,0x00,0x01,0x01,0x00,0x00,

// one (49): w=4, h=9
0x23,0x15,
0x01,0xFF,0xFF,0x00,
0x01,0x01,0x01,0x01,

// two (50): w=6, h=9
0x25,0x09,
0x83,0xC1,0xA1,0x91,0x9F,0x8E,
0x01,0x01,0x01,0x01,0x01,0x01,

// three (51): w=6, h=9
0x25,0x09,
0x83,0x11,0x11,0x31,0xEF,0xE6,
0x01,0x01,0x01,0x01,0x01,0x00,

// four (52): w=7, h=9
0x26,0x08,
0x30,0x38,0x34,0x32,0xFF,0xFF,0x30,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,

// five (53): w=5, h=9
0x24,0x0F,
0x9F,0x13,0x33,0xF3,0xE3,
0x01,0x01,0x01,0x01,0x00,

// six (54): w=6, h=9
0x25,0x09,
0x7C,0xFE,0x0B,0x09,0xF9,0xF3,
0x00,0x00,0x01,0x01,0x01,0x00,

// seven (55): w=5, h=9
0x24,0x0F,
0x83,0xE3,0x33,0x0F,0x03,
0x01,0x01,0x00,0x00,0x00,

// eight (56): w=6, h=9
0x25,0x09,
0xE6,0xEF,0x19,0x11,0xFF,0xE6,
0x00,0x01,0x01,0x01,0x01,0x00,

// nine (57): w=6, h=9
0x25,0x09,
0x9E,0x3F,0x21,0xA1,0xFE,0x7C,
0x01,0x01,0x01,0x01,0x00,0x00,

// colon (58): w=2, h=6
0x01,0x69,
0x33,0x33,

// semicolon (59): w=2, h=8
0x01,0x69,
0xF3,0x73,

// less (60): w=6, h=8
0x05,0x29,
0x08,0x18,0x24,0x24,0x42,0x83,

// equal (61): w=6, h=3
0x05,0x89,
0x05,0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=8
0x05,0x29,
0x83,0x42,0x24,0x2C,0x18,0x10,

// question (63): w=5, h=9
0x24,0x09,
0x03,0xE1,0xF1,0x0F,0x06,
0x00,0x01,0x01,0x00,0x00,

// at (64): w=9, h=9
0x28,0x0D,
0x78,0x84,0x72,0x7D,0x4D,0x29,0x79,0x42,0x7C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// A (65): w=9, h=9
0x28,0x08,
0x00,0xC0,0x38,0x2E,0x2F,0x3E,0xF8,0xE0,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,0x01,

// B (66): w=6, h=9
0x25,0x09,
0x01,0xFF,0xFF,0x11,0xEF,0xE6,
0x01,0x01,0x01,0x01,0x01,0x00,

// C (67): w=7, h=9
0x26,0x09,
0x7C,0xFE,0x83,0x01,0x01,0x01,0x83,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,

// D (68): w=8, h=9
0x27,0x09,
0x01,0xFF,0xFF,0x01,0x01,0x83,0xFE,0x7C,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// E (69): w=6, h=9
0x25,0x09,
0x01,0xFF,0xFF,0x11,0x39,0x83,
0x01,0x01,0x01,0x01,0x01,0x01,

// F (70): w=6, h=9
0x25,0x08,
0x01,0xFF,0xFF,0x11,0x39,0x03,
0x01,0x01,0x01,0x00,0x00,0x00,

// G (71): w=8, h=9
0x27,0x08,
0x7C,0xFE,0x83,0x01,0x21,0xE1,0xE3,0x20,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// H (72): w=9, h=9
0x28,0x08,
0x01,0xFF,0xFF,0x11,0x10,0x11,0xFF,0xFF,0x01,
0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x01,

// I (73): w=4, h=9
0x23,0x08,
0x01,0xFF,0xFF,0x01,
0x01,0x01,0x01,0x01,

// J (74): w=5, h=11
0x24,0x08,
0x00,0x01,0xFF,0xFF,0x01,
0x06,0x04,0x07,0x03,0x00,

// K (75): w=8, h=9
0x27,0x08,
0x01,0xFF,0xFF,0x39,0x7C,0xE6,0xC3,0x00,
0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// L (76): w=7, h=9
0x26,0x07,
0x01,0xFF,0xFF,0x01,0x00,0x00,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// M (77): w=10, h=9
0x29,0x08,
0x01,0xFF,0x0F,0x3E,0xF0,0x70,0x0C,0xFF,0xFF,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x01,

// N (78): w=8, h=9
0x27,0x09,
0x01,0xFF,0x0F,0x3C,0x70,0xE1,0xFF,0x01,
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x00,

// O (79): w=8, h=9
0x27,0x09,
0x7C,0xFE,0x83,0x01,0x01,0x83,0xFE,0x7C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// P (80): w=6, h=9
0x25,0x09,
0x01,0xFF,0xFF,0x11,0x1F,0x0E,
0x01,0x01,0x01,0x01,0x00,0x00,

// Q (81): w=9, h=11
0x28,0x0D,
0x7C,0xFE,0x83,0x01,0x01,0x83,0xFE,0x7C,0x00,
0x00,0x00,0x01,0x01,0x01,0x03,0x02,0x06,0x02,

// R (82): w=7, h=9
0x26,0x0E,
0x01,0xFF,0xFF,0x31,0xFF,0xCE,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// S (83): w=6, h=9
0x25,0x08,
0x8E,0x1F,0x19,0x31,0xF3,0xE0,
0x01,0x01,0x01,0x01,0x01,0x00,

// T (84): w=8, h=9
0x27,0x08,
0x03,0x01,0x01,0xFF,0xFF,0x01,0x01,0x03,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// U (85): w=8, h=9
0x27,0x08,
0x01,0xFF,0xFF,0x01,0x00,0x01,0xFF,0x01,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// V (86): w=8, h=9
0x27,0x08,
0x01,0x0F,0x3F,0xF8,0xC0,0x70,0x0F,0x01,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,

// W (87): w=11, h=9
0x2A,0x07,
0x01,0x1F,0xFF,0xF0,0x38,0x0F,0x7F,0xF0,0x70,0x0F,
0x01,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,
0x00,

// X (88): w=8, h=9
0x27,0x08,
0x01,0xC3,0x6F,0x1D,0x78,0xEC,0xC7,0x01,
0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,

// Y (89): w=8, h=9
0x27,0x08,
0x01,0x07,0x1F,0xFC,0xF0,0x08,0x07,0x01,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// Z (90): w=6, h=9
0x25,0x09,
0x83,0xE1,0x79,0x3D,0x0F,0x83,
0x01,0x01,0x01,0x01,0x01,0x01,

// bracketleft (91): w=3, h=11
0x22,0x09,
0xFF,0xFF,0x01,
0x07,0x07,0x04,

// backslash (92): w=6, h=11
0x25,0x08,
0x01,0x06,0x38,0xE0,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x04,

// bracketright (93): w=3, h=11
0x22,0x09,
0x01,0xFF,0xFF,
0x04,0x07,0x07,

// asciicircum (94): w=6, h=8
0x05,0x09,
0xC0,0x70,0x0E,0x0F,0x30,0xC0,

// underscore (95): w=5, h=1
0x84,0x09,0x45,
0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=2
0x02,0x16,
0x01,0x01,0x02,

// a (97): w=6, h=6
0x05,0x68,
0x1C,0x3D,0x25,0x1F,0x3E,0x20,

// b (98): w=7, h=9
0x26,0x08,
0x01,0xFF,0xFF,0x10,0x18,0xF8,0xF0,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// c (99): w=5, h=6
0x04,0x69,
0x1E,0x3F,0x31,0x21,0x23,

// d (100): w=7, h=9
0x26,0x08,
0xF0,0xF8,0x88,0x89,0xFF,0xFF,0x00,
0x00,0x01,0x01,0x00,0x01,0x01,0x01,

// e (101): w=5, h=6
0x04,0x69,
0x1E,0x3F,0x35,0x27,0x26,

// f (102): w=5, h=9
0x24,0x08,
0x08,0xFE,0xFF,0x09,0x03,
0x01,0x01,0x01,0x01,0x00,

// g (103): w=6, h=8
0x05,0x69,
0xD6,0xFF,0xB9,0xBF,0xF7,0x71,

// h (104): w=7, h=9
0x26,0x08,
0x01,0xFF,0xFF,0x10,0xF8,0xF8,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// i (105): w=4, h=9
0x23,0x08,
0x08,0xFB,0xFB,0x00,
0x01,0x01,0x01,0x01,

// j (106): w=4, h=11
0x23,0x08,
0x00,0x08,0xFB,0xFB,
0x06,0x04,0x07,0x07,

// k (107): w=7, h=9
0x26,0x08,
0x01,0xFF,0xFF,0x60,0xF0,0x98,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// l (108): w=4, h=9
0x23,0x08,
0x01,0xFF,0xFF,0x00,
0x01,0x01,0x01,0x01,

// m (109): w=10, h=6
0x09,0x69,
0x21,0x3F,0x3F,0x22,0x3F,0x3E,0x22,0x3F,0x3F,0x20,

// n (110): w=7, h=6
0x06,0x68,
0x21,0x3F,0x3F,0x22,0x3F,0x3F,0x20,

// o (111): w=6, h=6
0x05,0x69,
0x1E,0x3F,0x21,0x21,0x3F,0x1E,

// p (112): w=7, h=8
0x06,0x68,
0x81,0xFF,0xFF,0xA2,0x23,0x3F,0x1E,

// q (113): w=7, h=8
0x06,0x68,
0x1E,0x3F,0x31,0x91,0xFF,0xFF,0x80,

// r (114): w=5, h=6
0x04,0x68,
0x21,0x3F,0x3F,0x22,0x03,

// s (115): w=5, h=6
0x04,0x69,
0x36,0x2F,0x2D,0x3F,0x18,

// t (116): w=4, h=9
0x23,0x08,
0x08,0xFF,0xFF,0x08,
0x00,0x01,0x01,0x01,

// u (117): w=7, h=6
0x06,0x68,
0x01,0x3F,0x3F,0x11,0x3F,0x3F,0x20,

// v (118): w=7, h=6
0x06,0x68,
0x01,0x07,0x1F,0x38,0x18,0x07,0x01,

// w (119): w=10, h=6
0x09,0x68,
0x01,0x0F,0x3F,0x38,0x0E,0x0F,0x3E,0x38,0x07,0x01,

// x (120): w=7, h=6
0x06,0x68,
0x21,0x33,0x0F,0x0F,0x3C,0x33,0x21,

// y (121): w=7, h=8
0x06,0x68,
0x01,0x87,0x9F,0x78,0x18,0x07,0x01,

// z (122): w=5, h=6
0x04,0x6E,
0x33,0x39,0x3F,0x27,0x33,

// braceleft (123): w=3, h=11
0x22,0x0E,
0xF8,0xDF,0x07,
0x00,0x07,0x07,

// bar (124): w=1, h=11
0x20,0x0F,
0xFF,
0x07,

// braceright (125): w=3, h=11
0x22,0x09,
0x07,0xDF,0xF8,
0x07,0x07,0x00,

// asciitilde (126): w=6, h=3
0x05,0x89,
0x06,0x01,0x03,0x06,0x04,0x03

};
// 1125 bytes
// 1315 bytes with FAST_FONT_INDEX
