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

const char font_6x13O[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD0,0x00,
0xD8,0x00,
0xE6,0x00,
0xF4,0x00,
0xFC,0x00,
0x00,0x01,
0x0A,0x01,
0x14,0x01,
0x1C,0x01,
0x22,0x01,
0x27,0x01,
0x2D,0x01,
0x32,0x01,
0x40,0x01,
0x4E,0x01,
0x5A,0x01,
0x68,0x01,
0x76,0x01,
0x82,0x01,
0x90,0x01,
0x9E,0x01,
0xAA,0x01,
0xB8,0x01,
0xC6,0x01,
0xCC,0x01,
0xD2,0x01,
0xDE,0x01,
0xE6,0x01,
0xF4,0x01,
0x00,0x02,
0x0E,0x02,
0x1C,0x02,
0x2A,0x02,
0x38,0x02,
0x46,0x02,
0x54,0x02,
0x62,0x02,
0x70,0x02,
0x7E,0x02,
0x88,0x02,
0x96,0x02,
0xA4,0x02,
0xB0,0x02,
0xBE,0x02,
0xCC,0x02,
0xDA,0x02,
0xE8,0x02,
0xF6,0x02,
0x04,0x03,
0x12,0x03,
0x1E,0x03,
0x2C,0x03,
0x38,0x03,
0x46,0x03,
0x54,0x03,
0x60,0x03,
0x6E,0x03,
0x7A,0x03,
0x84,0x03,
0x90,0x03,
0x97,0x03,
0x9F,0x03,
0xA3,0x03,
0xAB,0x03,
0xB9,0x03,
0xC1,0x03,
0xCF,0x03,
0xD7,0x03,
0xE3,0x03,
0xEB,0x03,
0xF9,0x03,
0xFE,0x03,
0x0A,0x04,
0x16,0x04,
0x20,0x04,
0x28,0x04,
0x30,0x04,
0x38,0x04,
0x40,0x04,
0x48,0x04,
0x50,0x04,
0x58,0x04,
0x5E,0x04,
0x66,0x04,
0x6D,0x04,
0x75,0x04,
0x7D,0x04,
0x85,0x04,
0x8D,0x04,
0x99,0x04,
0x9F,0x04,
0xAD,0x04,

// space (32): w=1, h=1
0x80,0x0A,0x95,
0x00,

// exclam (33): w=2, h=9
0x21,0x16,
0x70,0x0F,
0x01,0x00,

// quotedbl (34): w=4, h=3
0x03,0x14,
0x04,0x03,0x04,0x03,

// numbersign (35): w=6, h=7
0x05,0x28,
0x10,0x74,0x1F,0x74,0x1F,0x04,

// dollar (36): w=6, h=9
0x25,0x08,
0x80,0x8C,0xF2,0x9F,0x52,0x22,
0x00,0x00,0x01,0x00,0x00,0x00,

// percent (37): w=6, h=9
0x25,0x08,
0x80,0x42,0xA5,0x52,0x8C,0x03,
0x01,0x00,0x00,0x01,0x00,0x00,

// ampersand (38): w=6, h=8
0x05,0x28,
0x60,0x90,0x8E,0x79,0xC6,0x20,

// quotesingle (39): w=2, h=3
0x01,0x1B,
0x04,0x03,

// parenleft (40): w=4, h=10
0x23,0x0F,
0x78,0x86,0x01,0x00,
0x00,0x01,0x06,0x00,

// parenright (41): w=4, h=10
0x23,0x0F,
0x00,0x00,0xC3,0x3C,
0x06,0x01,0x00,0x00,

// asterisk (42): w=6, h=7
0x05,0x28,
0x20,0x16,0x7C,0x1F,0x3C,0x16,

// plus (43): w=4, h=5
0x03,0x4F,
0x04,0x1C,0x07,0x04,

// comma (44): w=3, h=3
0x02,0xF0,
0x04,0x03,0x01,

// hyphen (45): w=4, h=1
0x03,0x8F,
0x01,0x01,0x01,0x01,

// period (46): w=3, h=3
0x02,0xF0,
0x02,0x07,0x02,

// slash (47): w=6, h=9
0x25,0x08,
0x80,0x40,0x20,0x18,0x04,0x03,
0x01,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=6, h=9
0x25,0x08,
0x60,0x9C,0x02,0x81,0x62,0x1C,
0x00,0x00,0x01,0x00,0x00,0x00,

// one (49): w=5, h=9
0x24,0x09,
0x00,0x04,0xE2,0x1F,0x00,
0x01,0x01,0x01,0x01,0x01,

// two (50): w=6, h=9
0x25,0x08,
0x80,0x46,0x21,0x11,0x09,0x06,
0x01,0x01,0x01,0x01,0x01,0x00,

// three (51): w=6, h=9
0x25,0x08,
0x80,0x01,0x11,0x19,0xD5,0x23,
0x00,0x01,0x01,0x01,0x00,0x00,

// four (52): w=5, h=9
0x24,0x09,
0x40,0x60,0x58,0xC4,0x7F,
0x00,0x00,0x00,0x01,0x00,

// five (53): w=6, h=9
0x25,0x08,
0x80,0x1F,0x11,0x09,0xC9,0x31,
0x00,0x01,0x01,0x01,0x00,0x00,

// six (54): w=6, h=9
0x25,0x08,
0xE0,0x1E,0x11,0x11,0xE1,0x02,
0x00,0x01,0x01,0x01,0x00,0x00,

// seven (55): w=5, h=9
0x24,0x0E,
0x81,0x61,0x11,0x0D,0x03,
0x01,0x00,0x00,0x00,0x00,

// eight (56): w=6, h=9
0x25,0x08,
0xE0,0x1E,0x11,0x11,0xF1,0x0E,
0x00,0x01,0x01,0x01,0x00,0x00,

// nine (57): w=6, h=9
0x25,0x08,
0x80,0x0E,0x11,0x11,0xF1,0x0E,
0x00,0x01,0x01,0x01,0x00,0x00,

// colon (58): w=4, h=8
0x03,0x4F,
0x40,0xE2,0x47,0x02,

// semicolon (59): w=4, h=8
0x03,0x4F,
0x80,0x62,0x27,0x02,

// less (60): w=5, h=9
0x24,0x0E,
0x10,0x68,0x84,0x02,0x01,
0x00,0x00,0x00,0x01,0x00,

// equal (61): w=6, h=4
0x05,0x68,
0x08,0x09,0x09,0x09,0x09,0x01,

// greater (62): w=6, h=9
0x25,0x08,
0x00,0x81,0x42,0x44,0x28,0x10,
0x01,0x00,0x00,0x00,0x00,0x00,

// question (63): w=5, h=9
0x24,0x0E,
0x06,0x41,0x21,0x11,0x0E,
0x00,0x01,0x00,0x00,0x00,

// at (64): w=6, h=9
0x25,0x08,
0xF0,0x0E,0x31,0x49,0x39,0x06,
0x00,0x01,0x01,0x01,0x01,0x00,

// A (65): w=6, h=9
0x25,0x08,
0xE0,0x3C,0x22,0x21,0xE2,0x1C,
0x01,0x00,0x00,0x00,0x01,0x00,

// B (66): w=6, h=9
0x25,0x08,
0x00,0xE1,0x1F,0x11,0xF1,0x0E,
0x01,0x01,0x01,0x01,0x00,0x00,

// C (67): w=6, h=9
0x25,0x08,
0xE0,0x1E,0x01,0x01,0x81,0x02,
0x00,0x01,0x01,0x01,0x00,0x00,

// D (68): w=6, h=9
0x25,0x08,
0x00,0xE1,0x1F,0x01,0xE1,0x1E,
0x01,0x01,0x01,0x01,0x00,0x00,

// E (69): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x11,0x11,0x11,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,

// F (70): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x11,0x11,0x11,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,

// G (71): w=6, h=9
0x25,0x08,
0xE0,0x1E,0x01,0x21,0xE1,0x02,
0x00,0x01,0x01,0x01,0x00,0x00,

// H (72): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x10,0x10,0xF0,0x1F,
0x01,0x00,0x00,0x00,0x01,0x00,

// I (73): w=4, h=9
0x23,0x0F,
0x00,0xE1,0x1F,0x01,
0x01,0x01,0x01,0x00,

// J (74): w=6, h=9
0x25,0x08,
0x80,0x00,0x00,0xE1,0x1F,0x01,
0x00,0x01,0x01,0x00,0x00,0x00,

// K (75): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x30,0x48,0x84,0x03,
0x01,0x00,0x00,0x00,0x01,0x00,

// L (76): w=5, h=9
0x24,0x09,
0xE0,0x1F,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,

// M (77): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x04,0x18,0xE4,0x1F,
0x01,0x00,0x00,0x00,0x01,0x00,

// N (78): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x06,0x38,0xE0,0x1F,
0x01,0x00,0x00,0x00,0x01,0x00,

// O (79): w=6, h=9
0x25,0x08,
0xE0,0x1E,0x01,0x01,0xE1,0x1E,
0x00,0x01,0x01,0x01,0x00,0x00,

// P (80): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x11,0x11,0x11,0x0E,
0x01,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=6, h=10
0x25,0x08,
0xE0,0x1E,0x81,0x01,0xE1,0x1E,
0x00,0x01,0x01,0x01,0x02,0x00,

// R (82): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x11,0x71,0x91,0x0E,
0x01,0x00,0x00,0x00,0x01,0x00,

// S (83): w=6, h=9
0x25,0x08,
0x80,0x0E,0x11,0x11,0xE1,0x02,
0x00,0x01,0x01,0x01,0x00,0x00,

// T (84): w=5, h=9
0x24,0x0E,
0x01,0xE1,0x1F,0x01,0x01,
0x00,0x01,0x00,0x00,0x00,

// U (85): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x00,0x00,0xE0,0x1F,
0x00,0x01,0x01,0x01,0x00,0x00,

// V (86): w=5, h=9
0x24,0x0E,
0xFF,0x00,0xC0,0x30,0x0F,
0x00,0x01,0x00,0x00,0x00,

// W (87): w=6, h=9
0x25,0x08,
0xF0,0x0F,0xF0,0x00,0xF0,0x0F,
0x00,0x01,0x00,0x01,0x00,0x00,

// X (88): w=6, h=9
0x25,0x08,
0x80,0x43,0x2C,0x30,0xCC,0x03,
0x01,0x00,0x00,0x00,0x01,0x00,

// Y (89): w=5, h=9
0x24,0x0E,
0x03,0xCC,0x30,0x0C,0x03,
0x00,0x01,0x00,0x00,0x00,

// Z (90): w=6, h=9
0x25,0x08,
0x80,0x41,0x21,0x11,0x0D,0x03,
0x01,0x01,0x01,0x01,0x01,0x00,

// bracketleft (91): w=5, h=10
0x24,0x09,
0xC0,0x38,0x07,0x00,0x00,
0x07,0x06,0x06,0x00,0x00,

// backslash (92): w=4, h=9
0x23,0x0F,
0x03,0x1C,0x60,0x80,
0x00,0x00,0x00,0x01,

// bracketright (93): w=5, h=10
0x24,0x09,
0x00,0x00,0xC0,0x38,0x07,
0x06,0x06,0x07,0x00,0x00,

// asciicircum (94): w=5, h=3
0x04,0x0E,
0x04,0x02,0x01,0x02,0x04,

// underscore (95): w=5, h=1
0x84,0x09,0x46,
0x01,0x01,0x01,0x01,0x01,

// grave (96): w=2, h=1
0x01,0x1B,
0x00,0x03,

// a (97): w=6, h=6
0x05,0x68,
0x18,0x24,0x25,0x15,0x3D,0x06,

// b (98): w=6, h=9
0x25,0x08,
0xE0,0x1F,0x08,0x08,0xE8,0x10,
0x01,0x01,0x01,0x01,0x00,0x00,

// c (99): w=6, h=6
0x05,0x68,
0x1C,0x22,0x21,0x21,0x11,0x02,

// d (100): w=6, h=9
0x25,0x08,
0xE0,0x10,0x08,0x08,0xE8,0x1F,
0x00,0x01,0x01,0x01,0x01,0x00,

// e (101): w=6, h=6
0x05,0x68,
0x18,0x26,0x25,0x25,0x15,0x06,

// f (102): w=5, h=9
0x24,0x0E,
0xD0,0x3E,0x11,0x11,0x02,
0x01,0x00,0x00,0x00,0x00,

// g (103): w=6, h=8
0x05,0x68,
0x48,0x96,0x91,0x91,0x79,0x06,

// h (104): w=6, h=9
0x25,0x08,
0xC0,0x38,0x17,0x08,0xC8,0x30,
0x01,0x00,0x00,0x00,0x01,0x00,

// i (105): w=3, h=8
0x02,0x30,
0x80,0xE4,0x9D,

// j (106): w=5, h=10
0x24,0x29,
0x80,0x00,0x00,0xE4,0x1D,
0x01,0x02,0x02,0x01,0x00,

// k (107): w=5, h=9
0x24,0x09,
0xC0,0x38,0x67,0x90,0x08,
0x01,0x00,0x00,0x00,0x01,

// l (108): w=4, h=9
0x23,0x0F,
0x00,0xC0,0x39,0x07,
0x01,0x01,0x01,0x00,

// m (109): w=6, h=6
0x05,0x68,
0x38,0x07,0x19,0x06,0x39,0x06,

// n (110): w=6, h=6
0x05,0x68,
0x38,0x07,0x02,0x01,0x39,0x06,

// o (111): w=6, h=6
0x05,0x68,
0x18,0x26,0x21,0x21,0x19,0x06,

// p (112): w=6, h=8
0x05,0x68,
0xF8,0x17,0x11,0x11,0x09,0x06,

// q (113): w=6, h=8
0x05,0x68,
0x0C,0x12,0x11,0xD1,0x39,0x07,

// r (114): w=6, h=6
0x05,0x68,
0x38,0x07,0x02,0x01,0x01,0x02,

// s (115): w=6, h=6
0x05,0x68,
0x10,0x22,0x25,0x29,0x11,0x02,

// t (116): w=4, h=8
0x03,0x2F,
0x64,0x9C,0x87,0x44,

// u (117): w=6, h=6
0x05,0x68,
0x1C,0x23,0x20,0x10,0x3C,0x03,

// v (118): w=5, h=6
0x04,0x6E,
0x1F,0x20,0x10,0x08,0x07,

// w (119): w=6, h=6
0x05,0x68,
0x18,0x27,0x18,0x24,0x18,0x07,

// x (120): w=6, h=6
0x05,0x68,
0x20,0x11,0x0A,0x14,0x22,0x01,

// y (121): w=6, h=8
0x05,0x68,
0x4C,0x93,0x90,0x48,0x3C,0x03,

// z (122): w=6, h=6
0x05,0x68,
0x30,0x29,0x29,0x25,0x23,0x01,

// braceleft (123): w=5, h=10
0x24,0x09,
0x10,0xD0,0x2F,0x00,0x00,
0x00,0x01,0x06,0x06,0x00,

// bar (124): w=2, h=9
0x21,0x16,
0xE0,0x1F,
0x01,0x00,

// braceright (125): w=6, h=10
0x25,0x08,
0x00,0x00,0xC0,0x2F,0x10,0x10,
0x06,0x06,0x01,0x00,0x00,0x00,

// asciitilde (126): w=5, h=3
0x04,0x0E,
0x06,0x01,0x02,0x04,0x03

};
// 1014 bytes
// 1204 bytes with FAST_FONT_INDEX
