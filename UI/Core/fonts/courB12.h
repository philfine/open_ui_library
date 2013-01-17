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

// courB12 = "Courier Bold"

const char font_courB12[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCB,0x00,
0xD3,0x00,
0xE7,0x00,
0xF7,0x00,
0x09,0x01,
0x19,0x01,
0x1E,0x01,
0x28,0x01,
0x33,0x01,
0x3D,0x01,
0x47,0x01,
0x4D,0x01,
0x56,0x01,
0x5C,0x01,
0x6C,0x01,
0x7E,0x01,
0x90,0x01,
0xA0,0x01,
0xB0,0x01,
0xC2,0x01,
0xD2,0x01,
0xE4,0x01,
0xF4,0x01,
0x04,0x02,
0x16,0x02,
0x1C,0x02,
0x25,0x02,
0x39,0x02,
0x44,0x02,
0x58,0x02,
0x68,0x02,
0x7C,0x02,
0x92,0x02,
0xA6,0x02,
0xBA,0x02,
0xCE,0x02,
0xE0,0x02,
0xF2,0x02,
0x08,0x03,
0x1C,0x03,
0x2E,0x03,
0x42,0x03,
0x56,0x03,
0x6A,0x03,
0x80,0x03,
0x96,0x03,
0xAA,0x03,
0xBE,0x03,
0xD2,0x03,
0xE6,0x03,
0xF8,0x03,
0x0A,0x04,
0x20,0x04,
0x36,0x04,
0x4C,0x04,
0x62,0x04,
0x78,0x04,
0x88,0x04,
0x92,0x04,
0xA2,0x04,
0xAD,0x04,
0xB7,0x04,
0xC4,0x04,
0xCB,0x04,
0xD5,0x04,
0xE9,0x04,
0xF3,0x04,
0x07,0x05,
0x11,0x05,
0x23,0x05,
0x37,0x05,
0x4B,0x05,
0x5D,0x05,
0x6B,0x05,
0x7F,0x05,
0x91,0x05,
0x9D,0x05,
0xA8,0x05,
0xB2,0x05,
0xC6,0x05,
0xDA,0x05,
0xE5,0x05,
0xEE,0x05,
0x02,0x06,
0x0D,0x06,
0x19,0x06,
0x25,0x06,
0x2F,0x06,
0x45,0x06,
0x4E,0x06,
0x58,0x06,
0x5F,0x06,
0x69,0x06,

// space (32): w=1, h=1
0x80,0x0A,0x4E,
0x00,

// exclam (33): w=2, h=11
0xA1,0x00,0x7A,
0xFF,0xFF,
0x06,0x06,

// quotedbl (34): w=6, h=5
0x05,0x16,
0x1F,0x1F,0x00,0x00,0x1F,0x1F,

// numbersign (35): w=9, h=12
0x28,0x09,
0x90,0x90,0xFF,0xFF,0x90,0xFF,0xFF,0x90,0x90,
0x00,0x00,0x0F,0x0F,0x00,0x0F,0x0F,0x00,0x00,

// dollar (36): w=7, h=12
0x26,0x10,
0x1C,0x3E,0x32,0x23,0x63,0xE6,0xC6,
0x03,0x03,0x1E,0x1E,0x02,0x03,0x01,

// percent (37): w=8, h=11
0x27,0x0F,
0x46,0x4F,0x69,0xA9,0xAF,0xB6,0x90,0x10,
0x00,0x00,0x03,0x07,0x04,0x04,0x07,0x03,

// ampersand (38): w=7, h=9
0x26,0x50,
0xE0,0xF6,0x1F,0x39,0xE3,0xF2,0x30,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// quotesingle (39): w=2, h=5
0x81,0x00,0x89,
0x1F,0x1F,

// parenleft (40): w=4, h=13
0x23,0x1D,
0xF0,0xFE,0x0F,0x01,
0x01,0x0F,0x1E,0x10,

// parenright (41): w=4, h=13
0xA3,0x00,0x69,
0x01,0x0F,0xFE,0xF0,
0x10,0x1E,0x0F,0x01,

// asterisk (42): w=8, h=6
0x07,0x0F,
0x04,0x24,0x3C,0x1F,0x1F,0x3C,0x24,0x04,

// plus (43): w=8, h=8
0x07,0x4F,
0x18,0x18,0x18,0xFF,0xFF,0x18,0x18,0x18,

// comma (44): w=3, h=5
0x82,0x09,0x79,
0x1B,0x0F,0x07,

// hyphen (45): w=7, h=2
0x06,0xB0,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=3, h=2
0x82,0x09,0x79,
0x03,0x03,0x03,

// slash (47): w=7, h=13
0x26,0x10,
0x00,0x00,0xC0,0xF0,0x3E,0x0F,0x01,
0x38,0x3E,0x07,0x01,0x00,0x00,0x00,

// zero (48): w=8, h=11
0x27,0x0F,
0xF8,0xFE,0x07,0x01,0x01,0x07,0xFE,0xF8,
0x00,0x03,0x07,0x04,0x04,0x07,0x03,0x00,

// one (49): w=8, h=11
0x27,0x0F,
0x04,0x06,0x02,0xFF,0xFF,0x00,0x00,0x00,
0x04,0x04,0x04,0x07,0x07,0x04,0x04,0x04,

// two (50): w=7, h=11
0x26,0x10,
0x06,0x03,0x81,0xC1,0x63,0x3E,0x1C,
0x06,0x07,0x05,0x04,0x04,0x06,0x06,

// three (51): w=7, h=11
0x26,0x10,
0x06,0x03,0x11,0x11,0x3B,0xEE,0xC4,
0x03,0x06,0x04,0x04,0x06,0x03,0x01,

// four (52): w=8, h=11
0x27,0x0F,
0xC0,0xF0,0x98,0x8C,0x86,0xFF,0xFF,0x80,
0x00,0x00,0x00,0x04,0x04,0x07,0x07,0x04,

// five (53): w=7, h=11
0x26,0x10,
0x3F,0x3F,0x11,0x11,0x11,0xF1,0xE1,
0x06,0x06,0x04,0x04,0x06,0x03,0x01,

// six (54): w=8, h=11
0x27,0x0F,
0xF8,0xFE,0x26,0x13,0x11,0x31,0xE1,0xC0,
0x01,0x03,0x06,0x04,0x04,0x06,0x03,0x01,

// seven (55): w=7, h=11
0x26,0x10,
0x03,0x03,0x01,0xE1,0xF9,0x1F,0x07,
0x00,0x00,0x07,0x07,0x00,0x00,0x00,

// eight (56): w=7, h=11
0x26,0x10,
0xC4,0xEE,0x33,0x11,0x33,0xEE,0xC4,
0x01,0x03,0x06,0x04,0x06,0x03,0x01,

// nine (57): w=8, h=11
0x27,0x0F,
0x0C,0x1E,0x33,0x21,0x21,0x13,0xFE,0xFC,
0x00,0x04,0x04,0x04,0x06,0x03,0x03,0x00,

// colon (58): w=3, h=7
0x82,0x04,0x79,
0x63,0x63,0x63,

// semicolon (59): w=3, h=10
0xA2,0x04,0x79,
0x63,0xE3,0xE3,
0x03,0x01,0x00,

// less (60): w=9, h=9
0x28,0x4E,
0x10,0x38,0x38,0x6C,0x6C,0xC6,0xC6,0x83,0x83,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=9, h=5
0x08,0x89,
0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,

// greater (62): w=9, h=9
0x28,0x49,
0x83,0x83,0xC6,0xC6,0x6C,0x6C,0x38,0x38,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=7, h=10
0x26,0x30,
0x06,0x07,0x61,0x71,0x11,0x1F,0x0E,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// at (64): w=9, h=12
0x28,0x09,
0xFC,0x0E,0xF3,0xF9,0x09,0x09,0xF3,0x0E,0xFC,
0x03,0x07,0x0C,0x09,0x09,0x09,0x0D,0x05,0x00,

// A (65): w=10, h=10
0x29,0x28,
0x00,0x80,0xF1,0x7D,0x47,0x47,0x7C,0xF0,0x80,0x00,
0x02,0x03,0x03,0x02,0x00,0x00,0x02,0x03,0x03,0x02,

// B (66): w=9, h=10
0x28,0x29,
0x01,0xFF,0xFF,0x11,0x11,0x11,0x3B,0xEE,0xC4,
0x02,0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// C (67): w=9, h=10
0x28,0x29,
0x78,0xFE,0x86,0x03,0x01,0x01,0x03,0x86,0x87,
0x00,0x01,0x01,0x03,0x02,0x02,0x03,0x01,0x01,

// D (68): w=9, h=10
0x28,0x29,
0x01,0xFF,0xFF,0x01,0x01,0x03,0x86,0xFE,0x78,
0x02,0x03,0x03,0x02,0x02,0x03,0x01,0x01,0x00,

// E (69): w=8, h=10
0x27,0x2F,
0x01,0xFF,0xFF,0x11,0x11,0x39,0x83,0x83,
0x02,0x03,0x03,0x02,0x02,0x02,0x03,0x03,

// F (70): w=8, h=10
0x27,0x2F,
0x01,0xFF,0xFF,0x11,0x11,0x39,0x03,0x03,
0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,

// G (71): w=10, h=10
0x29,0x28,
0x78,0xFE,0x86,0x03,0x01,0x21,0x23,0xE6,0xE7,0x20,
0x00,0x01,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// H (72): w=9, h=10
0x28,0x29,
0x01,0xFF,0xFF,0x11,0x10,0x11,0xFF,0xFF,0x01,
0x02,0x03,0x03,0x02,0x00,0x02,0x03,0x03,0x02,

// I (73): w=8, h=10
0x27,0x2F,
0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,
0x02,0x02,0x02,0x03,0x03,0x02,0x02,0x02,

// J (74): w=9, h=10
0x28,0x29,
0xC0,0xC0,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,

// K (75): w=9, h=10
0x28,0x29,
0x01,0xFF,0xFF,0x31,0x38,0xED,0xC7,0x03,0x01,
0x02,0x03,0x03,0x02,0x02,0x00,0x03,0x03,0x02,

// L (76): w=9, h=10
0x28,0x29,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0xC0,0xC0,
0x02,0x02,0x03,0x03,0x02,0x02,0x02,0x03,0x03,

// M (77): w=10, h=10
0x29,0x28,
0x01,0xFF,0xFF,0x1C,0x70,0x70,0x1C,0xFF,0xFF,0x01,
0x02,0x03,0x03,0x02,0x00,0x00,0x02,0x03,0x03,0x02,

// N (78): w=10, h=10
0x29,0x28,
0x01,0xFF,0xFF,0x07,0x3C,0xF1,0x81,0xFF,0xFF,0x01,
0x02,0x03,0x03,0x02,0x02,0x00,0x03,0x03,0x03,0x00,

// O (79): w=9, h=10
0x28,0x29,
0x78,0xFE,0x87,0x01,0x01,0x01,0x87,0xFE,0x78,
0x00,0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// P (80): w=9, h=10
0x28,0x29,
0x01,0xFF,0xFF,0x21,0x21,0x21,0x33,0x1E,0x0C,
0x02,0x03,0x03,0x02,0x02,0x02,0x00,0x00,0x00,

// Q (81): w=9, h=12
0x28,0x29,
0x78,0xFE,0x87,0x01,0x01,0x01,0x87,0xFE,0x78,
0x00,0x01,0x0B,0x0E,0x0E,0x0A,0x0B,0x0D,0x04,

// R (82): w=9, h=10
0x28,0x29,
0x01,0xFF,0xFF,0x21,0x21,0x73,0xDE,0x8C,0x00,
0x02,0x03,0x03,0x02,0x02,0x00,0x03,0x03,0x02,

// S (83): w=8, h=10
0x27,0x2F,
0x8C,0x9E,0x1B,0x31,0x31,0x63,0xE6,0xC7,
0x03,0x01,0x03,0x02,0x02,0x03,0x01,0x00,

// T (84): w=8, h=10
0x27,0x2F,
0x0F,0x01,0x01,0xFF,0xFF,0x01,0x01,0x0F,
0x00,0x02,0x02,0x03,0x03,0x02,0x02,0x00,

// U (85): w=10, h=10
0x29,0x28,
0x01,0xFF,0xFF,0x01,0x00,0x00,0x01,0xFF,0xFF,0x01,
0x00,0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00,0x00,

// V (86): w=10, h=10
0x29,0x28,
0x01,0x07,0x3F,0xF9,0xC0,0xC0,0xF9,0x3F,0x07,0x01,
0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,

// W (87): w=10, h=10
0x29,0x28,
0x01,0x1F,0xFF,0xE1,0x3C,0x3C,0xE1,0xFF,0x1F,0x01,
0x00,0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00,0x00,

// X (88): w=10, h=10
0x29,0x28,
0x01,0x03,0x87,0xCD,0x78,0x78,0xCD,0x87,0x03,0x01,
0x02,0x03,0x03,0x02,0x00,0x00,0x02,0x03,0x03,0x02,

// Y (89): w=10, h=10
0x29,0x28,
0x01,0x03,0x0F,0x1D,0xF0,0xF0,0x1D,0x0F,0x03,0x01,
0x00,0x00,0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00,

// Z (90): w=7, h=10
0x26,0x30,
0x07,0xC7,0xE1,0x79,0x1D,0x8F,0x83,
0x03,0x03,0x02,0x02,0x02,0x03,0x03,

// bracketleft (91): w=4, h=13
0x23,0x1D,
0xFF,0xFF,0x01,0x01,
0x1F,0x1F,0x10,0x10,

// backslash (92): w=7, h=13
0x26,0x10,
0x01,0x0F,0x7E,0xF0,0xC0,0x00,0x00,
0x00,0x00,0x00,0x01,0x07,0x3E,0x38,

// bracketright (93): w=4, h=13
0xA3,0x00,0x69,
0x01,0x01,0xFF,0xFF,
0x10,0x10,0x1F,0x1F,

// asciicircum (94): w=8, h=4
0x07,0x0F,
0x08,0x0C,0x06,0x03,0x03,0x06,0x0C,0x08,

// underscore (95): w=10, h=2
0x89,0x0C,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=4, h=3
0x83,0x00,0x69,
0x01,0x03,0x06,0x04,

// a (97): w=8, h=7
0x07,0x8F,
0x30,0x7A,0x4B,0x49,0x49,0x3F,0x7E,0x40,

// b (98): w=9, h=11
0x28,0x09,
0x01,0xFF,0xFF,0x20,0x10,0x10,0x30,0xE0,0xC0,
0x04,0x07,0x07,0x02,0x04,0x04,0x06,0x03,0x01,

// c (99): w=8, h=7
0x07,0x8A,
0x1C,0x3E,0x63,0x41,0x41,0x43,0x66,0x27,

// d (100): w=9, h=11
0x28,0x09,
0xC0,0xE0,0x30,0x10,0x10,0x21,0xFF,0xFF,0x00,
0x01,0x03,0x06,0x04,0x04,0x02,0x07,0x07,0x04,

// e (101): w=8, h=7
0x07,0x8F,
0x1C,0x3E,0x6B,0x49,0x49,0x4B,0x6E,0x2C,

// f (102): w=8, h=11
0x27,0x0F,
0x10,0x10,0xFE,0xFF,0x11,0x11,0x13,0x02,
0x04,0x04,0x07,0x07,0x04,0x04,0x04,0x00,

// g (103): w=9, h=10
0x28,0x89,
0x1C,0x3E,0x63,0x41,0x41,0x22,0xFF,0xFF,0x01,
0x00,0x00,0x02,0x02,0x02,0x02,0x03,0x01,0x00,

// h (104): w=9, h=11
0x28,0x09,
0x01,0xFF,0xFF,0x20,0x10,0x10,0xF0,0xE0,0x00,
0x04,0x07,0x07,0x04,0x00,0x04,0x07,0x07,0x04,

// i (105): w=8, h=10
0x27,0x2F,
0x00,0x08,0x08,0xFB,0xFB,0x00,0x00,0x00,
0x02,0x02,0x02,0x03,0x03,0x02,0x02,0x02,

// j (106): w=6, h=13
0x25,0x31,
0x08,0x08,0x08,0x0B,0xFB,0xF8,
0x10,0x10,0x10,0x10,0x1F,0x0F,

// k (107): w=9, h=11
0x28,0x09,
0x01,0xFF,0xFF,0x80,0xD0,0x70,0x30,0x10,0x10,
0x04,0x07,0x07,0x00,0x05,0x07,0x06,0x04,0x04,

// l (108): w=8, h=11
0x27,0x0F,
0x00,0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,
0x04,0x04,0x04,0x07,0x07,0x04,0x04,0x04,

// m (109): w=10, h=7
0x09,0x88,
0x41,0x7F,0x7F,0x02,0x7F,0x7F,0x02,0x7F,0x7F,0x40,

// n (110): w=9, h=7
0x08,0x89,
0x41,0x7F,0x7F,0x42,0x01,0x41,0x7F,0x7E,0x40,

// o (111): w=8, h=7
0x07,0x8F,
0x1C,0x3E,0x63,0x41,0x41,0x63,0x3E,0x1C,

// p (112): w=9, h=10
0x28,0x89,
0x01,0xFF,0xFF,0x22,0x41,0x41,0x63,0x3E,0x1C,
0x02,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,

// q (113): w=9, h=10
0x28,0x89,
0x1C,0x3E,0x63,0x41,0x41,0x22,0xFF,0xFF,0x01,
0x00,0x00,0x00,0x00,0x02,0x02,0x03,0x03,0x02,

// r (114): w=9, h=7
0x08,0x89,
0x41,0x41,0x7F,0x7F,0x42,0x41,0x41,0x03,0x02,

// s (115): w=7, h=7
0x06,0x90,
0x66,0x6F,0x4D,0x49,0x59,0x7B,0x33,

// t (116): w=9, h=9
0x28,0x49,
0x04,0x04,0xFF,0xFF,0x04,0x04,0x04,0x84,0x80,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// u (117): w=9, h=7
0x08,0x89,
0x01,0x3F,0x7F,0x40,0x40,0x21,0x7F,0x7F,0x40,

// v (118): w=10, h=7
0x09,0x88,
0x01,0x03,0x0F,0x3D,0x70,0x70,0x3D,0x0F,0x03,0x01,

// w (119): w=10, h=7
0x09,0x88,
0x01,0x07,0x7F,0x71,0x1C,0x1C,0x71,0x7F,0x07,0x01,

// x (120): w=8, h=7
0x07,0x8F,
0x41,0x63,0x77,0x1C,0x1C,0x77,0x63,0x41,

// y (121): w=10, h=10
0x29,0x88,
0x01,0x03,0x0F,0xBD,0xF0,0x70,0x3D,0x0F,0x03,0x01,
0x00,0x02,0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,

// z (122): w=7, h=7
0x06,0x90,
0x63,0x73,0x59,0x4D,0x47,0x63,0x61,

// braceleft (123): w=4, h=13
0x23,0x1D,
0x40,0xFE,0x9F,0x01,
0x00,0x0F,0x1F,0x10,

// bar (124): w=2, h=13
0xA1,0x00,0x89,
0xFF,0xFF,
0x1F,0x1F,

// braceright (125): w=4, h=13
0x23,0x1D,
0x01,0x9F,0xFE,0x40,
0x10,0x1F,0x0F,0x00,

// asciitilde (126): w=8, h=3
0x07,0xAF,
0x02,0x03,0x01,0x03,0x06,0x04,0x06,0x02

};
// 1461 bytes
// 1651 bytes with FAST_FONT_INDEX