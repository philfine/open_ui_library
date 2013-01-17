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

const char font_9x15B[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCB,0x00,
0xD2,0x00,
0xDB,0x00,
0xEB,0x00,
0xFD,0x00,
0x0F,0x01,
0x14,0x01,
0x20,0x01,
0x2C,0x01,
0x35,0x01,
0x3F,0x01,
0x45,0x01,
0x4F,0x01,
0x56,0x01,
0x68,0x01,
0x7A,0x01,
0x88,0x01,
0x9A,0x01,
0xAC,0x01,
0xBE,0x01,
0xD0,0x01,
0xE2,0x01,
0xF4,0x01,
0x06,0x02,
0x18,0x02,
0x1E,0x02,
0x28,0x02,
0x36,0x02,
0x40,0x02,
0x4E,0x02,
0x5E,0x02,
0x70,0x02,
0x82,0x02,
0x94,0x02,
0xA6,0x02,
0xB8,0x02,
0xC8,0x02,
0xDA,0x02,
0xEC,0x02,
0xFE,0x02,
0x0C,0x03,
0x1A,0x03,
0x2C,0x03,
0x3C,0x03,
0x4E,0x03,
0x60,0x03,
0x72,0x03,
0x84,0x03,
0x96,0x03,
0xA8,0x03,
0xBA,0x03,
0xCC,0x03,
0xDE,0x03,
0xF0,0x03,
0x02,0x04,
0x14,0x04,
0x26,0x04,
0x36,0x04,
0x42,0x04,
0x54,0x04,
0x60,0x04,
0x68,0x04,
0x73,0x04,
0x79,0x04,
0x83,0x04,
0x95,0x04,
0x9F,0x04,
0xB1,0x04,
0xBB,0x04,
0xCD,0x04,
0xDF,0x04,
0xF1,0x04,
0xFF,0x04,
0x0F,0x05,
0x1F,0x05,
0x2D,0x05,
0x37,0x05,
0x41,0x05,
0x4B,0x05,
0x5D,0x05,
0x6F,0x05,
0x79,0x05,
0x83,0x05,
0x95,0x05,
0x9F,0x05,
0xA9,0x05,
0xB3,0x05,
0xBD,0x05,
0xCF,0x05,
0xD7,0x05,
0xE3,0x05,
0xEA,0x05,
0xF6,0x05,

// space (32): w=1, h=1
0x80,0x0C,0xC5,
0x00,

// exclam (33): w=2, h=10
0xA1,0x00,0x79,
0xFF,0xFF,
0x02,0x02,

// quotedbl (34): w=5, h=3
0x04,0x16,
0x07,0x07,0x00,0x07,0x07,

// numbersign (35): w=7, h=8
0x06,0x2F,
0x24,0xFF,0xFF,0x24,0xFF,0xFF,0x24,

// dollar (36): w=7, h=11
0x26,0x0F,
0x1C,0x3E,0x32,0xFF,0x62,0xE6,0xC4,
0x01,0x03,0x02,0x07,0x02,0x03,0x01,

// percent (37): w=8, h=10
0x27,0x09,
0x06,0x8F,0xC6,0x70,0x38,0x8E,0xC7,0x81,
0x02,0x03,0x01,0x00,0x00,0x01,0x03,0x01,

// ampersand (38): w=8, h=10
0x27,0x09,
0xC0,0xEE,0x3F,0x39,0x6F,0xC6,0xC0,0x60,
0x01,0x03,0x02,0x02,0x03,0x01,0x03,0x02,

// quotesingle (39): w=2, h=4
0x81,0x00,0x79,
0x0F,0x0F,

// parenleft (40): w=5, h=11
0x24,0x16,
0x78,0xFE,0x87,0x01,0x00,
0x00,0x01,0x03,0x0E,0x0C,

// parenright (41): w=5, h=11
0x24,0x16,
0x00,0x01,0x87,0xFE,0x78,
0x0C,0x0E,0x03,0x01,0x00,

// asterisk (42): w=7, h=5
0x06,0x6F,
0x04,0x15,0x1F,0x0E,0x1F,0x15,0x04,

// plus (43): w=8, h=7
0x07,0x49,
0x08,0x08,0x08,0x7F,0x7F,0x08,0x08,0x08,

// comma (44): w=3, h=5
0x82,0x08,0x78,
0x13,0x1F,0x0F,

// hyphen (45): w=8, h=1
0x07,0xA9,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=4, h=3
0x83,0x08,0x68,
0x02,0x07,0x07,0x02,

// slash (47): w=8, h=10
0x27,0x09,
0x00,0x80,0xC0,0x70,0x38,0x0E,0x07,0x01,
0x02,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=8, h=10
0x27,0x09,
0x78,0xFC,0x86,0x03,0x03,0x86,0xFC,0x78,
0x00,0x00,0x01,0x03,0x03,0x01,0x00,0x00,

// one (49): w=6, h=10
0x25,0x10,
0x04,0x06,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// two (50): w=8, h=10
0x27,0x09,
0x04,0x06,0x83,0xC1,0x61,0x33,0x1E,0x0C,
0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x02,

// three (51): w=8, h=10
0x27,0x09,
0x02,0x03,0x01,0x11,0x11,0x3B,0xEE,0xC4,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// four (52): w=8, h=10
0x27,0x09,
0x60,0x70,0x58,0x4C,0x46,0xFF,0xFF,0x40,
0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,

// five (53): w=8, h=10
0x27,0x09,
0x9F,0x9F,0x11,0x09,0x09,0x19,0xF1,0xE0,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00,

// six (54): w=8, h=10
0x27,0x09,
0xFC,0xFE,0x23,0x11,0x11,0x33,0xE6,0xC0,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00,

// seven (55): w=8, h=10
0x27,0x09,
0x01,0x01,0x01,0xC1,0xF1,0x39,0x0F,0x07,
0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// eight (56): w=8, h=10
0x27,0x09,
0xC4,0xEE,0x3B,0x11,0x11,0x3B,0xEE,0xC4,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00,

// nine (57): w=8, h=10
0x27,0x09,
0x0C,0x9E,0x33,0x21,0x21,0x13,0xFE,0xFC,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00,

// colon (58): w=4, h=8
0x03,0x77,
0x42,0xE7,0xE7,0x42,

// semicolon (59): w=4, h=10
0x23,0x77,
0x02,0x67,0xE7,0xE2,
0x00,0x02,0x03,0x01,

// less (60): w=6, h=10
0x25,0x10,
0x30,0x78,0xCC,0x86,0x03,0x01,
0x00,0x00,0x00,0x01,0x03,0x02,

// equal (61): w=8, h=4
0x07,0x89,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=6, h=10
0x25,0x10,
0x01,0x03,0x86,0xCC,0x78,0x30,
0x02,0x03,0x01,0x00,0x00,0x00,

// question (63): w=7, h=10
0x26,0x0F,
0x06,0x07,0x41,0x61,0x31,0x1F,0x0E,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// at (64): w=8, h=10
0x27,0x09,
0xFC,0xFE,0x03,0x31,0x79,0x4B,0x7E,0x3C,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// A (65): w=8, h=10
0x27,0x09,
0xF8,0xFC,0x46,0x43,0x43,0x46,0xFC,0xF8,
0x03,0x03,0x00,0x00,0x00,0x00,0x03,0x03,

// B (66): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x3B,0xEE,0xC4,
0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// C (67): w=8, h=10
0x27,0x09,
0xFC,0xFE,0x03,0x01,0x01,0x01,0x03,0x86,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// D (68): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x01,0x01,0x01,0x03,0xFE,0xFC,
0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// E (69): w=7, h=10
0x26,0x0F,
0xFF,0xFF,0x11,0x11,0x11,0x11,0x01,
0x03,0x03,0x02,0x02,0x02,0x02,0x02,

// F (70): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x11,0x01,0x01,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=8, h=10
0x27,0x09,
0xFC,0xFE,0x03,0x01,0x01,0x21,0xE3,0xE2,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x01,

// H (72): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x10,0x10,0x10,0x10,0xFF,0xFF,
0x03,0x03,0x00,0x00,0x00,0x00,0x03,0x03,

// I (73): w=6, h=10
0x25,0x10,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x02,0x02,0x03,0x03,0x02,0x02,

// J (74): w=6, h=10
0x25,0x10,
0x80,0x00,0x01,0x01,0xFF,0xFF,
0x01,0x03,0x02,0x03,0x01,0x00,

// K (75): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x30,0x78,0xCC,0x86,0x03,0x01,
0x03,0x03,0x00,0x00,0x00,0x01,0x03,0x02,

// L (76): w=7, h=10
0x26,0x0F,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x02,0x02,0x02,0x02,0x02,

// M (77): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x06,0x3C,0x3C,0x06,0xFF,0xFF,
0x03,0x03,0x00,0x00,0x00,0x00,0x03,0x03,

// N (78): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x0E,0x3C,0x70,0xC0,0xFF,0xFF,
0x03,0x03,0x00,0x00,0x00,0x01,0x03,0x03,

// O (79): w=8, h=10
0x27,0x09,
0xFC,0xFE,0x03,0x01,0x01,0x03,0xFE,0xFC,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00,

// P (80): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x11,0x11,0x11,0x11,0x1F,0x0E,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=8, h=10
0x27,0x09,
0xFC,0xFE,0x03,0x41,0xC1,0x83,0xFE,0xFC,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x02,

// R (82): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x31,0x31,0x71,0xD1,0x9F,0x0E,
0x03,0x03,0x00,0x00,0x00,0x00,0x03,0x03,

// S (83): w=8, h=10
0x27,0x09,
0x0E,0x1F,0x11,0x11,0x11,0x11,0xF3,0xE2,
0x01,0x03,0x02,0x02,0x02,0x02,0x03,0x01,

// T (84): w=8, h=10
0x27,0x09,
0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,
0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// U (85): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00,

// V (86): w=8, h=10
0x27,0x09,
0x07,0x3F,0xF8,0xC0,0xC0,0xF8,0x3F,0x07,
0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// W (87): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x80,0xF0,0xF0,0x80,0xFF,0xFF,
0x03,0x03,0x01,0x00,0x00,0x01,0x03,0x03,

// X (88): w=8, h=10
0x27,0x09,
0x03,0x87,0xCC,0x78,0x78,0xCC,0x87,0x03,
0x03,0x03,0x00,0x00,0x00,0x00,0x03,0x03,

// Y (89): w=8, h=10
0x27,0x09,
0x03,0x07,0x0C,0xF8,0xF8,0x0C,0x07,0x03,
0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// Z (90): w=7, h=10
0x26,0x0F,
0x81,0xC1,0x61,0x31,0x19,0x0F,0x07,
0x03,0x03,0x02,0x02,0x02,0x02,0x02,

// bracketleft (91): w=5, h=11
0x24,0x16,
0xFF,0xFF,0x00,0x00,0x00,
0x0F,0x0F,0x0C,0x0C,0x0C,

// backslash (92): w=8, h=10
0x27,0x09,
0x01,0x07,0x0E,0x38,0x70,0xC0,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x02,

// bracketright (93): w=5, h=11
0x24,0x16,
0x00,0x00,0x00,0xFF,0xFF,
0x0C,0x0C,0x0C,0x0F,0x0F,

// asciicircum (94): w=6, h=4
0x05,0x10,
0x0C,0x06,0x03,0x03,0x06,0x0C,

// underscore (95): w=8, h=1
0x87,0x0A,0x46,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=4, h=2
0x03,0x17,
0x00,0x01,0x07,0x06,

// a (97): w=8, h=7
0x07,0x69,
0x30,0x7A,0x4B,0x49,0x49,0x29,0x7F,0x7E,

// b (98): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x10,0x08,0x08,0x18,0xF0,0xE0,
0x03,0x03,0x01,0x02,0x02,0x03,0x01,0x00,

// c (99): w=8, h=7
0x07,0x69,
0x1C,0x3E,0x63,0x41,0x41,0x41,0x63,0x22,

// d (100): w=8, h=10
0x27,0x09,
0xE0,0xF0,0x18,0x08,0x08,0x10,0xFF,0xFF,
0x00,0x01,0x03,0x02,0x02,0x01,0x03,0x03,

// e (101): w=8, h=7
0x07,0x69,
0x1C,0x3E,0x6B,0x49,0x49,0x4B,0x6E,0x2C,

// f (102): w=8, h=10
0x27,0x09,
0x20,0x20,0xFE,0xFF,0x21,0x21,0x07,0x06,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,

// g (103): w=8, h=10
0x27,0x69,
0xAE,0xFF,0x51,0x51,0x51,0x5F,0xCE,0x83,
0x01,0x03,0x02,0x02,0x02,0x02,0x03,0x01,

// h (104): w=8, h=10
0x27,0x09,
0xFF,0xFF,0x10,0x08,0x08,0x18,0xF0,0xE0,
0x03,0x03,0x00,0x00,0x00,0x00,0x03,0x03,

// i (105): w=6, h=10
0x25,0x10,
0x00,0x08,0xFB,0xFB,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// j (106): w=7, h=13
0x26,0x0F,
0x00,0x00,0x00,0x08,0x08,0xFB,0xFB,
0x0E,0x1E,0x10,0x10,0x10,0x1F,0x0F,

// k (107): w=7, h=10
0x26,0x0F,
0xFF,0xFF,0x60,0xF0,0x98,0x08,0x00,
0x03,0x03,0x00,0x00,0x01,0x03,0x02,

// l (108): w=6, h=10
0x25,0x10,
0x00,0x01,0xFF,0xFF,0x00,0x00,
0x02,0x02,0x03,0x03,0x02,0x02,

// m (109): w=8, h=7
0x07,0x69,
0x7F,0x7E,0x01,0x7F,0x7E,0x01,0x7F,0x7E,

// n (110): w=8, h=7
0x07,0x69,
0x7F,0x7F,0x02,0x01,0x01,0x03,0x7E,0x7C,

// o (111): w=8, h=7
0x07,0x69,
0x1C,0x3E,0x63,0x41,0x41,0x63,0x3E,0x1C,

// p (112): w=8, h=10
0x27,0x69,
0xFF,0xFF,0x22,0x41,0x41,0x63,0x3E,0x1C,
0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,

// q (113): w=8, h=10
0x27,0x69,
0x1C,0x3E,0x63,0x41,0x41,0x22,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,

// r (114): w=8, h=7
0x07,0x69,
0x01,0x7F,0x7E,0x03,0x01,0x01,0x03,0x02,

// s (115): w=8, h=7
0x07,0x69,
0x26,0x6F,0x49,0x49,0x49,0x49,0x7B,0x32,

// t (116): w=8, h=9
0x27,0x29,
0x04,0x04,0xFF,0xFF,0x04,0x04,0x80,0x80,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// u (117): w=8, h=7
0x07,0x69,
0x1F,0x3F,0x60,0x40,0x40,0x20,0x7F,0x7F,

// v (118): w=8, h=7
0x07,0x69,
0x03,0x0F,0x3C,0x70,0x70,0x3C,0x0F,0x03,

// w (119): w=8, h=7
0x07,0x69,
0x3F,0x7F,0x60,0x3C,0x3C,0x60,0x7F,0x3F,

// x (120): w=8, h=7
0x07,0x69,
0x41,0x63,0x36,0x1C,0x1C,0x36,0x63,0x41,

// y (121): w=8, h=10
0x27,0x69,
0x1F,0x3F,0x60,0x40,0x40,0x20,0xFF,0xFF,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// z (122): w=6, h=7
0x05,0x70,
0x61,0x71,0x59,0x4D,0x47,0x43,

// braceleft (123): w=5, h=11
0x24,0x16,
0x30,0xFF,0xCF,0x00,0x00,
0x00,0x03,0x0F,0x0C,0x0C,

// bar (124): w=2, h=10
0xA1,0x00,0x79,
0xFF,0xFF,
0x03,0x03,

// braceright (125): w=5, h=11
0x24,0x16,
0x00,0x00,0xCF,0xFF,0x30,
0x0C,0x0C,0x0F,0x03,0x00,

// asciitilde (126): w=8, h=3
0x07,0x09,
0x06,0x07,0x01,0x03,0x06,0x04,0x07,0x03

};
// 1346 bytes
// 1536 bytes with FAST_FONT_INDEX
