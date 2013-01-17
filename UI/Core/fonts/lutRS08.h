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

const char font_lutRS08[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xC7,0x00,
0xCC,0x00,
0xD4,0x00,
0xE0,0x00,
0xE8,0x00,
0xF1,0x00,
0xF4,0x00,
0xFE,0x00,
0x08,0x01,
0x0F,0x01,
0x16,0x01,
0x1A,0x01,
0x22,0x01,
0x26,0x01,
0x34,0x01,
0x3B,0x01,
0x42,0x01,
0x48,0x01,
0x4E,0x01,
0x55,0x01,
0x5B,0x01,
0x62,0x01,
0x69,0x01,
0x70,0x01,
0x77,0x01,
0x7A,0x01,
0x7D,0x01,
0x85,0x01,
0x8D,0x01,
0x95,0x01,
0x9C,0x01,
0xA5,0x01,
0xAD,0x01,
0xB4,0x01,
0xBC,0x01,
0xC4,0x01,
0xCB,0x01,
0xD2,0x01,
0xDA,0x01,
0xE1,0x01,
0xE8,0x01,
0xEE,0x01,
0xF6,0x01,
0xFD,0x01,
0x05,0x02,
0x0C,0x02,
0x14,0x02,
0x1B,0x02,
0x29,0x02,
0x31,0x02,
0x38,0x02,
0x41,0x02,
0x48,0x02,
0x50,0x02,
0x59,0x02,
0x61,0x02,
0x6A,0x02,
0x72,0x02,
0x7A,0x02,
0x88,0x02,
0x90,0x02,
0x98,0x02,
0xA2,0x02,
0xA6,0x02,
0xAE,0x02,
0xB5,0x02,
0xBC,0x02,
0xC3,0x02,
0xCA,0x02,
0xD2,0x02,
0xD9,0x02,
0xE0,0x02,
0xE5,0x02,
0xEF,0x02,
0xF6,0x02,
0xFB,0x02,
0x02,0x03,
0x09,0x03,
0x11,0x03,
0x18,0x03,
0x1F,0x03,
0x25,0x03,
0x2C,0x03,
0x33,0x03,
0x3A,0x03,
0x42,0x03,
0x4A,0x03,
0x52,0x03,
0x5A,0x03,
0x61,0x03,
0x6B,0x03,
0x6F,0x03,
0x7B,0x03,

// space (32): w=1, h=1
0x80,0x07,0x4B,
0x00,

// exclam (33): w=1, h=8
0x00,0x1D,
0xBF,

// quotedbl (34): w=3, h=3
0x02,0x16,
0x07,0x00,0x07,

// numbersign (35): w=6, h=8
0x05,0x09,
0x14,0xFC,0x1F,0xFC,0x1F,0x14,

// dollar (36): w=5, h=9
0x24,0x0F,
0x86,0x89,0xFF,0x91,0x61,
0x00,0x00,0x03,0x00,0x00,

// percent (37): w=6, h=8
0x05,0x09,
0x86,0x69,0x36,0x6C,0x96,0x61,

// ampersand (38): w=7, h=8
0x06,0x08,
0x70,0xCE,0x99,0xB5,0xE7,0xC0,0xB0,

// quotesingle (39): w=1, h=3
0x00,0x1D,
0x07,

// parenleft (40): w=4, h=10
0x23,0x15,
0x7C,0x86,0x01,0x01,
0x00,0x01,0x02,0x02,

// parenright (41): w=4, h=10
0x23,0x10,
0x01,0x01,0x86,0x78,
0x02,0x02,0x01,0x00,

// asterisk (42): w=5, h=5
0x04,0x0F,
0x02,0x1C,0x03,0x1C,0x02,

// plus (43): w=5, h=6
0x04,0x4F,
0x04,0x04,0x3F,0x04,0x04,

// comma (44): w=2, h=4
0x01,0xD7,
0x0B,0x0F,

// hyphen (45): w=6, h=1
0x05,0xA9,
0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=1
0x01,0xF7,
0x01,0x01,

// slash (47): w=6, h=10
0x25,0x09,
0x00,0x80,0x60,0x18,0x06,0x01,
0x02,0x01,0x00,0x00,0x00,0x00,

// zero (48): w=5, h=8
0x04,0x0F,
0x7E,0x81,0x81,0x83,0x7E,

// one (49): w=5, h=8
0x04,0x0F,
0x82,0x81,0xFF,0x80,0x80,

// two (50): w=4, h=8
0x03,0x10,
0xC3,0xA1,0x99,0x8E,

// three (51): w=4, h=8
0x03,0x10,
0x81,0x89,0x89,0x76,

// four (52): w=5, h=8
0x04,0x0F,
0x30,0x2C,0x26,0xFF,0x20,

// five (53): w=4, h=8
0x03,0x10,
0x8F,0x89,0x99,0x71,

// six (54): w=5, h=8
0x04,0x0F,
0x7C,0x8A,0x89,0x89,0x71,

// seven (55): w=5, h=8
0x04,0x0F,
0xC1,0x61,0x19,0x0D,0x03,

// eight (56): w=5, h=8
0x04,0x0F,
0x76,0x99,0x89,0x99,0x76,

// nine (57): w=5, h=8
0x04,0x0F,
0x8E,0x91,0x91,0x51,0x3E,

// colon (58): w=1, h=6
0x00,0x5D,
0x21,

// semicolon (59): w=1, h=8
0x00,0x5D,
0xF1,

// less (60): w=6, h=6
0x05,0x49,
0x04,0x0C,0x0C,0x12,0x12,0x21,

// equal (61): w=6, h=4
0x05,0x69,
0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=6, h=6
0x05,0x49,
0x21,0x12,0x12,0x0C,0x0C,0x08,

// question (63): w=5, h=8
0x04,0x0F,
0x03,0x01,0xB1,0x09,0x06,

// at (64): w=7, h=8
0x06,0x08,
0x3C,0x42,0xB9,0xA5,0xB5,0x3F,0x20,

// A (65): w=6, h=8
0x05,0x09,
0xC0,0x38,0x27,0x2F,0x78,0x80,

// B (66): w=5, h=8
0x04,0x0F,
0xFF,0x89,0x89,0x99,0x67,

// C (67): w=6, h=8
0x05,0x09,
0x3C,0x42,0x81,0x81,0x81,0x81,

// D (68): w=6, h=8
0x05,0x09,
0xFF,0x81,0x81,0x81,0xC3,0x7E,

// E (69): w=5, h=8
0x04,0x0F,
0xFF,0x89,0x89,0x89,0x81,

// F (70): w=5, h=8
0x04,0x0F,
0xFF,0x11,0x11,0x11,0x01,

// G (71): w=6, h=8
0x05,0x09,
0x3C,0x42,0x81,0x81,0x81,0xF1,

// H (72): w=5, h=8
0x04,0x0F,
0xFF,0x08,0x08,0x08,0xFF,

// I (73): w=5, h=8
0x04,0x0F,
0x81,0x81,0xFF,0x81,0x81,

// J (74): w=4, h=8
0x03,0x10,
0x80,0x81,0x81,0x7F,

// K (75): w=6, h=8
0x05,0x0E,
0xFF,0x08,0x3C,0x62,0xC1,0x80,

// L (76): w=5, h=8
0x04,0x0F,
0xFF,0x80,0x80,0x80,0x80,

// M (77): w=6, h=8
0x05,0x09,
0xFF,0x0F,0x70,0x70,0x0F,0xFF,

// N (78): w=5, h=8
0x04,0x0F,
0xFF,0x06,0x18,0x60,0xFF,

// O (79): w=6, h=8
0x05,0x09,
0x3C,0xC3,0x81,0x81,0xC3,0x3C,

// P (80): w=5, h=8
0x04,0x0F,
0xFF,0x11,0x11,0x11,0x0F,

// Q (81): w=6, h=10
0x25,0x0E,
0x3C,0xC3,0x81,0x81,0xC3,0x7C,
0x00,0x00,0x00,0x00,0x01,0x02,

// R (82): w=6, h=8
0x05,0x0E,
0xFF,0x11,0x11,0x29,0xCF,0x80,

// S (83): w=5, h=8
0x04,0x0F,
0xC6,0x89,0x89,0x91,0x70,

// T (84): w=7, h=8
0x06,0x08,
0x01,0x01,0x01,0xFF,0x01,0x01,0x01,

// U (85): w=5, h=8
0x04,0x0F,
0x7F,0x80,0x80,0x80,0x7F,

// V (86): w=6, h=8
0x05,0x09,
0x03,0x1C,0xE0,0xE0,0x1C,0x03,

// W (87): w=7, h=8
0x06,0x08,
0x0F,0xF0,0x7C,0x02,0x3C,0xF8,0x0F,

// X (88): w=6, h=8
0x05,0x09,
0x81,0x63,0x3C,0x3C,0x62,0x81,

// Y (89): w=7, h=8
0x06,0x08,
0x01,0x03,0x0C,0xF0,0x0C,0x03,0x01,

// Z (90): w=6, h=8
0x05,0x09,
0xC1,0xE1,0x91,0x8D,0x87,0x81,

// bracketleft (91): w=3, h=10
0x22,0x1B,
0xFF,0x01,0x01,
0x03,0x02,0x02,

// backslash (92): w=6, h=10
0x25,0x09,
0x01,0x06,0x18,0x60,0x80,0x00,
0x00,0x00,0x00,0x00,0x01,0x02,

// bracketright (93): w=3, h=10
0x22,0x11,
0x01,0x01,0xFF,
0x02,0x02,0x03,

// asciicircum (94): w=6, h=7
0x05,0x09,
0x40,0x38,0x0E,0x0F,0x38,0x40,

// underscore (95): w=7, h=1
0x86,0x08,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=1
0x01,0x17,
0x01,0x01,

// a (97): w=6, h=6
0x05,0x4E,
0x18,0x27,0x25,0x25,0x3F,0x20,

// b (98): w=5, h=8
0x04,0x0F,
0xFF,0x88,0x84,0xC4,0x78,

// c (99): w=5, h=6
0x04,0x4F,
0x1E,0x33,0x21,0x21,0x21,

// d (100): w=5, h=8
0x04,0x0F,
0x78,0x8C,0x84,0x44,0xFF,

// e (101): w=5, h=6
0x04,0x4F,
0x1E,0x25,0x25,0x25,0x26,

// f (102): w=6, h=8
0x05,0x0E,
0x08,0x08,0xFF,0x09,0x09,0x09,

// g (103): w=5, h=8
0x04,0x4F,
0x9E,0xA3,0xA1,0x91,0x7F,

// h (104): w=5, h=8
0x04,0x0F,
0xFF,0x08,0x04,0x04,0xF8,

// i (105): w=3, h=8
0x02,0x11,
0x04,0x04,0xFD,

// j (106): w=4, h=10
0x23,0x10,
0x04,0x04,0x04,0xFD,
0x02,0x02,0x02,0x01,

// k (107): w=5, h=8
0x04,0x0F,
0xFF,0x10,0x68,0xC4,0x84,

// l (108): w=3, h=8
0x02,0x11,
0x01,0x01,0xFF,

// m (109): w=5, h=6
0x04,0x4F,
0x3F,0x01,0x3F,0x01,0x3F,

// n (110): w=5, h=6
0x04,0x4F,
0x3F,0x02,0x01,0x01,0x3E,

// o (111): w=6, h=6
0x05,0x49,
0x1E,0x33,0x21,0x21,0x33,0x1E,

// p (112): w=5, h=8
0x04,0x4F,
0xFF,0x22,0x21,0x31,0x1E,

// q (113): w=5, h=8
0x04,0x4F,
0x1E,0x23,0x21,0x11,0xFF,

// r (114): w=4, h=6
0x03,0x55,
0x3F,0x02,0x01,0x03,

// s (115): w=5, h=6
0x04,0x4F,
0x36,0x25,0x25,0x29,0x19,

// t (116): w=5, h=7
0x04,0x2F,
0x02,0x7F,0x42,0x42,0x42,

// u (117): w=5, h=6
0x04,0x4F,
0x1F,0x20,0x20,0x10,0x3F,

// v (118): w=6, h=6
0x05,0x49,
0x01,0x0E,0x30,0x30,0x0E,0x01,

// w (119): w=6, h=6
0x05,0x49,
0x0F,0x30,0x0E,0x1E,0x30,0x0F,

// x (120): w=6, h=6
0x05,0x49,
0x21,0x33,0x0C,0x0C,0x33,0x21,

// y (121): w=6, h=8
0x05,0x49,
0x81,0x86,0xF8,0x38,0x06,0x01,

// z (122): w=5, h=6
0x04,0x4F,
0x31,0x39,0x2D,0x27,0x21,

// braceleft (123): w=4, h=10
0x23,0x10,
0x10,0xFE,0x01,0x01,
0x00,0x01,0x02,0x02,

// bar (124): w=1, h=10
0x20,0x1D,
0xFF,
0x03,

// braceright (125): w=5, h=10
0x24,0x0F,
0x01,0x01,0xFE,0x10,0x10,
0x02,0x02,0x01,0x00,0x00,

// asciitilde (126): w=6, h=2
0x05,0x89,
0x02,0x01,0x01,0x02,0x02,0x01

};
// 709 bytes
// 899 bytes with FAST_FONT_INDEX
