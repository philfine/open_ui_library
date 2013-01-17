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

const char font_lubR08[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xC8,0x00,
0xCC,0x00,
0xDC,0x00,
0xE8,0x00,
0xF6,0x00,
0x08,0x01,
0x0C,0x01,
0x14,0x01,
0x1C,0x01,
0x22,0x01,
0x2B,0x01,
0x2E,0x01,
0x33,0x01,
0x37,0x01,
0x45,0x01,
0x53,0x01,
0x5D,0x01,
0x69,0x01,
0x75,0x01,
0x83,0x01,
0x8D,0x01,
0x99,0x01,
0xA5,0x01,
0xB1,0x01,
0xBD,0x01,
0xC0,0x01,
0xC3,0x01,
0xCB,0x01,
0xD3,0x01,
0xDB,0x01,
0xE7,0x01,
0xF9,0x01,
0x0B,0x02,
0x19,0x02,
0x27,0x02,
0x39,0x02,
0x45,0x02,
0x51,0x02,
0x61,0x02,
0x73,0x02,
0x7B,0x02,
0x85,0x02,
0x97,0x02,
0xA5,0x02,
0xB9,0x02,
0xCB,0x02,
0xDB,0x02,
0xE9,0x02,
0xFD,0x02,
0x0D,0x03,
0x19,0x03,
0x29,0x03,
0x3B,0x03,
0x4D,0x03,
0x63,0x03,
0x73,0x03,
0x83,0x03,
0x8F,0x03,
0x95,0x03,
0xA3,0x03,
0xA9,0x03,
0xB1,0x03,
0xB8,0x03,
0xBC,0x03,
0xC3,0x03,
0xD1,0x03,
0xD8,0x03,
0xE6,0x03,
0xED,0x03,
0xF7,0x03,
0xFE,0x03,
0x0E,0x04,
0x16,0x04,
0x1E,0x04,
0x2C,0x04,
0x34,0x04,
0x41,0x04,
0x4A,0x04,
0x52,0x04,
0x5A,0x04,
0x62,0x04,
0x68,0x04,
0x6E,0x04,
0x78,0x04,
0x81,0x04,
0x89,0x04,
0x94,0x04,
0x9C,0x04,
0xA4,0x04,
0xAB,0x04,
0xB3,0x04,
0xB7,0x04,
0xBF,0x04,

// space (32): w=1, h=1
0x80,0x08,0x47,
0x00,

// exclam (33): w=1, h=9
0x20,0x0F,
0x7F,
0x01,

// quotedbl (34): w=2, h=3
0x01,0x0F,
0x07,0x07,

// numbersign (35): w=7, h=9
0x26,0x08,
0x20,0xE4,0x3E,0xA5,0x7C,0x27,0x04,
0x00,0x01,0x00,0x01,0x00,0x00,0x00,

// dollar (36): w=5, h=10
0x24,0x0F,
0x8E,0x1A,0xFF,0x11,0xE3,
0x01,0x01,0x03,0x01,0x00,

// percent (37): w=6, h=9
0x25,0x0E,
0x06,0xC9,0x36,0xF8,0x16,0xE1,
0x01,0x00,0x00,0x00,0x01,0x00,

// ampersand (38): w=8, h=9
0x27,0x08,
0xF0,0x8E,0x09,0x39,0xC6,0x90,0x70,0x10,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,

// quotesingle (39): w=2, h=4
0x01,0x09,
0x03,0x0F,

// parenleft (40): w=3, h=11
0x22,0x0D,
0xFE,0x01,0x01,
0x03,0x04,0x00,

// parenright (41): w=3, h=11
0x22,0x12,
0x00,0x03,0xFE,
0x04,0x02,0x03,

// asterisk (42): w=4, h=4
0x03,0x0E,
0x02,0x0F,0x0E,0x02,

// plus (43): w=7, h=8
0x06,0x28,
0x10,0x10,0x10,0xFF,0x10,0x10,0x10,

// comma (44): w=1, h=4
0x00,0xEF,
0x0F,

// hyphen (45): w=3, h=1
0x02,0xA9,
0x01,0x01,0x01,

// period (46): w=1, h=1
0x80,0x08,0x56,
0x01,

// slash (47): w=6, h=11
0x25,0x08,
0x00,0x80,0xE0,0x38,0x0E,0x01,
0x04,0x03,0x00,0x00,0x00,0x00,

// zero (48): w=6, h=9
0x25,0x09,
0x7C,0x82,0x01,0x01,0x82,0x7C,
0x00,0x00,0x01,0x01,0x00,0x00,

// one (49): w=4, h=9
0x23,0x10,
0x01,0x01,0xFF,0x00,
0x01,0x01,0x01,0x01,

// two (50): w=5, h=9
0x24,0x0F,
0x86,0x41,0x21,0x11,0x0E,
0x01,0x01,0x01,0x01,0x01,

// three (51): w=5, h=9
0x24,0x0F,
0x83,0x11,0x11,0x11,0xEE,
0x01,0x01,0x01,0x01,0x00,

// four (52): w=6, h=9
0x25,0x09,
0x30,0x38,0x24,0x23,0xFF,0x20,
0x00,0x00,0x00,0x01,0x01,0x01,

// five (53): w=4, h=9
0x23,0x10,
0x8F,0x09,0x09,0xF1,
0x01,0x01,0x01,0x00,

// six (54): w=5, h=9
0x24,0x0F,
0x7C,0x8A,0x09,0x09,0xF3,
0x00,0x01,0x01,0x01,0x00,

// seven (55): w=5, h=9
0x24,0x0F,
0x81,0xE1,0x19,0x0D,0x03,
0x01,0x00,0x00,0x00,0x00,

// eight (56): w=5, h=9
0x24,0x0F,
0xE6,0x19,0x11,0x11,0xEE,
0x00,0x01,0x01,0x01,0x00,

// nine (57): w=5, h=9
0x24,0x0F,
0x9E,0x21,0x21,0xA3,0x7C,
0x01,0x01,0x01,0x00,0x00,

// colon (58): w=1, h=6
0x00,0x6F,
0x21,

// semicolon (59): w=1, h=8
0x00,0x6F,
0xF1,

// less (60): w=6, h=8
0x05,0x29,
0x18,0x18,0x24,0x66,0x42,0x81,

// equal (61): w=6, h=3
0x05,0x89,
0x05,0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=8
0x05,0x29,
0x81,0x42,0x66,0x24,0x18,0x18,

// question (63): w=5, h=9
0x24,0x08,
0x03,0x01,0x71,0x19,0x06,
0x00,0x00,0x01,0x00,0x00,

// at (64): w=8, h=9
0x27,0x0F,
0x78,0x84,0x72,0x4D,0x3D,0x65,0x43,0x3C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// A (65): w=8, h=9
0x27,0x08,
0x80,0x60,0x38,0x27,0x2E,0x30,0xC0,0x00,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,

// B (66): w=6, h=9
0x25,0x09,
0x01,0xFF,0x11,0x11,0x39,0xE6,
0x01,0x01,0x01,0x01,0x01,0x00,

// C (67): w=6, h=9
0x25,0x0F,
0x7C,0x82,0x01,0x01,0x01,0x87,
0x00,0x00,0x01,0x01,0x01,0x00,

// D (68): w=8, h=9
0x27,0x08,
0x01,0xFF,0x01,0x01,0x01,0x01,0x82,0x7C,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// E (69): w=5, h=9
0x24,0x0E,
0x01,0xFF,0x11,0x39,0x83,
0x01,0x01,0x01,0x01,0x01,

// F (70): w=5, h=9
0x24,0x09,
0x01,0xFF,0x11,0x39,0x03,
0x01,0x01,0x00,0x00,0x00,

// G (71): w=7, h=9
0x26,0x0E,
0x7C,0x82,0x01,0x01,0x21,0xE3,0x20,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// H (72): w=8, h=9
0x27,0x08,
0x01,0xFF,0x11,0x10,0x10,0x11,0xFF,0x01,
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,

// I (73): w=3, h=9
0x22,0x09,
0x01,0xFF,0x01,
0x01,0x01,0x01,

// J (74): w=4, h=11
0x23,0x09,
0x00,0x00,0xFF,0x01,
0x06,0x04,0x03,0x00,

// K (75): w=8, h=9
0x27,0x08,
0x01,0xFF,0x11,0x28,0x45,0xC3,0x81,0x00,
0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x01,

// L (76): w=6, h=9
0x25,0x08,
0x01,0xFF,0x01,0x00,0x00,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,

// M (77): w=9, h=9
0x28,0x08,
0x01,0xFF,0x07,0x38,0xE0,0x38,0x0E,0xFF,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,

// N (78): w=8, h=9
0x27,0x08,
0x01,0xFF,0x06,0x08,0x30,0x41,0xFF,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x00,

// O (79): w=7, h=9
0x26,0x0F,
0x7C,0x82,0x01,0x01,0x01,0x82,0x7C,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,

// P (80): w=6, h=9
0x25,0x08,
0x01,0xFF,0x11,0x11,0x19,0x0E,
0x01,0x01,0x01,0x00,0x00,0x00,

// Q (81): w=9, h=11
0x28,0x0D,
0x7C,0x82,0x01,0x01,0x01,0x82,0x7C,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x03,0x06,0x04,0x04,

// R (82): w=7, h=9
0x26,0x08,
0x01,0xFF,0x11,0x11,0x71,0x8E,0x00,
0x01,0x01,0x01,0x00,0x00,0x01,0x01,

// S (83): w=5, h=9
0x24,0x0E,
0x8E,0x09,0x11,0x31,0xE3,
0x01,0x01,0x01,0x01,0x00,

// T (84): w=7, h=9
0x26,0x08,
0x01,0x01,0x01,0xFF,0x01,0x01,0x01,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,

// U (85): w=8, h=9
0x27,0x08,
0x01,0xFF,0x81,0x00,0x00,0x81,0xFF,0x01,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// V (86): w=8, h=9
0x27,0x08,
0x01,0x07,0x19,0xE0,0x80,0x70,0x0F,0x03,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// W (87): w=10, h=9
0x29,0x08,
0x01,0x0F,0xF1,0xE0,0x1E,0x1F,0xE0,0xE0,0x1F,0x01,
0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// X (88): w=7, h=9
0x26,0x08,
0x01,0xC3,0x2D,0x18,0x6C,0x87,0x01,
0x01,0x01,0x00,0x00,0x01,0x01,0x01,

// Y (89): w=7, h=9
0x26,0x08,
0x01,0x03,0x0D,0xF0,0x18,0x07,0x01,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,

// Z (90): w=5, h=9
0x24,0x0F,
0x03,0xE1,0x39,0x07,0x81,
0x01,0x01,0x01,0x01,0x01,

// bracketleft (91): w=2, h=11
0x21,0x0E,
0xFF,0x01,
0x07,0x04,

// backslash (92): w=6, h=11
0x25,0x08,
0x01,0x0E,0x38,0xE0,0x80,0x00,
0x00,0x00,0x00,0x00,0x03,0x04,

// bracketright (93): w=2, h=11
0x21,0x09,
0x01,0xFF,
0x04,0x07,

// asciicircum (94): w=6, h=8
0x05,0x09,
0xC0,0x38,0x0E,0x0F,0x30,0xC0,

// underscore (95): w=4, h=1
0x83,0x09,0x55,
0x01,0x01,0x01,0x01,

// grave (96): w=2, h=1
0x01,0x17,
0x01,0x01,

// a (97): w=5, h=6
0x04,0x6E,
0x19,0x25,0x25,0x1F,0x20,

// b (98): w=6, h=9
0x25,0x09,
0x01,0xFF,0x08,0x08,0x08,0xF0,
0x00,0x01,0x01,0x01,0x01,0x00,

// c (99): w=5, h=6
0x04,0x69,
0x1E,0x33,0x21,0x21,0x23,

// d (100): w=6, h=9
0x25,0x0E,
0xF0,0x08,0x08,0x09,0xFF,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,

// e (101): w=5, h=6
0x04,0x69,
0x1E,0x35,0x25,0x25,0x26,

// f (102): w=4, h=9
0x23,0x08,
0x08,0xFF,0x09,0x03,
0x01,0x01,0x01,0x00,

// g (103): w=5, h=8
0x04,0x6E,
0xD6,0xA9,0xA9,0xA7,0x61,

// h (104): w=7, h=9
0x26,0x08,
0x01,0xFF,0x08,0x08,0x08,0xF8,0x00,
0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// i (105): w=3, h=9
0x22,0x08,
0x08,0xF9,0x00,
0x01,0x01,0x01,

// j (106): w=3, h=11
0x22,0x09,
0x00,0x08,0xF9,
0x06,0x04,0x07,

// k (107): w=6, h=9
0x25,0x09,
0x01,0xFF,0x20,0xD0,0x98,0x08,
0x01,0x01,0x01,0x00,0x01,0x01,

// l (108): w=3, h=9
0x22,0x08,
0x01,0xFF,0x00,
0x01,0x01,0x01,

// m (109): w=11, h=6
0x0A,0x67,
0x21,0x3F,0x21,0x01,0x21,0x3F,0x21,0x01,0x21,0x3F,
0x20,

// n (110): w=7, h=6
0x06,0x68,
0x21,0x3F,0x21,0x01,0x21,0x3F,0x20,

// o (111): w=6, h=6
0x05,0x69,
0x1E,0x33,0x21,0x21,0x33,0x1E,

// p (112): w=6, h=8
0x05,0x69,
0x81,0xFF,0xA1,0x21,0x21,0x1E,

// q (113): w=6, h=8
0x05,0x6E,
0x1E,0x21,0x21,0xA1,0xFF,0x80,

// r (114): w=4, h=6
0x03,0x69,
0x21,0x3F,0x21,0x03,

// s (115): w=4, h=6
0x03,0x6F,
0x3F,0x25,0x29,0x1B,

// t (116): w=4, h=9
0x23,0x08,
0x08,0xFF,0x08,0x08,
0x00,0x01,0x01,0x01,

// u (117): w=7, h=6
0x06,0x68,
0x01,0x3F,0x20,0x20,0x21,0x3F,0x20,

// v (118): w=6, h=6
0x05,0x68,
0x01,0x07,0x19,0x30,0x0D,0x03,

// w (119): w=9, h=6
0x08,0x68,
0x01,0x0F,0x31,0x1C,0x03,0x0C,0x30,0x0D,0x03,

// x (120): w=6, h=6
0x05,0x68,
0x21,0x3B,0x0D,0x2C,0x33,0x21,

// y (121): w=6, h=8
0x05,0x68,
0x01,0x87,0xD9,0x30,0x0D,0x03,

// z (122): w=5, h=6
0x04,0x6F,
0x23,0x39,0x2D,0x23,0x31,

// braceleft (123): w=3, h=11
0x22,0x09,
0x20,0xDE,0x01,
0x00,0x03,0x04,

// bar (124): w=1, h=11
0x20,0x0F,
0xFF,
0x07,

// braceright (125): w=3, h=11
0x22,0x0E,
0x01,0xDE,0x20,
0x04,0x03,0x00,

// asciitilde (126): w=6, h=3
0x05,0x89,
0x06,0x01,0x03,0x06,0x04,0x07

};
// 1033 bytes
// 1223 bytes with FAST_FONT_INDEX
