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

const char font_8x13B[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD1,0x00,
0xE1,0x00,
0xF1,0x00,
0x01,0x01,
0x0A,0x01,
0x0E,0x01,
0x1A,0x01,
0x26,0x01,
0x2F,0x01,
0x37,0x01,
0x3D,0x01,
0x45,0x01,
0x4B,0x01,
0x5B,0x01,
0x6B,0x01,
0x79,0x01,
0x89,0x01,
0x99,0x01,
0xA9,0x01,
0xB9,0x01,
0xC9,0x01,
0xD9,0x01,
0xE9,0x01,
0xF9,0x01,
0xFF,0x01,
0x09,0x02,
0x17,0x02,
0x1F,0x02,
0x2D,0x02,
0x3D,0x02,
0x4D,0x02,
0x5D,0x02,
0x6D,0x02,
0x7D,0x02,
0x8D,0x02,
0x9D,0x02,
0xAD,0x02,
0xBD,0x02,
0xCD,0x02,
0xD7,0x02,
0xE7,0x02,
0xF7,0x02,
0x07,0x03,
0x17,0x03,
0x27,0x03,
0x37,0x03,
0x47,0x03,
0x57,0x03,
0x67,0x03,
0x77,0x03,
0x85,0x03,
0x95,0x03,
0xA5,0x03,
0xB5,0x03,
0xC5,0x03,
0xD3,0x03,
0xE3,0x03,
0xEF,0x03,
0xFF,0x03,
0x0B,0x04,
0x14,0x04,
0x1E,0x04,
0x24,0x04,
0x2D,0x04,
0x3D,0x04,
0x46,0x04,
0x56,0x04,
0x5F,0x04,
0x6F,0x04,
0x7F,0x04,
0x8F,0x04,
0x99,0x04,
0xA9,0x04,
0xB9,0x04,
0xC3,0x04,
0xCC,0x04,
0xD5,0x04,
0xDE,0x04,
0xEE,0x04,
0xFE,0x04,
0x07,0x05,
0x10,0x05,
0x20,0x05,
0x29,0x05,
0x32,0x05,
0x3B,0x05,
0x44,0x05,
0x54,0x05,
0x5D,0x05,
0x6B,0x05,
0x71,0x05,
0x7F,0x05,

// space (32): w=1, h=1
0x80,0x0B,0xB5,
0x00,

// exclam (33): w=2, h=10
0x21,0x1D,
0x7F,0x7F,
0x03,0x03,

// quotedbl (34): w=5, h=4
0x04,0x10,
0x0F,0x0F,0x00,0x0F,0x0F,

// numbersign (35): w=7, h=9
0x26,0x29,
0x6C,0xFF,0xFF,0x6C,0xFF,0xFF,0x6C,
0x00,0x01,0x01,0x00,0x01,0x01,0x00,

// dollar (36): w=7, h=11
0x26,0x09,
0x1C,0x3E,0x32,0xFF,0x62,0xE6,0xC4,
0x01,0x03,0x02,0x07,0x02,0x03,0x01,

// percent (37): w=7, h=10
0x26,0x09,
0x07,0x85,0xE7,0x78,0x9C,0x87,0x83,
0x03,0x03,0x00,0x00,0x03,0x02,0x03,

// ampersand (38): w=7, h=7
0x06,0x69,
0x36,0x7F,0x49,0x49,0x7F,0x76,0x50,

// quotesingle (39): w=2, h=4
0x01,0x1D,
0x0F,0x0F,

// parenleft (40): w=5, h=11
0x24,0x10,
0x70,0xFC,0x8E,0x03,0x01,
0x00,0x01,0x03,0x06,0x04,

// parenright (41): w=5, h=11
0x24,0x10,
0x01,0x03,0x8E,0xFC,0x70,
0x04,0x06,0x03,0x01,0x00,

// asterisk (42): w=7, h=7
0x06,0x49,
0x04,0x64,0x3C,0x1F,0x3C,0x64,0x04,

// plus (43): w=6, h=6
0x05,0x4F,
0x0C,0x0C,0x3F,0x3F,0x0C,0x0C,

// comma (44): w=4, h=5
0x03,0xD6,
0x11,0x1F,0x0F,0x07,

// hyphen (45): w=6, h=1
0x05,0xAF,
0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=4, h=3
0x03,0xF6,
0x02,0x07,0x07,0x02,

// slash (47): w=7, h=10
0x26,0x09,
0x80,0xC0,0x60,0x30,0x18,0x0E,0x07,
0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=7, h=10
0x26,0x09,
0xFC,0xFE,0x03,0x01,0x03,0xFE,0xFC,
0x00,0x01,0x03,0x02,0x03,0x01,0x00,

// one (49): w=6, h=10
0x25,0x0F,
0x04,0x06,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// two (50): w=7, h=10
0x26,0x09,
0x06,0x87,0xC1,0x61,0x31,0x1F,0x0E,
0x03,0x03,0x02,0x02,0x02,0x02,0x02,

// three (51): w=7, h=10
0x26,0x09,
0x01,0x01,0x11,0x19,0x1D,0xF7,0xE3,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// four (52): w=7, h=10
0x26,0x09,
0x70,0x78,0x4C,0x46,0xFF,0xFF,0x40,
0x00,0x00,0x00,0x00,0x03,0x03,0x00,

// five (53): w=7, h=10
0x26,0x09,
0x1F,0x1F,0x19,0x09,0x09,0xF9,0xF1,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// six (54): w=7, h=10
0x26,0x09,
0xFC,0xFE,0x33,0x11,0x11,0xF1,0xE0,
0x01,0x03,0x03,0x02,0x02,0x03,0x01,

// seven (55): w=7, h=10
0x26,0x09,
0x01,0x01,0xC1,0xF1,0x39,0x0F,0x07,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// eight (56): w=7, h=10
0x26,0x09,
0xEE,0xFF,0x11,0x11,0x11,0xFF,0xEE,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// nine (57): w=7, h=10
0x26,0x09,
0x1E,0x3F,0x21,0x21,0x33,0xFF,0xFE,
0x00,0x02,0x02,0x02,0x03,0x01,0x00,

// colon (58): w=4, h=8
0x03,0x56,
0x42,0xE7,0xE7,0x42,

// semicolon (59): w=4, h=9
0x23,0x56,
0x12,0xF7,0xF7,0x72,
0x01,0x01,0x00,0x00,

// less (60): w=6, h=9
0x25,0x2F,
0x10,0x38,0x6C,0xC6,0x83,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=6, h=4
0x05,0x8F,
0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=6, h=9
0x25,0x2F,
0x01,0x83,0xC6,0x6C,0x38,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,

// question (63): w=7, h=10
0x26,0x09,
0x06,0x07,0x01,0x61,0x71,0x1F,0x0E,
0x00,0x00,0x00,0x03,0x03,0x00,0x00,

// at (64): w=7, h=9
0x26,0x29,
0xFE,0xFF,0x83,0x7B,0x4F,0x4F,0x7E,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// A (65): w=7, h=10
0x26,0x09,
0xFC,0xFE,0x23,0x23,0x23,0xFE,0xFC,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// B (66): w=7, h=10
0x26,0x09,
0x01,0xFF,0xFF,0x11,0x11,0xFF,0xEE,
0x02,0x03,0x03,0x02,0x02,0x03,0x01,

// C (67): w=7, h=10
0x26,0x09,
0xFE,0xFF,0x03,0x01,0x01,0x87,0x86,
0x01,0x03,0x03,0x02,0x02,0x03,0x01,

// D (68): w=7, h=10
0x26,0x09,
0x01,0xFF,0xFF,0x01,0x01,0xFF,0xFE,
0x02,0x03,0x03,0x02,0x02,0x03,0x01,

// E (69): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x01,0x01,
0x03,0x03,0x02,0x02,0x02,0x02,0x02,

// F (70): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x01,0x01,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// G (71): w=7, h=10
0x26,0x09,
0xFE,0xFF,0x01,0x01,0x41,0xC7,0xC6,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// H (72): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x10,0x10,0x10,0xFF,0xFF,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// I (73): w=4, h=10
0x23,0x16,
0x01,0xFF,0xFF,0x01,
0x02,0x03,0x03,0x02,

// J (74): w=7, h=10
0x26,0x09,
0x80,0x80,0x00,0x00,0x01,0xFF,0xFF,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// K (75): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x30,0x78,0xCC,0x87,0x03,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// L (76): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x02,0x02,0x02,0x02,0x03,

// M (77): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x0C,0x18,0x0C,0xFF,0xFF,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// N (78): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x1C,0x30,0xE0,0xFF,0xFF,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// O (79): w=7, h=10
0x26,0x09,
0xFE,0xFF,0x01,0x01,0x01,0xFF,0xFE,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// P (80): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x21,0x21,0x21,0x3F,0x1E,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=7, h=11
0x26,0x09,
0xFE,0xFF,0x01,0x01,0x01,0xFF,0xFE,
0x01,0x03,0x02,0x03,0x03,0x07,0x05,

// R (82): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x31,0x31,0xF1,0xDF,0x0E,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// S (83): w=7, h=10
0x26,0x09,
0x8E,0x9F,0x11,0x11,0x11,0xF7,0xE6,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// T (84): w=6, h=10
0x25,0x0F,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0x03,0x03,0x00,0x00,

// U (85): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x00,0x00,0x00,0xFF,0xFF,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// V (86): w=7, h=10
0x26,0x09,
0x0F,0x7F,0xE0,0x80,0xE0,0x7F,0x0F,
0x00,0x00,0x01,0x03,0x01,0x00,0x00,

// W (87): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x00,0xC0,0x00,0xFF,0xFF,
0x01,0x03,0x03,0x01,0x03,0x03,0x01,

// X (88): w=7, h=10
0x26,0x09,
0x03,0xCF,0xFC,0x30,0xFC,0xCF,0x03,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// Y (89): w=6, h=10
0x25,0x0F,
0x07,0x1F,0xF8,0xF8,0x1F,0x07,
0x00,0x00,0x03,0x03,0x00,0x00,

// Z (90): w=7, h=10
0x26,0x09,
0x81,0xC1,0x61,0x31,0x19,0x0F,0x07,
0x03,0x03,0x02,0x02,0x02,0x02,0x02,

// bracketleft (91): w=5, h=11
0x24,0x10,
0xFF,0xFF,0x01,0x01,0x01,
0x07,0x07,0x04,0x04,0x04,

// backslash (92): w=7, h=10
0x26,0x09,
0x07,0x0E,0x18,0x30,0x60,0xC0,0x80,
0x00,0x00,0x00,0x00,0x00,0x01,0x03,

// bracketright (93): w=5, h=11
0x24,0x10,
0x01,0x01,0x01,0xFF,0xFF,
0x04,0x04,0x04,0x07,0x07,

// asciicircum (94): w=7, h=4
0x06,0x09,
0x08,0x0C,0x06,0x03,0x06,0x0C,0x08,

// underscore (95): w=7, h=1
0x86,0x0A,0x46,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=4, h=3
0x03,0x16,
0x01,0x03,0x06,0x04,

// a (97): w=7, h=7
0x06,0x69,
0x38,0x7D,0x45,0x45,0x25,0x7F,0x7E,

// b (98): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x10,0x08,0x08,0xF8,0xF0,
0x03,0x03,0x01,0x02,0x02,0x03,0x01,

// c (99): w=7, h=7
0x06,0x69,
0x3E,0x7F,0x63,0x41,0x41,0x63,0x22,

// d (100): w=7, h=10
0x26,0x09,
0xF0,0xF8,0x08,0x08,0x10,0xFF,0xFF,
0x01,0x03,0x02,0x02,0x01,0x03,0x03,

// e (101): w=7, h=7
0x06,0x69,
0x3E,0x7F,0x49,0x49,0x49,0x6F,0x2E,

// f (102): w=7, h=10
0x26,0x09,
0x20,0xFE,0xFF,0x21,0x21,0x23,0x02,
0x00,0x03,0x03,0x00,0x00,0x00,0x00,

// g (103): w=7, h=9
0x26,0x69,
0xAE,0xFF,0x71,0x71,0x5F,0xCF,0x81,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// h (104): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x10,0x08,0x08,0xF8,0xF0,
0x03,0x03,0x00,0x00,0x00,0x03,0x03,

// i (105): w=4, h=9
0x23,0x36,
0x08,0xFB,0xFB,0x00,
0x01,0x01,0x01,0x01,

// j (106): w=7, h=11
0x26,0x29,
0x00,0x00,0x00,0x00,0x08,0xFB,0xFB,
0x03,0x07,0x04,0x04,0x04,0x07,0x03,

// k (107): w=7, h=10
0x26,0x09,
0xFF,0xFF,0x60,0xF0,0x98,0x08,0x00,
0x03,0x03,0x00,0x00,0x01,0x03,0x02,

// l (108): w=4, h=10
0x23,0x16,
0x01,0xFF,0xFF,0x00,
0x02,0x03,0x03,0x02,

// m (109): w=7, h=7
0x06,0x69,
0x7E,0x7F,0x03,0x0E,0x03,0x7F,0x7E,

// n (110): w=7, h=7
0x06,0x69,
0x7F,0x7F,0x02,0x01,0x01,0x7F,0x7E,

// o (111): w=7, h=7
0x06,0x69,
0x3E,0x7F,0x41,0x41,0x41,0x7F,0x3E,

// p (112): w=7, h=9
0x26,0x69,
0xFF,0xFF,0x22,0x41,0x41,0x7F,0x3E,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// q (113): w=7, h=9
0x26,0x69,
0x3E,0x7F,0x41,0x41,0x22,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// r (114): w=7, h=7
0x06,0x69,
0x7F,0x7F,0x02,0x01,0x01,0x03,0x02,

// s (115): w=7, h=7
0x06,0x69,
0x22,0x67,0x4D,0x49,0x59,0x73,0x22,

// t (116): w=7, h=10
0x26,0x09,
0x10,0xFF,0xFF,0x10,0x10,0x10,0x00,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,

// u (117): w=7, h=7
0x06,0x69,
0x3F,0x7F,0x40,0x40,0x20,0x7F,0x7F,

// v (118): w=7, h=7
0x06,0x69,
0x0F,0x3F,0x70,0x40,0x70,0x3F,0x0F,

// w (119): w=7, h=7
0x06,0x69,
0x3F,0x7F,0x60,0x38,0x60,0x7F,0x3F,

// x (120): w=7, h=7
0x06,0x69,
0x63,0x77,0x1C,0x08,0x1C,0x77,0x63,

// y (121): w=7, h=9
0x26,0x69,
0x9F,0xBF,0x20,0x20,0x10,0xFF,0xFF,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// z (122): w=7, h=7
0x06,0x69,
0x61,0x71,0x59,0x4D,0x47,0x43,0x41,

// braceleft (123): w=6, h=11
0x25,0x0F,
0x20,0xAE,0xFF,0x51,0x01,0x01,
0x00,0x03,0x07,0x04,0x04,0x04,

// bar (124): w=2, h=10
0x21,0x1D,
0xFF,0xFF,
0x03,0x03,

// braceright (125): w=6, h=11
0x25,0x0F,
0x01,0x01,0x51,0xFF,0xAE,0x20,
0x04,0x04,0x04,0x07,0x03,0x00,

// asciitilde (126): w=7, h=3
0x06,0x29,
0x06,0x03,0x03,0x07,0x06,0x06,0x03

};
// 1226 bytes
// 1416 bytes with FAST_FONT_INDEX
