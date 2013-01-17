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

const char font_charI10[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCC,0x00,
0xD1,0x00,
0xE3,0x00,
0xF3,0x00,
0x09,0x01,
0x1D,0x01,
0x21,0x01,
0x2D,0x01,
0x39,0x01,
0x41,0x01,
0x55,0x01,
0x5B,0x01,
0x60,0x01,
0x65,0x01,
0x7A,0x01,
0x8A,0x01,
0x96,0x01,
0xA6,0x01,
0xB6,0x01,
0xC8,0x01,
0xDA,0x01,
0xEA,0x01,
0xFC,0x01,
0x0C,0x02,
0x1C,0x02,
0x20,0x02,
0x26,0x02,
0x30,0x02,
0x3A,0x02,
0x44,0x02,
0x50,0x02,
0x68,0x02,
0x7C,0x02,
0x8E,0x02,
0xA0,0x02,
0xB4,0x02,
0xC6,0x02,
0xD8,0x02,
0xEA,0x02,
0x02,0x03,
0x0E,0x03,
0x1E,0x03,
0x34,0x03,
0x42,0x03,
0x5C,0x03,
0x72,0x03,
0x84,0x03,
0x96,0x03,
0xAA,0x03,
0xBE,0x03,
0xCE,0x03,
0xDE,0x03,
0xF2,0x03,
0x06,0x04,
0x20,0x04,
0x36,0x04,
0x4A,0x04,
0x5C,0x04,
0x68,0x04,
0x78,0x04,
0x84,0x04,
0x8E,0x04,
0x98,0x04,
0x9C,0x04,
0xA4,0x04,
0xB2,0x04,
0xB8,0x04,
0xC8,0x04,
0xCF,0x04,
0xE2,0x04,
0xF2,0x04,
0x04,0x05,
0x0C,0x05,
0x19,0x05,
0x27,0x05,
0x2F,0x05,
0x3B,0x05,
0x44,0x05,
0x4C,0x05,
0x5C,0x05,
0x6A,0x05,
0x72,0x05,
0x78,0x05,
0x7E,0x05,
0x86,0x05,
0x8E,0x05,
0x9A,0x05,
0xA3,0x05,
0xB6,0x05,
0xBE,0x05,
0xCA,0x05,
0xCE,0x05,
0xDA,0x05,

// space (32): w=1, h=1
0x80,0x0A,0x48,
0x00,

// exclam (33): w=3, h=9
0x22,0x4F,
0x80,0x3E,0x03,
0x01,0x01,0x00,

// quotedbl (34): w=3, h=4
0x02,0x2F,
0x0F,0x00,0x0F,

// numbersign (35): w=8, h=10
0x27,0x2F,
0x40,0x48,0xF8,0x4E,0xC9,0x78,0x4F,0x08,
0x00,0x03,0x00,0x02,0x01,0x00,0x00,0x00,

// dollar (36): w=7, h=12
0x26,0x09,
0x00,0x30,0x28,0xE4,0x5F,0x84,0x1C,
0x03,0x04,0x0C,0x07,0x02,0x03,0x00,

// percent (37): w=10, h=11
0x29,0x0F,
0x3C,0x42,0x21,0x9E,0x40,0x30,0xC8,0x26,0x11,0xE0,
0x00,0x04,0x03,0x00,0x00,0x00,0x03,0x04,0x02,0x01,

// ampersand (38): w=9, h=9
0x28,0x49,
0xC0,0xE0,0x1E,0x19,0x39,0xC9,0xC6,0x30,0x10,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,

// quoteright (39): w=2, h=4
0x01,0x2E,
0x0B,0x07,

// parenleft (40): w=5, h=12
0x24,0x2D,
0xE0,0x1C,0x02,0x01,0x01,
0x03,0x0C,0x08,0x00,0x00,

// parenright (41): w=5, h=12
0x24,0x24,
0x00,0x00,0x01,0x83,0x7C,
0x08,0x08,0x04,0x03,0x00,

// asterisk (42): w=6, h=5
0x05,0x2E,
0x14,0x14,0x0C,0x1F,0x04,0x04,

// plus (43): w=9, h=9
0x28,0x55,
0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,

// comma (44): w=3, h=4
0x82,0x09,0x37,
0x08,0x0B,0x07,

// hyphen (45): w=3, h=1
0x02,0xE9,
0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x09,0x47,
0x03,0x03,

// slash (47): w=9, h=10
0xA8,0x02,0x25,
0x00,0x00,0x80,0x40,0x30,0x08,0x04,0x02,0x01,
0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=7, h=9
0x26,0x4E,
0xF8,0x0C,0x02,0x01,0x81,0x61,0x3E,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,

// one (49): w=5, h=9
0x24,0x50,
0x00,0x02,0xC2,0x7F,0x03,
0x01,0x01,0x01,0x01,0x01,

// two (50): w=7, h=9
0x26,0x49,
0x00,0x84,0x46,0x41,0x21,0x11,0x8E,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// three (51): w=7, h=9
0x26,0x49,
0x80,0x04,0x06,0x11,0x11,0xE9,0x4E,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// four (52): w=8, h=9
0x27,0x48,
0x20,0x30,0x28,0x24,0xA2,0x7E,0x27,0x20,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,

// five (53): w=8, h=9
0x27,0x48,
0x80,0x80,0x0E,0x09,0x09,0x99,0x71,0x01,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// six (54): w=7, h=10
0x26,0x29,
0xF0,0x1C,0x0A,0x0A,0x09,0x19,0xF1,
0x01,0x03,0x02,0x02,0x02,0x01,0x00,

// seven (55): w=8, h=9
0x27,0x48,
0x00,0x03,0xC1,0x21,0x11,0x09,0x07,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=7, h=9
0x26,0x49,
0xE0,0x2C,0x1A,0x11,0x11,0xE9,0x66,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// nine (57): w=7, h=9
0x26,0x4E,
0x1C,0x32,0xA1,0xA1,0x61,0x73,0x1E,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// colon (58): w=2, h=6
0x01,0xAF,
0x30,0x03,

// semicolon (59): w=4, h=8
0x03,0xA9,
0x80,0xB0,0x73,0x03,

// less (60): w=8, h=7
0x07,0x76,
0x08,0x14,0x14,0x14,0x22,0x22,0x22,0x41,

// equal (61): w=8, h=4
0x07,0xB6,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=8, h=7
0x07,0x76,
0x41,0x21,0x22,0x22,0x14,0x14,0x14,0x08,

// question (63): w=5, h=9
0x24,0x4F,
0x82,0xB3,0x11,0x09,0x06,
0x01,0x01,0x00,0x00,0x00,

// at (64): w=11, h=12
0x2A,0x2F,
0xF0,0x08,0x04,0xE2,0x11,0x09,0x89,0x79,0x02,0x84,
0x78,
0x01,0x03,0x04,0x04,0x09,0x09,0x08,0x09,0x05,0x00,
0x00,

// A (65): w=9, h=9
0x28,0x42,
0x00,0x80,0x60,0x38,0x24,0x23,0x3F,0xE0,0x00,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,

// B (66): w=8, h=9
0x27,0x49,
0x00,0x80,0xFD,0x1F,0x11,0x11,0xB9,0x66,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// C (67): w=8, h=9
0x27,0x4E,
0x78,0x84,0x02,0x01,0x01,0x01,0xC1,0x06,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// D (68): w=9, h=9
0x28,0x49,
0x00,0xC0,0xFD,0x07,0x01,0x81,0x81,0x42,0x3C,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// E (69): w=8, h=9
0x27,0x48,
0x00,0xC0,0x7D,0x17,0x11,0x39,0x81,0x03,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// F (70): w=8, h=9
0x27,0x47,
0x00,0xC0,0x7D,0x17,0x11,0x39,0x01,0x03,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// G (71): w=8, h=9
0x27,0x4E,
0x78,0x86,0x02,0x01,0x01,0xD1,0x71,0x13,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// H (72): w=11, h=9
0x2A,0x47,
0x00,0xC0,0x7D,0x17,0x11,0x10,0x10,0xD0,0x7D,0x07,
0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,

// I (73): w=5, h=9
0x24,0x47,
0x00,0xC0,0x7D,0x07,0x01,
0x01,0x01,0x01,0x00,0x00,

// J (74): w=7, h=9
0x26,0x42,
0xC0,0x00,0x00,0xC0,0x7D,0x07,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// K (75): w=10, h=9
0x29,0x47,
0x00,0xC0,0x7D,0x17,0x31,0x68,0x85,0x03,0x01,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x00,

// L (76): w=6, h=9
0x25,0x49,
0x00,0xE1,0x3F,0x01,0x00,0xC0,
0x01,0x01,0x01,0x01,0x01,0x01,

// M (77): w=12, h=9
0x2B,0x47,
0x00,0xE0,0x1F,0x07,0xFC,0x80,0x60,0x10,0x0C,0xFB,
0x07,0x01,
0x01,0x01,0x01,0x00,0x00,0x01,0x00,0x01,0x01,0x01,
0x01,0x00,

// N (78): w=10, h=9
0x29,0x47,
0x00,0xE0,0x1F,0x07,0x1C,0x70,0xC0,0xF1,0x0F,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x00,

// O (79): w=8, h=9
0x27,0x4F,
0x78,0x84,0x02,0x01,0x01,0x81,0x42,0x3C,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,

// P (80): w=8, h=9
0x27,0x48,
0x00,0xC0,0xFD,0x27,0x21,0x21,0x13,0x0E,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=9, h=11
0x28,0x4E,
0x78,0x84,0x02,0x01,0x01,0x81,0x42,0x3C,0x00,
0x00,0x00,0x01,0x01,0x03,0x06,0x04,0x04,0x04,

// R (82): w=9, h=9
0x28,0x48,
0x00,0x80,0xFD,0x17,0x11,0x31,0xE9,0x06,0x00,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// S (83): w=7, h=9
0x26,0x48,
0xC0,0x0C,0x1A,0x11,0x91,0x65,0x03,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,

// T (84): w=7, h=9
0x26,0x4D,
0x03,0x01,0xF1,0x0F,0x01,0x01,0x03,
0x00,0x01,0x01,0x01,0x00,0x00,0x00,

// U (85): w=9, h=9
0x28,0x4D,
0xF1,0x0F,0x01,0x00,0x00,0x80,0x79,0x07,0x01,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// V (86): w=9, h=9
0x28,0x47,
0x01,0x0F,0xF9,0x80,0x40,0x30,0x0D,0x03,0x01,
0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// W (87): w=12, h=9
0x2B,0x4D,
0x01,0xFF,0x81,0x60,0x18,0x06,0xFF,0x80,0x60,0x19,
0x07,0x01,
0x00,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x00,
0x00,0x00,

// X (88): w=10, h=9
0x29,0x41,
0x00,0x80,0x41,0x43,0x2D,0x30,0xC8,0x05,0x03,0x01,
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// Y (89): w=9, h=9
0x28,0x47,
0x01,0x03,0xDD,0x71,0x10,0x08,0x05,0x03,0x01,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// Z (90): w=8, h=9
0x27,0x47,
0x00,0x80,0x63,0x31,0x19,0x0D,0xC3,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// bracketleft (91): w=5, h=12
0x24,0x2E,
0x00,0xF8,0x07,0x01,0x01,
0x0E,0x09,0x08,0x00,0x00,

// backslash (92): w=7, h=10
0x26,0x48,
0x01,0x06,0x08,0x30,0x40,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x02,

// bracketright (93): w=5, h=12
0x24,0x23,
0x00,0x00,0x01,0xF9,0x07,
0x08,0x08,0x0E,0x01,0x00,

// asciicircum (94): w=8, h=4
0x07,0x3D,
0x08,0x04,0x02,0x01,0x01,0x02,0x04,0x08,

// underscore (95): w=7, h=1
0x86,0x0D,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// quoteleft (96): w=2, h=4
0x01,0x2E,
0x0E,0x0D,

// a (97): w=6, h=6
0x05,0xA9,
0x1C,0x22,0x21,0x11,0x39,0x27,

// b (98): w=6, h=11
0x25,0x09,
0x81,0xFF,0x47,0x20,0x20,0xC0,
0x03,0x04,0x04,0x04,0x02,0x01,

// c (99): w=4, h=6
0x03,0xA9,
0x1C,0x22,0x21,0x13,

// d (100): w=7, h=11
0x26,0x08,
0x80,0x40,0x40,0x20,0x21,0xF9,0x07,
0x03,0x04,0x04,0x02,0x06,0x05,0x04,

// e (101): w=5, h=6
0x04,0xA9,
0x1C,0x2A,0x29,0x25,0x12,

// f (102): w=8, h=14
0xA7,0x00,0x23,
0x00,0x00,0x00,0xA0,0x7C,0x22,0x21,0x03,
0x20,0x20,0x10,0x0F,0x00,0x00,0x00,0x00,

// g (103): w=7, h=9
0x26,0xA8,
0xC0,0x46,0x3A,0x29,0x45,0xC6,0x01,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// h (104): w=8, h=11
0x27,0x08,
0x00,0xC1,0x7F,0x43,0x20,0x20,0xE0,0x00,
0x04,0x07,0x00,0x00,0x00,0x07,0x04,0x04,

// i (105): w=3, h=11
0x22,0x0E,
0x20,0xE2,0x03,
0x07,0x04,0x04,

// j (106): w=5, h=14
0xA4,0x00,0x25,
0x00,0x00,0x20,0xE0,0x23,
0x20,0x20,0x18,0x07,0x00,

// k (107): w=6, h=11
0x25,0x09,
0x00,0xF1,0x8F,0x40,0x20,0x20,
0x04,0x03,0x00,0x03,0x06,0x04,

// l (108): w=3, h=11
0x22,0x09,
0x81,0x7D,0x07,
0x07,0x04,0x04,

// m (109): w=10, h=6
0x09,0xAE,
0x31,0x0F,0x02,0x01,0x3F,0x02,0x01,0x39,0x27,0x20,

// n (110): w=7, h=6
0x06,0xAE,
0x31,0x0F,0x02,0x01,0x39,0x27,0x20,

// o (111): w=6, h=6
0x05,0xA9,
0x1C,0x22,0x21,0x21,0x11,0x0E,

// p (112): w=7, h=9
0x26,0xA3,
0x00,0xF9,0x27,0x21,0x21,0x11,0x0F,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// q (113): w=6, h=9
0x25,0xA9,
0x1C,0x22,0x21,0x21,0xF9,0x07,
0x00,0x00,0x01,0x01,0x01,0x01,

// r (114): w=6, h=6
0x05,0xA8,
0x31,0x1F,0x03,0x02,0x01,0x03,

// s (115): w=4, h=6
0x03,0xA9,
0x10,0x26,0x29,0x1B,

// t (116): w=4, h=8
0x03,0x6E,
0xF4,0x9F,0x84,0x04,

// u (117): w=6, h=6
0x05,0xAF,
0x39,0x27,0x20,0x10,0x3C,0x23,

// v (118): w=6, h=6
0x05,0xA8,
0x01,0x03,0x3C,0x10,0x0C,0x03,

// w (119): w=10, h=6
0x09,0xA8,
0x01,0x3F,0x20,0x18,0x04,0x3F,0x20,0x10,0x0C,0x03,

// x (120): w=7, h=6
0x06,0xA2,
0x30,0x21,0x1B,0x0C,0x32,0x21,0x03,

// y (121): w=8, h=9
0xA7,0x05,0x25,
0x80,0x01,0x81,0x5F,0x20,0x18,0x07,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// z (122): w=6, h=6
0x05,0xA8,
0x20,0x33,0x29,0x25,0x2B,0x11,

// braceleft (123): w=5, h=12
0x24,0x2F,
0x20,0x20,0xDE,0x01,0x01,
0x00,0x00,0x07,0x08,0x08,

// bar (124): w=1, h=14
0x20,0x1D,
0xFF,
0x3F,

// braceright (125): w=5, h=12
0x24,0x2F,
0x01,0x01,0xDE,0x20,0x20,
0x08,0x08,0x07,0x00,0x00,

// c0126 (126): w=9, h=2
0x08,0x5C,
0x02,0x02,0x01,0x01,0x03,0x02,0x02,0x02,0x01

};
// 1319 bytes
// 1509 bytes with FAST_FONT_INDEX
