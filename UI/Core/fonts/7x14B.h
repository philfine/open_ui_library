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

const char font_7x14B[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD1,0x00,
0xDF,0x00,
0xED,0x00,
0xFB,0x00,
0x09,0x01,
0x0D,0x01,
0x19,0x01,
0x25,0x01,
0x2D,0x01,
0x35,0x01,
0x3B,0x01,
0x43,0x01,
0x48,0x01,
0x56,0x01,
0x64,0x01,
0x72,0x01,
0x80,0x01,
0x8E,0x01,
0x9C,0x01,
0xAA,0x01,
0xB8,0x01,
0xC6,0x01,
0xD4,0x01,
0xE2,0x01,
0xE6,0x01,
0xEE,0x01,
0xFC,0x01,
0x04,0x02,
0x12,0x02,
0x20,0x02,
0x2E,0x02,
0x3C,0x02,
0x4A,0x02,
0x58,0x02,
0x66,0x02,
0x74,0x02,
0x82,0x02,
0x90,0x02,
0x9E,0x02,
0xAC,0x02,
0xBA,0x02,
0xC8,0x02,
0xD6,0x02,
0xE4,0x02,
0xF2,0x02,
0x00,0x03,
0x0E,0x03,
0x1C,0x03,
0x2A,0x03,
0x38,0x03,
0x46,0x03,
0x54,0x03,
0x62,0x03,
0x70,0x03,
0x7E,0x03,
0x8C,0x03,
0x9A,0x03,
0xA6,0x03,
0xB4,0x03,
0xC0,0x03,
0xC8,0x03,
0xD1,0x03,
0xD7,0x03,
0xDF,0x03,
0xED,0x03,
0xF5,0x03,
0x03,0x04,
0x0B,0x04,
0x19,0x04,
0x27,0x04,
0x35,0x04,
0x3B,0x04,
0x47,0x04,
0x55,0x04,
0x5B,0x04,
0x63,0x04,
0x6B,0x04,
0x73,0x04,
0x81,0x04,
0x8F,0x04,
0x97,0x04,
0x9F,0x04,
0xAD,0x04,
0xB5,0x04,
0xBD,0x04,
0xC5,0x04,
0xCD,0x04,
0xDB,0x04,
0xE3,0x04,
0xEF,0x04,
0xF5,0x04,
0x01,0x05,

// space (32): w=1, h=1
0x80,0x0B,0xA5,
0x00,

// exclam (33): w=2, h=10
0x21,0x17,
0x7F,0x7F,
0x03,0x03,

// quotedbl (34): w=5, h=3
0x04,0x0F,
0x0F,0x0F,0x00,0x0F,0x0F,

// numbersign (35): w=6, h=10
0x25,0x09,
0x48,0xFF,0xFF,0xFF,0xFF,0x48,
0x00,0x03,0x03,0x03,0x03,0x00,

// dollar (36): w=6, h=11
0x25,0x09,
0x8C,0x12,0xFF,0xFF,0x22,0xCC,
0x01,0x02,0x07,0x07,0x02,0x01,

// percent (37): w=6, h=10
0x25,0x09,
0x06,0x8F,0xE9,0x5E,0xC7,0x83,
0x03,0x03,0x01,0x02,0x03,0x01,

// ampersand (38): w=6, h=10
0x25,0x09,
0xC0,0xEE,0x3F,0xD1,0xFF,0x6E,
0x01,0x03,0x02,0x01,0x03,0x02,

// quotesingle (39): w=2, h=3
0x01,0x17,
0x0F,0x0F,

// parenleft (40): w=5, h=12
0x24,0x0F,
0xF8,0xFE,0x07,0x01,0x00,
0x00,0x03,0x07,0x1C,0x18,

// parenright (41): w=5, h=12
0x24,0x0F,
0x00,0x01,0x07,0xFE,0xF8,
0x18,0x1C,0x07,0x03,0x00,

// asterisk (42): w=6, h=7
0x05,0x09,
0x63,0x14,0x7F,0x7F,0x14,0x63,

// plus (43): w=6, h=7
0x05,0x49,
0x08,0x08,0x7F,0x7F,0x08,0x08,

// comma (44): w=3, h=4
0x82,0x08,0x67,
0x09,0x0F,0x07,

// hyphen (45): w=6, h=1
0x05,0xA9,
0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x08,0x68,
0x03,0x03,

// slash (47): w=6, h=12
0x25,0x09,
0x00,0x80,0xF0,0x7C,0x0F,0x03,
0x1E,0x1F,0x01,0x00,0x00,0x00,

// zero (48): w=6, h=10
0x25,0x09,
0xFE,0xFF,0x01,0x01,0xFF,0xFE,
0x01,0x03,0x02,0x02,0x03,0x01,

// one (49): w=6, h=10
0x25,0x09,
0x04,0x06,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// two (50): w=6, h=10
0x25,0x09,
0x06,0x87,0xC1,0x71,0x3F,0x0E,
0x03,0x03,0x02,0x02,0x02,0x02,

// three (51): w=6, h=10
0x25,0x09,
0x86,0x87,0x11,0x11,0xFF,0xEE,
0x01,0x03,0x02,0x02,0x03,0x01,

// four (52): w=6, h=10
0x25,0x09,
0xE0,0xF0,0x98,0xFE,0xFF,0x80,
0x00,0x00,0x00,0x03,0x03,0x00,

// five (53): w=6, h=10
0x25,0x09,
0x9F,0x9F,0x09,0x09,0xF9,0xF1,
0x01,0x03,0x02,0x02,0x03,0x01,

// six (54): w=6, h=10
0x25,0x09,
0xFC,0xFE,0x13,0x11,0xF7,0xE6,
0x01,0x03,0x02,0x02,0x03,0x01,

// seven (55): w=6, h=10
0x25,0x09,
0x07,0x07,0xF1,0xFD,0x0F,0x03,
0x00,0x00,0x03,0x03,0x00,0x00,

// eight (56): w=6, h=10
0x25,0x09,
0xCE,0xFF,0x31,0x31,0xFF,0xCE,
0x01,0x03,0x02,0x02,0x03,0x01,

// nine (57): w=6, h=10
0x25,0x09,
0x9E,0xBF,0x21,0x21,0xFF,0xFE,
0x01,0x03,0x02,0x03,0x01,0x00,

// colon (58): w=2, h=7
0x01,0x57,
0x63,0x63,

// semicolon (59): w=3, h=9
0x22,0x56,
0x20,0xE3,0xE3,
0x01,0x01,0x00,

// less (60): w=6, h=9
0x25,0x29,
0x10,0x38,0x6C,0xC6,0x83,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=6, h=4
0x05,0x89,
0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=6, h=9
0x25,0x29,
0x01,0x83,0xC6,0x6C,0x38,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,

// question (63): w=6, h=10
0x25,0x09,
0x06,0x07,0x71,0x79,0x0F,0x06,
0x00,0x00,0x03,0x03,0x00,0x00,

// at (64): w=6, h=10
0x25,0x09,
0xFC,0xFE,0x7B,0xFD,0x87,0xFE,
0x00,0x01,0x03,0x02,0x02,0x02,

// A (65): w=6, h=10
0x25,0x09,
0xFE,0xFF,0x43,0x43,0xFF,0xFE,
0x03,0x03,0x00,0x00,0x03,0x03,

// B (66): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x11,0x11,0xFF,0xE6,
0x03,0x03,0x02,0x02,0x03,0x01,

// C (67): w=6, h=10
0x25,0x09,
0xFE,0xFF,0x01,0x01,0x87,0x86,
0x01,0x03,0x02,0x02,0x03,0x01,

// D (68): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x01,0x03,0xFE,0xFC,
0x03,0x03,0x02,0x03,0x01,0x00,

// E (69): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x01,
0x03,0x03,0x02,0x02,0x02,0x02,

// F (70): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x01,
0x03,0x03,0x00,0x00,0x00,0x00,

// G (71): w=6, h=10
0x25,0x09,
0xFE,0xFF,0x01,0x21,0xE7,0xE6,
0x01,0x03,0x02,0x02,0x03,0x01,

// H (72): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x10,0x10,0xFF,0xFF,
0x03,0x03,0x00,0x00,0x03,0x03,

// I (73): w=6, h=10
0x25,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x02,0x02,0x03,0x03,0x02,0x02,

// J (74): w=6, h=10
0x25,0x09,
0x80,0x80,0x00,0x00,0xFF,0xFF,
0x01,0x03,0x02,0x03,0x01,0x00,

// K (75): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x7C,0xE6,0x83,0x01,
0x03,0x03,0x00,0x00,0x03,0x03,

// L (76): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x03,0x03,0x02,0x02,0x02,0x02,

// M (77): w=6, h=10
0x25,0x09,
0xFF,0xFE,0x18,0x18,0xFE,0xFF,
0x03,0x03,0x00,0x00,0x03,0x03,

// N (78): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x1C,0xE0,0xFF,0xFF,
0x03,0x03,0x00,0x00,0x03,0x03,

// O (79): w=6, h=10
0x25,0x09,
0xFE,0xFF,0x01,0x01,0xFF,0xFE,
0x01,0x03,0x02,0x02,0x03,0x01,

// P (80): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x21,0x21,0x3F,0x1E,
0x03,0x03,0x00,0x00,0x00,0x00,

// Q (81): w=6, h=12
0x25,0x09,
0xFE,0xFF,0x41,0x81,0xFF,0xFE,
0x01,0x03,0x02,0x02,0x07,0x0D,

// R (82): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x11,0x31,0xFF,0xCE,
0x03,0x03,0x00,0x00,0x03,0x03,

// S (83): w=6, h=10
0x25,0x09,
0x86,0x8F,0x39,0x71,0xC7,0x86,
0x01,0x03,0x02,0x02,0x03,0x01,

// T (84): w=6, h=10
0x25,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0x03,0x03,0x00,0x00,

// U (85): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x00,0x00,0xFF,0xFF,
0x01,0x03,0x02,0x02,0x03,0x01,

// V (86): w=6, h=10
0x25,0x09,
0x7F,0xFF,0x80,0x80,0xFF,0x7F,
0x00,0x01,0x03,0x03,0x01,0x00,

// W (87): w=6, h=10
0x25,0x09,
0xFF,0xFF,0xE0,0xE0,0xFF,0xFF,
0x01,0x03,0x01,0x01,0x03,0x01,

// X (88): w=6, h=10
0x25,0x09,
0x03,0xCF,0xFC,0xFC,0xCF,0x03,
0x03,0x03,0x00,0x00,0x03,0x03,

// Y (89): w=6, h=10
0x25,0x09,
0x07,0x1F,0xF8,0xF8,0x1F,0x07,
0x00,0x00,0x03,0x03,0x00,0x00,

// Z (90): w=6, h=10
0x25,0x09,
0x01,0xC1,0xF1,0x3D,0x0F,0x03,
0x03,0x03,0x02,0x02,0x02,0x02,

// bracketleft (91): w=5, h=12
0x24,0x0F,
0xFF,0xFF,0x00,0x00,0x00,
0x1F,0x1F,0x18,0x18,0x18,

// backslash (92): w=6, h=12
0x25,0x09,
0x03,0x0F,0x7C,0xF0,0x80,0x00,
0x00,0x00,0x00,0x01,0x1F,0x1E,

// bracketright (93): w=5, h=12
0x24,0x0F,
0x00,0x00,0x00,0xFF,0xFF,
0x18,0x18,0x18,0x1F,0x1F,

// asciicircum (94): w=6, h=1
0x05,0x09,
0x07,0x07,0x00,0x00,0x07,0x07,

// underscore (95): w=6, h=2
0x85,0x0A,0x46,
0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=4, h=2
0x03,0x10,
0x00,0x01,0x07,0x06,

// a (97): w=6, h=7
0x05,0x69,
0x32,0x7B,0x49,0x45,0x7F,0x7E,

// b (98): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x08,0x08,0xF8,0xF0,
0x03,0x03,0x02,0x02,0x03,0x01,

// c (99): w=6, h=7
0x05,0x69,
0x3E,0x7F,0x41,0x41,0x63,0x22,

// d (100): w=6, h=10
0x25,0x09,
0xF0,0xF8,0x08,0x08,0xFF,0xFF,
0x01,0x03,0x02,0x02,0x03,0x03,

// e (101): w=6, h=7
0x05,0x69,
0x3E,0x7F,0x49,0x49,0x6F,0x2E,

// f (102): w=6, h=10
0x25,0x09,
0x10,0x10,0xFE,0xFF,0x13,0x12,
0x00,0x00,0x03,0x03,0x00,0x00,

// g (103): w=6, h=9
0x25,0x69,
0xCE,0xFF,0x51,0x5F,0xCE,0x83,
0x00,0x01,0x01,0x01,0x01,0x00,

// h (104): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x08,0x08,0xF8,0xF0,
0x03,0x03,0x00,0x00,0x03,0x03,

// i (105): w=2, h=10
0x21,0x17,
0xFB,0xFB,
0x03,0x03,

// j (106): w=5, h=12
0x24,0x0F,
0x00,0x00,0x00,0xFB,0xFB,
0x04,0x0C,0x08,0x0F,0x07,

// k (107): w=6, h=10
0x25,0x09,
0xFF,0xFF,0x60,0xF0,0x98,0x00,
0x03,0x03,0x00,0x00,0x01,0x03,

// l (108): w=2, h=10
0x21,0x17,
0xFF,0xFF,
0x03,0x03,

// m (109): w=6, h=7
0x05,0x69,
0x7F,0x7F,0x3E,0x3F,0x7F,0x7E,

// n (110): w=6, h=7
0x05,0x69,
0x7F,0x7F,0x01,0x01,0x7F,0x7E,

// o (111): w=6, h=7
0x05,0x69,
0x3E,0x7F,0x41,0x41,0x7F,0x3E,

// p (112): w=6, h=9
0x25,0x69,
0xFF,0xFF,0x41,0x41,0x7F,0x3E,
0x01,0x01,0x00,0x00,0x00,0x00,

// q (113): w=6, h=9
0x25,0x69,
0x3E,0x7F,0x41,0x41,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x01,0x01,

// r (114): w=6, h=7
0x05,0x69,
0x7F,0x7F,0x01,0x01,0x07,0x06,

// s (115): w=6, h=7
0x05,0x69,
0x22,0x67,0x4D,0x59,0x73,0x22,

// t (116): w=6, h=10
0x25,0x09,
0x08,0x08,0xFF,0xFF,0x08,0x08,
0x00,0x00,0x01,0x03,0x02,0x02,

// u (117): w=6, h=7
0x05,0x69,
0x3F,0x7F,0x40,0x40,0x7F,0x7F,

// v (118): w=6, h=7
0x05,0x69,
0x07,0x1F,0x78,0x78,0x1F,0x07,

// w (119): w=6, h=7
0x05,0x69,
0x3F,0x7F,0x3C,0x3C,0x7F,0x3F,

// x (120): w=6, h=7
0x05,0x69,
0x63,0x77,0x1C,0x1C,0x77,0x63,

// y (121): w=6, h=9
0x25,0x69,
0x83,0x8F,0x3C,0xF0,0xFF,0x0F,
0x00,0x01,0x01,0x01,0x00,0x00,

// z (122): w=6, h=7
0x05,0x69,
0x61,0x71,0x59,0x4D,0x47,0x43,

// braceleft (123): w=5, h=12
0x24,0x0F,
0x20,0xFF,0xDF,0x00,0x00,
0x00,0x07,0x1F,0x18,0x18,

// bar (124): w=2, h=12
0x21,0x17,
0xFF,0xFF,
0x1F,0x1F,

// braceright (125): w=5, h=12
0x24,0x0F,
0x00,0x00,0xDF,0xFF,0x20,
0x18,0x18,0x1F,0x07,0x00,

// asciitilde (126): w=6, h=3
0x05,0x09,
0x0F,0x01,0x03,0x03,0x0E,0x03

};
// 1099 bytes
// 1289 bytes with FAST_FONT_INDEX
