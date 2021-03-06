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

// timI08 = "Times Italic"

const char font_timI08[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC3,0x00,
0xC8,0x00,
0xCD,0x00,
0xD6,0x00,
0xDD,0x00,
0xE6,0x00,
0xEF,0x00,
0xF2,0x00,
0xFC,0x00,
0x06,0x01,
0x0D,0x01,
0x14,0x01,
0x18,0x01,
0x1D,0x01,
0x20,0x01,
0x25,0x01,
0x2C,0x01,
0x32,0x01,
0x39,0x01,
0x41,0x01,
0x48,0x01,
0x50,0x01,
0x57,0x01,
0x5D,0x01,
0x64,0x01,
0x6B,0x01,
0x6F,0x01,
0x74,0x01,
0x79,0x01,
0x80,0x01,
0x85,0x01,
0x8B,0x01,
0x9F,0x01,
0xA8,0x01,
0xB1,0x01,
0xBA,0x01,
0xC4,0x01,
0xCD,0x01,
0xD6,0x01,
0xDF,0x01,
0xEA,0x01,
0xF1,0x01,
0xF9,0x01,
0x03,0x02,
0x0B,0x02,
0x18,0x02,
0x23,0x02,
0x2C,0x02,
0x35,0x02,
0x45,0x02,
0x4E,0x02,
0x55,0x02,
0x5E,0x02,
0x68,0x02,
0x71,0x02,
0x7D,0x02,
0x87,0x02,
0x90,0x02,
0x99,0x02,
0xA3,0x02,
0xA8,0x02,
0xB2,0x02,
0xB9,0x02,
0xC1,0x02,
0xC5,0x02,
0xCB,0x02,
0xD1,0x02,
0xD7,0x02,
0xDE,0x02,
0xE4,0x02,
0xF3,0x02,
0xFA,0x02,
0x00,0x03,
0x05,0x03,
0x12,0x03,
0x19,0x03,
0x1E,0x03,
0x26,0x03,
0x2C,0x03,
0x32,0x03,
0x3B,0x03,
0x42,0x03,
0x48,0x03,
0x4D,0x03,
0x53,0x03,
0x59,0x03,
0x5F,0x03,
0x67,0x03,
0x6E,0x03,
0x75,0x03,
0x7B,0x03,
0x87,0x03,
0x8F,0x03,
0x9B,0x03,

// space (32): w=1, h=1
0x00,0xC9,
0x00,

// exclam (33): w=3, h=7
0x02,0x08,
0x50,0x0C,0x03,

// quotedbl (34): w=3, h=2
0x02,0x0E,
0x07,0x00,0x07,

// numbersign (35): w=7, h=7
0x06,0x01,
0x10,0x74,0x1C,0x77,0x1C,0x17,0x04,

// dollar (36): w=5, h=8
0x04,0x08,
0x60,0xC6,0x4D,0x39,0x03,

// percent (37): w=7, h=7
0x06,0x0F,
0x06,0x69,0x17,0x0A,0x36,0x49,0x30,

// ampersand (38): w=7, h=7
0x06,0x09,
0x70,0x48,0x4E,0x35,0x63,0x58,0x08,

// quotesingle (39): w=1, h=2
0x00,0x0F,
0x07,

// parenleft (40): w=4, h=9
0x23,0x07,
0xF8,0x06,0x01,0x01,
0x00,0x01,0x00,0x00,

// parenright (41): w=4, h=9
0x23,0x03,
0x00,0x00,0xC1,0x3E,
0x01,0x01,0x00,0x00,

// asterisk (42): w=5, h=5
0x04,0x08,
0x09,0x06,0x3D,0x06,0x09,

// plus (43): w=5, h=5
0x04,0x4A,
0x04,0x04,0x1F,0x04,0x04,

// comma (44): w=2, h=3
0x01,0xC4,
0x04,0x03,

// hyphen (45): w=3, h=1
0x02,0x89,
0x01,0x01,0x01,

// period (46): w=1, h=1
0x00,0xCA,
0x01,

// slash (47): w=3, h=7
0x02,0x09,
0x60,0x1C,0x03,

// zero (48): w=5, h=7
0x04,0x08,
0x38,0x46,0x41,0x31,0x0E,

// one (49): w=4, h=7
0x03,0x09,
0x40,0x70,0x4D,0x03,

// two (50): w=5, h=7
0x04,0x08,
0x40,0x62,0x51,0x49,0x26,

// three (51): w=6, h=7
0x05,0x02,
0x20,0x40,0x4A,0x49,0x35,0x02,

// four (52): w=5, h=7
0x04,0x08,
0x18,0x14,0x72,0x1D,0x13,

// five (53): w=6, h=7
0x05,0x02,
0x20,0x40,0x44,0x4B,0x31,0x01,

// six (54): w=5, h=7
0x04,0x08,
0x38,0x44,0x4A,0x31,0x01,

// seven (55): w=4, h=7
0x03,0x0E,
0x63,0x19,0x05,0x03,

// eight (56): w=5, h=7
0x04,0x08,
0x30,0x4A,0x4D,0x35,0x02,

// nine (57): w=5, h=7
0x04,0x08,
0x40,0x46,0x29,0x19,0x06,

// colon (58): w=2, h=5
0x01,0x49,
0x10,0x01,

// semicolon (59): w=3, h=7
0x02,0x43,
0x40,0x30,0x01,

// less (60): w=3, h=5
0x02,0x4F,
0x04,0x0A,0x11,

// equal (61): w=5, h=3
0x04,0x6A,
0x05,0x05,0x05,0x05,0x05,

// greater (62): w=3, h=5
0x02,0x4F,
0x11,0x0A,0x04,

// question (63): w=4, h=7
0x03,0x0E,
0x52,0x09,0x05,0x02,

// at (64): w=9, h=9
0x28,0x09,
0x78,0x84,0x32,0x49,0x25,0x39,0x45,0x22,0x1C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// A (65): w=7, h=7
0x06,0x03,
0x40,0x60,0x58,0x14,0x52,0x7F,0x40,

// B (66): w=7, h=7
0x06,0x02,
0x40,0x70,0x4D,0x4B,0x49,0x39,0x06,

// C (67): w=7, h=7
0x06,0x08,
0x30,0x4C,0x42,0x41,0x21,0x01,0x03,

// D (68): w=8, h=7
0x07,0x02,
0x40,0x70,0x4D,0x43,0x41,0x21,0x19,0x06,

// E (69): w=7, h=7
0x06,0x02,
0x40,0x71,0x4F,0x49,0x49,0x21,0x03,

// F (70): w=7, h=7
0x06,0x02,
0x40,0x70,0x4D,0x0B,0x09,0x01,0x03,

// G (71): w=7, h=7
0x06,0x09,
0x30,0x4C,0x42,0x41,0x69,0x19,0x0B,

// H (72): w=9, h=7
0x08,0x01,
0x40,0x70,0x4D,0x0B,0x49,0x78,0x4D,0x03,0x01,

// I (73): w=5, h=7
0x04,0x01,
0x40,0x70,0x4D,0x03,0x01,

// J (74): w=6, h=7
0x05,0x01,
0x60,0x40,0x30,0x0D,0x03,0x01,

// K (75): w=8, h=7
0x07,0x02,
0x40,0x70,0x4D,0x0B,0x59,0x64,0x43,0x01,

// L (76): w=6, h=7
0x05,0x03,
0x40,0x70,0x4D,0x43,0x41,0x60,

// M (77): w=11, h=7
0x0A,0x02,
0x40,0x70,0x4D,0x03,0x7C,0x20,0x18,0x44,0x72,0x4F,
0x01,

// N (78): w=9, h=7
0x08,0x01,
0x40,0x70,0x4D,0x03,0x1C,0x60,0x19,0x07,0x01,

// O (79): w=7, h=7
0x06,0x08,
0x30,0x4C,0x42,0x41,0x21,0x19,0x06,

// P (80): w=7, h=7
0x06,0x02,
0x40,0x70,0x4D,0x0B,0x09,0x09,0x06,

// Q (81): w=7, h=9
0x26,0x08,
0x30,0xCC,0x42,0x41,0x21,0x99,0x06,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// R (82): w=7, h=7
0x06,0x02,
0x40,0x70,0x4D,0x0B,0x19,0x69,0x46,

// S (83): w=5, h=7
0x04,0x08,
0x60,0x46,0x49,0x31,0x03,

// T (84): w=7, h=7
0x06,0x07,
0x42,0x71,0x4D,0x03,0x01,0x03,0x01,

// U (85): w=8, h=7
0x07,0x07,
0x30,0x4D,0x43,0x41,0x20,0x19,0x07,0x01,

// V (86): w=7, h=7
0x06,0x07,
0x01,0x7F,0x21,0x18,0x05,0x03,0x01,

// W (87): w=10, h=7
0x09,0x07,
0x01,0x7F,0x21,0x10,0x7F,0x21,0x10,0x0D,0x03,0x01,

// X (88): w=8, h=7
0x07,0x01,
0x40,0x60,0x11,0x4F,0x78,0x45,0x03,0x01,

// Y (89): w=7, h=7
0x06,0x07,
0x40,0x61,0x5F,0x09,0x04,0x03,0x01,

// Z (90): w=7, h=7
0x06,0x07,
0x40,0x60,0x53,0x49,0x65,0x03,0x01,

// bracketleft (91): w=4, h=9
0x23,0x08,
0xC0,0x38,0x07,0x01,
0x01,0x01,0x00,0x00,

// backslash (92): w=3, h=7
0x02,0x0F,
0x03,0x1C,0x60,

// bracketright (93): w=4, h=9
0x23,0x03,
0x00,0xC0,0x39,0x07,
0x01,0x01,0x00,0x00,

// asciicircum (94): w=5, h=3
0x04,0x08,
0x04,0x02,0x01,0x02,0x04,

// underscore (95): w=5, h=1
0x84,0x09,0x36,
0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=1
0x01,0x0E,
0x00,0x03,

// a (97): w=4, h=5
0x03,0x49,
0x1C,0x12,0x09,0x17,

// b (98): w=4, h=7
0x03,0x09,
0x70,0x4D,0x27,0x18,

// c (99): w=4, h=5
0x03,0x49,
0x1C,0x12,0x11,0x0B,

// d (100): w=5, h=7
0x04,0x08,
0x30,0x48,0x24,0x5D,0x03,

// e (101): w=4, h=5
0x03,0x49,
0x1C,0x16,0x15,0x0B,

// f (102): w=6, h=10
0xA5,0x00,0x24,
0x00,0x00,0xE4,0x1E,0x05,0x05,
0x02,0x02,0x01,0x00,0x00,0x00,

// g (103): w=5, h=8
0x04,0x42,
0x60,0x96,0x99,0x67,0x01,

// h (104): w=4, h=7
0x03,0x09,
0x60,0x19,0x67,0x5C,

// i (105): w=3, h=7
0x02,0x08,
0x64,0x5C,0x01,

// j (106): w=5, h=10
0xA4,0x00,0x25,
0x00,0x00,0xE4,0x1C,0x01,
0x03,0x02,0x01,0x00,0x00,

// k (107): w=5, h=7
0x04,0x08,
0x70,0x1D,0x33,0x48,0x44,

// l (108): w=3, h=7
0x02,0x08,
0x70,0x4D,0x03,

// m (109): w=6, h=5
0x05,0x49,
0x19,0x06,0x19,0x06,0x19,0x17,

// n (110): w=4, h=5
0x03,0x49,
0x19,0x06,0x19,0x17,

// o (111): w=4, h=5
0x03,0x49,
0x1C,0x13,0x19,0x07,

// p (112): w=6, h=8
0x85,0x02,0x26,
0x80,0xE0,0x9D,0x13,0x09,0x06,

// q (113): w=5, h=8
0x04,0x48,
0x8C,0xD2,0xB9,0x07,0x01,

// r (114): w=4, h=5
0x03,0x48,
0x18,0x07,0x02,0x01,

// s (115): w=3, h=5
0x02,0x49,
0x12,0x15,0x09,

// t (116): w=4, h=6
0x03,0x27,
0x3A,0x26,0x03,0x02,

// u (117): w=4, h=5
0x03,0x49,
0x1D,0x13,0x0C,0x13,

// v (118): w=4, h=5
0x03,0x49,
0x01,0x1F,0x08,0x07,

// w (119): w=6, h=5
0x05,0x49,
0x01,0x1F,0x08,0x1F,0x08,0x07,

// x (120): w=5, h=5
0x04,0x42,
0x10,0x09,0x06,0x1A,0x01,

// y (121): w=5, h=8
0x04,0x43,
0x80,0x81,0x7F,0x08,0x07,

// z (122): w=4, h=5
0x03,0x48,
0x10,0x19,0x15,0x03,

// braceleft (123): w=5, h=9
0x24,0x07,
0x10,0xE8,0x06,0x01,0x01,
0x00,0x01,0x01,0x00,0x00,

// bar (124): w=3, h=9
0x22,0x08,
0xC0,0x38,0x07,
0x01,0x00,0x00,

// braceright (125): w=5, h=9
0x24,0x02,
0x00,0x00,0xC1,0x2F,0x10,
0x01,0x01,0x00,0x00,0x00,

// asciitilde (126): w=6, h=2
0x05,0x68,
0x02,0x01,0x01,0x02,0x02,0x01

};
// 741 bytes
// 931 bytes with FAST_FONT_INDEX
