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

const char font_4x6[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC3,0x00,
0xC6,0x00,
0xCB,0x00,
0xD1,0x00,
0xD6,0x00,
0xDB,0x00,
0xE1,0x00,
0xE4,0x00,
0xE8,0x00,
0xEC,0x00,
0xF1,0x00,
0xF6,0x00,
0xFA,0x00,
0xFF,0x00,
0x02,0x01,
0x07,0x01,
0x0C,0x01,
0x11,0x01,
0x16,0x01,
0x1B,0x01,
0x20,0x01,
0x25,0x01,
0x2A,0x01,
0x2F,0x01,
0x34,0x01,
0x39,0x01,
0x3C,0x01,
0x40,0x01,
0x45,0x01,
0x4A,0x01,
0x4F,0x01,
0x54,0x01,
0x59,0x01,
0x5E,0x01,
0x63,0x01,
0x68,0x01,
0x6D,0x01,
0x72,0x01,
0x77,0x01,
0x7C,0x01,
0x81,0x01,
0x86,0x01,
0x8B,0x01,
0x90,0x01,
0x95,0x01,
0x9A,0x01,
0x9F,0x01,
0xA4,0x01,
0xA9,0x01,
0xAE,0x01,
0xB3,0x01,
0xB8,0x01,
0xBD,0x01,
0xC2,0x01,
0xC7,0x01,
0xCC,0x01,
0xD1,0x01,
0xD6,0x01,
0xDB,0x01,
0xDF,0x01,
0xE4,0x01,
0xE8,0x01,
0xED,0x01,
0xF2,0x01,
0xF6,0x01,
0xFB,0x01,
0x00,0x02,
0x05,0x02,
0x0A,0x02,
0x0F,0x02,
0x14,0x02,
0x19,0x02,
0x1E,0x02,
0x23,0x02,
0x28,0x02,
0x2D,0x02,
0x32,0x02,
0x37,0x02,
0x3C,0x02,
0x41,0x02,
0x46,0x02,
0x4B,0x02,
0x50,0x02,
0x55,0x02,
0x5A,0x02,
0x5F,0x02,
0x64,0x02,
0x69,0x02,
0x6E,0x02,
0x73,0x02,
0x78,0x02,
0x7D,0x02,
0x80,0x02,
0x85,0x02,

// space (32): w=1, h=1
0x00,0xBA,
0x00,

// exclam (33): w=1, h=5
0x00,0x10,
0x17,

// quotedbl (34): w=3, h=2
0x02,0x09,
0x03,0x00,0x03,

// numbersign (35): w=4, h=5
0x03,0x08,
0x1F,0x0A,0x1F,0x0A,

// dollar (36): w=3, h=6
0x02,0x09,
0x16,0x37,0x1A,

// percent (37): w=3, h=5
0x02,0x09,
0x09,0x04,0x12,

// ampersand (38): w=4, h=5
0x03,0x08,
0x0A,0x15,0x0A,0x10,

// quotesingle (39): w=1, h=2
0x00,0x10,
0x03,

// parenleft (40): w=2, h=6
0x01,0x0F,
0x1E,0x21,

// parenright (41): w=2, h=6
0x01,0x0A,
0x21,0x1E,

// asterisk (42): w=3, h=5
0x02,0x09,
0x15,0x0E,0x15,

// plus (43): w=3, h=5
0x02,0x09,
0x04,0x1F,0x04,

// comma (44): w=2, h=2
0x01,0x8A,
0x02,0x01,

// hyphen (45): w=3, h=1
0x02,0x49,
0x01,0x01,0x01,

// period (46): w=1, h=1
0x00,0x90,
0x01,

// slash (47): w=3, h=5
0x02,0x09,
0x18,0x04,0x03,

// zero (48): w=3, h=5
0x02,0x09,
0x0E,0x15,0x0E,

// one (49): w=3, h=5
0x02,0x09,
0x12,0x1F,0x10,

// two (50): w=3, h=5
0x02,0x09,
0x12,0x19,0x16,

// three (51): w=3, h=5
0x02,0x09,
0x11,0x15,0x0B,

// four (52): w=3, h=5
0x02,0x09,
0x07,0x04,0x1F,

// five (53): w=3, h=5
0x02,0x09,
0x17,0x15,0x09,

// six (54): w=3, h=5
0x02,0x09,
0x0E,0x15,0x09,

// seven (55): w=3, h=5
0x02,0x09,
0x19,0x05,0x03,

// eight (56): w=3, h=5
0x02,0x09,
0x1A,0x15,0x0B,

// nine (57): w=3, h=5
0x02,0x09,
0x12,0x15,0x0E,

// colon (58): w=1, h=4
0x00,0x30,
0x09,

// semicolon (59): w=2, h=5
0x01,0x2A,
0x10,0x09,

// less (60): w=3, h=5
0x02,0x09,
0x04,0x0A,0x11,

// equal (61): w=3, h=3
0x02,0x29,
0x05,0x05,0x05,

// greater (62): w=3, h=5
0x02,0x09,
0x11,0x0A,0x04,

// question (63): w=3, h=5
0x02,0x09,
0x01,0x15,0x02,

// at (64): w=3, h=5
0x02,0x09,
0x0E,0x11,0x17,

// A (65): w=3, h=5
0x02,0x09,
0x1E,0x05,0x1E,

// B (66): w=3, h=5
0x02,0x09,
0x1F,0x15,0x0A,

// C (67): w=3, h=5
0x02,0x09,
0x0E,0x11,0x0A,

// D (68): w=3, h=5
0x02,0x09,
0x1F,0x11,0x0E,

// E (69): w=3, h=5
0x02,0x09,
0x1F,0x15,0x11,

// F (70): w=3, h=5
0x02,0x09,
0x1F,0x05,0x01,

// G (71): w=3, h=5
0x02,0x09,
0x0E,0x11,0x1D,

// H (72): w=3, h=5
0x02,0x09,
0x1F,0x04,0x1F,

// I (73): w=3, h=5
0x02,0x09,
0x11,0x1F,0x11,

// J (74): w=3, h=5
0x02,0x09,
0x08,0x10,0x0F,

// K (75): w=3, h=5
0x02,0x09,
0x1F,0x04,0x1B,

// L (76): w=3, h=5
0x02,0x09,
0x1F,0x10,0x10,

// M (77): w=3, h=5
0x02,0x09,
0x1F,0x06,0x1F,

// N (78): w=3, h=5
0x02,0x09,
0x1E,0x04,0x0F,

// O (79): w=3, h=5
0x02,0x09,
0x0E,0x11,0x0E,

// P (80): w=3, h=5
0x02,0x09,
0x1F,0x05,0x02,

// Q (81): w=3, h=6
0x02,0x09,
0x0E,0x11,0x2E,

// R (82): w=3, h=5
0x02,0x09,
0x1F,0x05,0x1A,

// S (83): w=3, h=5
0x02,0x09,
0x12,0x15,0x09,

// T (84): w=3, h=5
0x02,0x09,
0x01,0x1F,0x01,

// U (85): w=3, h=5
0x02,0x09,
0x1F,0x10,0x1F,

// V (86): w=3, h=5
0x02,0x09,
0x0F,0x18,0x0F,

// W (87): w=3, h=5
0x02,0x09,
0x1F,0x0C,0x1F,

// X (88): w=3, h=5
0x02,0x09,
0x1B,0x04,0x1B,

// Y (89): w=3, h=5
0x02,0x09,
0x03,0x1C,0x03,

// Z (90): w=3, h=5
0x02,0x09,
0x19,0x15,0x13,

// bracketleft (91): w=2, h=5
0x01,0x0F,
0x1F,0x11,

// backslash (92): w=3, h=5
0x02,0x09,
0x03,0x04,0x18,

// bracketright (93): w=2, h=5
0x01,0x0A,
0x11,0x1F,

// asciicircum (94): w=3, h=2
0x02,0x09,
0x02,0x01,0x02,

// underscore (95): w=3, h=1
0x02,0xA9,
0x01,0x01,0x01,

// grave (96): w=2, h=2
0x01,0x0F,
0x01,0x02,

// a (97): w=3, h=4
0x02,0x29,
0x06,0x09,0x0F,

// b (98): w=3, h=5
0x02,0x09,
0x1F,0x12,0x0C,

// c (99): w=3, h=4
0x02,0x29,
0x06,0x09,0x09,

// d (100): w=3, h=5
0x02,0x09,
0x0C,0x12,0x1F,

// e (101): w=3, h=4
0x02,0x29,
0x06,0x0D,0x0A,

// f (102): w=3, h=5
0x02,0x09,
0x04,0x1E,0x05,

// g (103): w=3, h=5
0x02,0x29,
0x12,0x15,0x0F,

// h (104): w=3, h=5
0x02,0x09,
0x1F,0x02,0x1C,

// i (105): w=3, h=5
0x02,0x09,
0x14,0x1D,0x10,

// j (106): w=3, h=6
0x02,0x09,
0x20,0x20,0x1D,

// k (107): w=3, h=5
0x02,0x09,
0x1F,0x04,0x1A,

// l (108): w=3, h=5
0x02,0x09,
0x11,0x1F,0x10,

// m (109): w=3, h=4
0x02,0x29,
0x0F,0x02,0x0F,

// n (110): w=3, h=4
0x02,0x29,
0x0F,0x01,0x0E,

// o (111): w=3, h=4
0x02,0x29,
0x06,0x09,0x06,

// p (112): w=3, h=5
0x02,0x29,
0x1F,0x05,0x02,

// q (113): w=3, h=5
0x02,0x29,
0x06,0x09,0x1F,

// r (114): w=3, h=4
0x02,0x29,
0x0F,0x02,0x01,

// s (115): w=3, h=4
0x02,0x29,
0x0A,0x0B,0x05,

// t (116): w=3, h=5
0x02,0x09,
0x02,0x0F,0x12,

// u (117): w=3, h=4
0x02,0x29,
0x07,0x08,0x0F,

// v (118): w=3, h=4
0x02,0x29,
0x07,0x08,0x07,

// w (119): w=3, h=4
0x02,0x29,
0x0F,0x04,0x0F,

// x (120): w=3, h=4
0x02,0x29,
0x09,0x06,0x09,

// y (121): w=3, h=5
0x02,0x29,
0x13,0x14,0x0F,

// z (122): w=3, h=4
0x02,0x29,
0x09,0x0D,0x0B,

// braceleft (123): w=3, h=6
0x02,0x09,
0x04,0x1E,0x21,

// bar (124): w=1, h=5
0x00,0x10,
0x1F,

// braceright (125): w=3, h=6
0x02,0x09,
0x21,0x1E,0x04,

// asciitilde (126): w=4, h=2
0x03,0x08,
0x02,0x01,0x02,0x01

};
// 461 bytes
// 651 bytes with FAST_FONT_INDEX
