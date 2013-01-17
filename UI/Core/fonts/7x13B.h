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

const char font_7x13B[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD1,0x00,
0xDD,0x00,
0xEB,0x00,
0xF9,0x00,
0x07,0x01,
0x0B,0x01,
0x15,0x01,
0x1F,0x01,
0x27,0x01,
0x2F,0x01,
0x35,0x01,
0x3D,0x01,
0x43,0x01,
0x51,0x01,
0x5F,0x01,
0x6D,0x01,
0x7B,0x01,
0x89,0x01,
0x97,0x01,
0xA5,0x01,
0xB3,0x01,
0xC1,0x01,
0xCF,0x01,
0xDD,0x01,
0xE3,0x01,
0xE9,0x01,
0xF7,0x01,
0xFF,0x01,
0x0D,0x02,
0x1B,0x02,
0x29,0x02,
0x37,0x02,
0x45,0x02,
0x53,0x02,
0x61,0x02,
0x6F,0x02,
0x7D,0x02,
0x8B,0x02,
0x99,0x02,
0xA7,0x02,
0xB5,0x02,
0xC3,0x02,
0xD1,0x02,
0xDF,0x02,
0xED,0x02,
0xFB,0x02,
0x09,0x03,
0x17,0x03,
0x25,0x03,
0x33,0x03,
0x41,0x03,
0x4F,0x03,
0x5D,0x03,
0x6B,0x03,
0x79,0x03,
0x87,0x03,
0x95,0x03,
0x9F,0x03,
0xAD,0x03,
0xB7,0x03,
0xBF,0x03,
0xC8,0x03,
0xCE,0x03,
0xD6,0x03,
0xE4,0x03,
0xEC,0x03,
0xFA,0x03,
0x02,0x04,
0x10,0x04,
0x18,0x04,
0x26,0x04,
0x34,0x04,
0x42,0x04,
0x50,0x04,
0x5E,0x04,
0x66,0x04,
0x6E,0x04,
0x76,0x04,
0x7E,0x04,
0x86,0x04,
0x8E,0x04,
0x96,0x04,
0x9E,0x04,
0xA6,0x04,
0xAE,0x04,
0xB6,0x04,
0xBE,0x04,
0xC6,0x04,
0xCE,0x04,
0xD8,0x04,
0xDE,0x04,
0xE8,0x04,

// space (32): w=1, h=1
0x80,0x0A,0xA5,
0x00,

// exclam (33): w=2, h=9
0x21,0x17,
0xBF,0xBF,
0x01,0x01,

// quotedbl (34): w=5, h=3
0x04,0x0F,
0x07,0x07,0x00,0x07,0x07,

// numbersign (35): w=5, h=9
0x24,0x0F,
0x6C,0xFF,0x6C,0xFF,0x6C,
0x00,0x01,0x00,0x01,0x00,

// dollar (36): w=6, h=9
0x25,0x09,
0x4C,0x92,0xFF,0xFF,0x92,0x64,
0x00,0x00,0x01,0x01,0x00,0x00,

// percent (37): w=6, h=9
0x25,0x09,
0x87,0xE5,0x37,0xD8,0x4E,0xC3,
0x01,0x00,0x00,0x01,0x01,0x01,

// ampersand (38): w=6, h=9
0x25,0x09,
0xEE,0xFF,0x11,0xFF,0xCE,0x60,
0x00,0x01,0x01,0x01,0x00,0x01,

// quotesingle (39): w=2, h=4
0x01,0x17,
0x0F,0x0F,

// parenleft (40): w=4, h=9
0x23,0x10,
0x38,0xFE,0xC7,0x01,
0x00,0x00,0x01,0x01,

// parenright (41): w=4, h=9
0x23,0x10,
0x01,0xC7,0xFE,0x38,
0x01,0x01,0x00,0x00,

// asterisk (42): w=6, h=6
0x05,0x49,
0x0C,0x2D,0x1E,0x1E,0x2D,0x0C,

// plus (43): w=6, h=6
0x05,0x49,
0x0C,0x0C,0x3F,0x3F,0x0C,0x0C,

// comma (44): w=4, h=4
0x03,0xD0,
0x08,0x0F,0x07,0x03,

// hyphen (45): w=6, h=1
0x05,0xA9,
0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=4, h=3
0x03,0xF0,
0x02,0x07,0x07,0x02,

// slash (47): w=6, h=9
0x25,0x09,
0x80,0xE0,0x70,0x1C,0x0F,0x03,
0x01,0x01,0x00,0x00,0x00,0x00,

// zero (48): w=6, h=9
0x25,0x09,
0x7C,0xFE,0x01,0x01,0xFE,0x7C,
0x00,0x00,0x01,0x01,0x00,0x00,

// one (49): w=6, h=9
0x25,0x09,
0x04,0x02,0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,

// two (50): w=6, h=9
0x25,0x09,
0xC6,0xE7,0x31,0x11,0x1F,0x0E,
0x01,0x01,0x01,0x01,0x01,0x01,

// three (51): w=6, h=9
0x25,0x09,
0x81,0x91,0x19,0x1D,0xF7,0xE3,
0x00,0x01,0x01,0x01,0x01,0x00,

// four (52): w=6, h=9
0x25,0x09,
0x70,0x78,0x4C,0x46,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x01,0x01,

// five (53): w=6, h=9
0x25,0x09,
0x9F,0x9F,0x09,0x09,0xF9,0xF1,
0x00,0x01,0x01,0x01,0x01,0x00,

// six (54): w=6, h=9
0x25,0x09,
0xFE,0xFF,0x11,0x11,0xF3,0xE2,
0x00,0x01,0x01,0x01,0x01,0x00,

// seven (55): w=6, h=9
0x25,0x09,
0x01,0x81,0xE1,0x79,0x1F,0x07,
0x00,0x01,0x01,0x00,0x00,0x00,

// eight (56): w=6, h=9
0x25,0x09,
0xEE,0xFF,0x11,0x11,0xFF,0xEE,
0x00,0x01,0x01,0x01,0x01,0x00,

// nine (57): w=6, h=9
0x25,0x09,
0x8E,0x9F,0x11,0x11,0xFF,0xFE,
0x00,0x01,0x01,0x01,0x01,0x00,

// colon (58): w=4, h=8
0x03,0x50,
0x42,0xE7,0xE7,0x42,

// semicolon (59): w=4, h=8
0x03,0x50,
0x82,0xF7,0x77,0x32,

// less (60): w=6, h=9
0x25,0x09,
0x10,0x38,0x6C,0xC6,0x83,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=6, h=4
0x05,0x69,
0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=6, h=9
0x25,0x09,
0x01,0x83,0xC6,0x6C,0x38,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,

// question (63): w=6, h=9
0x25,0x09,
0x06,0x07,0xB1,0xB1,0x1F,0x0E,
0x00,0x00,0x01,0x01,0x00,0x00,

// at (64): w=6, h=9
0x25,0x09,
0xFE,0x01,0x39,0x29,0xBF,0xBE,
0x00,0x01,0x01,0x01,0x01,0x00,

// A (65): w=6, h=9
0x25,0x09,
0xFE,0xFF,0x11,0x11,0xFF,0xFE,
0x01,0x01,0x00,0x00,0x01,0x01,

// B (66): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x11,0x11,0xFF,0xEE,
0x01,0x01,0x01,0x01,0x01,0x00,

// C (67): w=6, h=9
0x25,0x09,
0xFE,0xFF,0x01,0x01,0x83,0x82,
0x00,0x01,0x01,0x01,0x01,0x00,

// D (68): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x01,0x01,0xFF,0xFE,
0x01,0x01,0x01,0x01,0x01,0x00,

// E (69): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,

// F (70): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,

// G (71): w=6, h=9
0x25,0x09,
0xFE,0xFF,0x01,0x11,0xF3,0xF2,
0x00,0x01,0x01,0x01,0x01,0x01,

// H (72): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x10,0x10,0xFF,0xFF,
0x01,0x01,0x00,0x00,0x01,0x01,

// I (73): w=6, h=9
0x25,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,

// J (74): w=6, h=9
0x25,0x09,
0x80,0x80,0x00,0x00,0xFF,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,

// K (75): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x38,0x6C,0xC6,0x83,
0x01,0x01,0x00,0x00,0x00,0x01,

// L (76): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,

// M (77): w=6, h=9
0x25,0x09,
0xFF,0xFE,0x0C,0x0C,0xFE,0xFF,
0x01,0x01,0x00,0x00,0x01,0x01,

// N (78): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x1C,0x70,0xFF,0xFF,
0x01,0x01,0x00,0x00,0x01,0x01,

// O (79): w=6, h=9
0x25,0x09,
0xFE,0xFF,0x01,0x01,0xFF,0xFE,
0x00,0x01,0x01,0x01,0x01,0x00,

// P (80): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x11,0x11,0x1F,0x0E,
0x01,0x01,0x00,0x00,0x00,0x00,

// Q (81): w=6, h=10
0x25,0x09,
0xFE,0xFF,0x41,0x81,0xFF,0xFE,
0x00,0x01,0x01,0x01,0x03,0x02,

// R (82): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x31,0x71,0xDF,0x8E,
0x01,0x01,0x00,0x00,0x00,0x01,

// S (83): w=6, h=9
0x25,0x09,
0x8E,0x9F,0x11,0x11,0xF3,0xE2,
0x00,0x01,0x01,0x01,0x01,0x00,

// T (84): w=6, h=9
0x25,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0x01,0x01,0x00,0x00,

// U (85): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x00,0x00,0xFF,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,

// V (86): w=6, h=9
0x25,0x09,
0x07,0x3F,0xE0,0xE0,0x3F,0x07,
0x00,0x00,0x01,0x01,0x00,0x00,

// W (87): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x60,0x60,0xFF,0xFF,
0x01,0x00,0x00,0x00,0x00,0x01,

// X (88): w=6, h=9
0x25,0x09,
0x83,0xEE,0x38,0x38,0xEE,0x83,
0x01,0x00,0x00,0x00,0x00,0x01,

// Y (89): w=6, h=9
0x25,0x09,
0x03,0x0F,0xFC,0xFC,0x0F,0x03,
0x00,0x00,0x01,0x01,0x00,0x00,

// Z (90): w=6, h=9
0x25,0x09,
0xC1,0xE1,0x31,0x19,0x0F,0x07,
0x01,0x01,0x01,0x01,0x01,0x01,

// bracketleft (91): w=4, h=9
0x23,0x10,
0xFF,0xFF,0x01,0x01,
0x01,0x01,0x01,0x01,

// backslash (92): w=6, h=9
0x25,0x09,
0x03,0x0F,0x1C,0x70,0xE0,0x80,
0x00,0x00,0x00,0x00,0x01,0x01,

// bracketright (93): w=4, h=9
0x23,0x10,
0x01,0x01,0xFF,0xFF,
0x01,0x01,0x01,0x01,

// asciicircum (94): w=6, h=4
0x05,0x09,
0x0C,0x06,0x03,0x03,0x06,0x0C,

// underscore (95): w=6, h=2
0x85,0x08,0x46,
0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=4, h=2
0x03,0x10,
0x00,0x01,0x07,0x06,

// a (97): w=6, h=6
0x05,0x69,
0x18,0x3D,0x25,0x25,0x3F,0x3E,

// b (98): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x08,0x08,0xF8,0xF0,
0x01,0x01,0x01,0x01,0x01,0x00,

// c (99): w=6, h=6
0x05,0x69,
0x1E,0x3F,0x21,0x21,0x33,0x12,

// d (100): w=6, h=9
0x25,0x09,
0xF0,0xF8,0x08,0x08,0xFF,0xFF,
0x00,0x01,0x01,0x01,0x01,0x01,

// e (101): w=6, h=6
0x05,0x69,
0x1E,0x3F,0x25,0x25,0x37,0x16,

// f (102): w=6, h=9
0x25,0x09,
0x10,0xFE,0xFF,0x11,0x03,0x02,
0x00,0x01,0x01,0x00,0x00,0x00,

// g (103): w=6, h=8
0x05,0x69,
0x56,0xFF,0xA9,0xA9,0xEE,0x47,

// h (104): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x08,0x08,0xF8,0xF0,
0x01,0x01,0x00,0x00,0x01,0x01,

// i (105): w=6, h=9
0x25,0x09,
0x00,0x08,0xFB,0xFB,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,

// j (106): w=6, h=11
0x25,0x09,
0x00,0x00,0x00,0x00,0xFB,0xFB,
0x02,0x06,0x04,0x04,0x07,0x03,

// k (107): w=6, h=9
0x25,0x09,
0xFF,0xFF,0x60,0xF0,0x98,0x08,
0x01,0x01,0x00,0x00,0x01,0x01,

// l (108): w=6, h=9
0x25,0x09,
0x00,0x01,0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,

// m (109): w=6, h=6
0x05,0x69,
0x3F,0x3F,0x06,0x07,0x3F,0x3E,

// n (110): w=6, h=6
0x05,0x69,
0x3F,0x3F,0x01,0x01,0x3F,0x3E,

// o (111): w=6, h=6
0x05,0x69,
0x1E,0x3F,0x21,0x21,0x3F,0x1E,

// p (112): w=6, h=8
0x05,0x69,
0xFF,0xFF,0x11,0x11,0x1F,0x0E,

// q (113): w=6, h=8
0x05,0x69,
0x0E,0x1F,0x11,0x11,0xFF,0xFF,

// r (114): w=6, h=6
0x05,0x69,
0x3F,0x3F,0x01,0x01,0x03,0x02,

// s (115): w=6, h=6
0x05,0x69,
0x12,0x37,0x25,0x29,0x3B,0x12,

// t (116): w=6, h=8
0x05,0x29,
0x04,0x7F,0xFF,0x84,0xC4,0x40,

// u (117): w=6, h=6
0x05,0x69,
0x1F,0x3F,0x20,0x20,0x3F,0x3F,

// v (118): w=6, h=6
0x05,0x69,
0x07,0x1F,0x38,0x38,0x1F,0x07,

// w (119): w=6, h=6
0x05,0x69,
0x1F,0x3F,0x18,0x18,0x3F,0x1F,

// x (120): w=6, h=6
0x05,0x69,
0x33,0x3F,0x0C,0x0C,0x3F,0x33,

// y (121): w=6, h=8
0x05,0x69,
0x4F,0xDF,0x90,0x90,0xFF,0x7F,

// z (122): w=6, h=6
0x05,0x69,
0x31,0x39,0x29,0x25,0x27,0x23,

// braceleft (123): w=4, h=9
0x23,0x10,
0xD6,0xFF,0x29,0x01,
0x00,0x01,0x01,0x01,

// bar (124): w=2, h=9
0x21,0x17,
0xFF,0xFF,
0x01,0x01,

// braceright (125): w=4, h=9
0x23,0x10,
0x01,0x29,0xFF,0xD6,
0x01,0x01,0x01,0x00,

// asciitilde (126): w=6, h=3
0x05,0x09,
0x06,0x03,0x03,0x06,0x06,0x03

};
// 1074 bytes
// 1264 bytes with FAST_FONT_INDEX