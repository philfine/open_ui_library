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

// ncenBI10 = "New Century Schoolbook Bold Italic"

const char font_ncenBI10[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCE,0x00,
0xD6,0x00,
0xE6,0x00,
0xF6,0x00,
0x10,0x01,
0x2A,0x01,
0x2D,0x01,
0x39,0x01,
0x45,0x01,
0x4C,0x01,
0x55,0x01,
0x5B,0x01,
0x61,0x01,
0x66,0x01,
0x70,0x01,
0x80,0x01,
0x8E,0x01,
0x9E,0x01,
0xAE,0x01,
0xBE,0x01,
0xCE,0x01,
0xDE,0x01,
0xEE,0x01,
0xFE,0x01,
0x0E,0x02,
0x13,0x02,
0x1D,0x02,
0x2F,0x02,
0x39,0x02,
0x4B,0x02,
0x57,0x02,
0x71,0x02,
0x89,0x02,
0x9D,0x02,
0xB3,0x02,
0xCB,0x02,
0xDF,0x02,
0xF3,0x02,
0x09,0x03,
0x21,0x03,
0x2D,0x03,
0x3F,0x03,
0x57,0x03,
0x6B,0x03,
0x89,0x03,
0xA3,0x03,
0xBB,0x03,
0xD1,0x03,
0xE9,0x03,
0x01,0x04,
0x15,0x04,
0x2B,0x04,
0x41,0x04,
0x59,0x04,
0x7B,0x04,
0x95,0x04,
0xAB,0x04,
0xBF,0x04,
0xCD,0x04,
0xDB,0x04,
0xE9,0x04,
0xF2,0x04,
0xFE,0x04,
0x04,0x05,
0x0F,0x05,
0x1F,0x05,
0x28,0x05,
0x3C,0x05,
0x45,0x05,
0x55,0x05,
0x69,0x05,
0x7D,0x05,
0x87,0x05,
0x98,0x05,
0xAA,0x05,
0xB4,0x05,
0xC4,0x05,
0xCF,0x05,
0xD8,0x05,
0xED,0x05,
0xFF,0x05,
0x08,0x06,
0x11,0x06,
0x1D,0x06,
0x28,0x06,
0x31,0x06,
0x3F,0x06,
0x49,0x06,
0x5D,0x06,
0x67,0x06,
0x73,0x06,
0x78,0x06,
0x84,0x06,

// space (32): w=1, h=1
0x80,0x0A,0x48,
0x00,

// exclam (33): w=4, h=11
0x23,0x09,
0x00,0xF8,0x3F,0x07,
0x06,0x06,0x00,0x00,

// quotedbl (34): w=6, h=4
0x05,0x08,
0x0C,0x07,0x03,0x0C,0x07,0x03,

// numbersign (35): w=7, h=10
0x26,0x29,
0x40,0xC8,0x78,0xCF,0x78,0x4F,0x08,
0x00,0x03,0x00,0x03,0x00,0x00,0x00,

// dollar (36): w=7, h=12
0x26,0x09,
0x00,0x1C,0xBA,0x71,0xEF,0xC1,0x03,
0x06,0x1C,0x07,0x04,0x02,0x01,0x00,

// percent (37): w=12, h=12
0x2B,0x09,
0x1C,0x3E,0x23,0x11,0x0E,0xC2,0x32,0x8E,0xC3,0x60,
0x20,0xC0,
0x00,0x00,0x00,0x0C,0x03,0x00,0x00,0x03,0x07,0x04,
0x02,0x01,

// ampersand (38): w=12, h=11
0x2B,0x09,
0x80,0xC0,0x2C,0x7E,0xF1,0xD1,0x8F,0x06,0xA0,0x60,
0x20,0x20,
0x03,0x07,0x06,0x04,0x04,0x03,0x03,0x07,0x06,0x04,
0x04,0x02,

// quotesingle (39): w=1, h=4
0x00,0x10,
0x0F,

// parenleft (40): w=5, h=13
0x24,0x08,
0xE0,0xF8,0x1C,0x06,0x01,
0x07,0x0F,0x10,0x00,0x00,

// parenright (41): w=5, h=13
0x24,0x04,
0x00,0x00,0x01,0xFE,0xFC,
0x10,0x0C,0x07,0x03,0x00,

// asterisk (42): w=5, h=5
0x04,0x0F,
0x0A,0x04,0x1F,0x04,0x0A,

// plus (43): w=7, h=7
0x06,0x69,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// comma (44): w=3, h=5
0x82,0x09,0x37,
0x10,0x0B,0x07,

// hyphen (45): w=4, h=1
0x03,0xC9,
0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x09,0x47,
0x03,0x03,

// slash (47): w=4, h=11
0x23,0x09,
0x00,0xC0,0x38,0x07,
0x06,0x01,0x00,0x00,

// zero (48): w=7, h=11
0x26,0x09,
0xE0,0xFC,0x0E,0x03,0xC1,0xFF,0x1E,
0x03,0x07,0x04,0x06,0x03,0x01,0x00,

// one (49): w=6, h=11
0x25,0x0A,
0x00,0x00,0xC2,0xFE,0x3F,0x03,
0x04,0x04,0x07,0x07,0x04,0x04,

// two (50): w=7, h=11
0x26,0x09,
0x00,0x86,0xC7,0x61,0x31,0x1F,0x0E,
0x07,0x07,0x06,0x06,0x06,0x06,0x01,

// three (51): w=7, h=11
0x26,0x09,
0x00,0x04,0x06,0x11,0xF1,0xEF,0x06,
0x03,0x07,0x04,0x06,0x03,0x01,0x00,

// four (52): w=7, h=11
0x26,0x09,
0xC0,0xA0,0x98,0x84,0xF2,0xFF,0x8F,
0x00,0x04,0x04,0x07,0x07,0x04,0x04,

// five (53): w=7, h=11
0x26,0x09,
0x00,0x18,0x17,0x13,0xF3,0xE3,0x01,
0x03,0x07,0x04,0x06,0x03,0x01,0x00,

// six (54): w=7, h=11
0x26,0x09,
0xE0,0xFC,0x1E,0x13,0xF1,0xE7,0x06,
0x03,0x07,0x04,0x06,0x03,0x01,0x00,

// seven (55): w=7, h=11
0x26,0x09,
0x04,0x03,0xC3,0xF3,0x3B,0x0F,0x03,
0x00,0x07,0x07,0x00,0x00,0x00,0x00,

// eight (56): w=7, h=11
0x26,0x09,
0x80,0xC0,0x3E,0x3B,0x71,0xF1,0x0E,
0x03,0x07,0x04,0x04,0x06,0x03,0x00,

// nine (57): w=7, h=11
0x26,0x09,
0x00,0x3C,0x7E,0x43,0xC1,0xFF,0x3E,
0x03,0x07,0x04,0x06,0x03,0x01,0x00,

// colon (58): w=3, h=7
0x02,0x89,
0x60,0x63,0x03,

// semicolon (59): w=4, h=10
0x23,0x84,
0x00,0x60,0xE3,0x03,
0x02,0x01,0x00,0x00,

// less (60): w=8, h=9
0x27,0x49,
0x10,0x38,0x28,0x6C,0x44,0xC6,0x82,0x83,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,

// equal (61): w=8, h=4
0x07,0x89,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=8, h=9
0x27,0x49,
0x83,0x82,0xC6,0x44,0x6C,0x28,0x38,0x10,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=5, h=11
0x24,0x0F,
0x66,0xB1,0x99,0x4F,0x06,
0x06,0x06,0x00,0x00,0x00,

// at (64): w=12, h=11
0x2B,0x09,
0xF0,0x0C,0xE2,0xF2,0x19,0x89,0xD1,0xF9,0x39,0x02,
0xC6,0x38,
0x01,0x02,0x04,0x05,0x05,0x04,0x05,0x05,0x05,0x05,
0x02,0x00,

// A (65): w=11, h=11
0x2A,0x03,
0x00,0x00,0x80,0xE0,0xB8,0x8E,0x87,0xFF,0xF8,0x80,
0x00,
0x04,0x06,0x07,0x04,0x00,0x00,0x00,0x04,0x07,0x07,
0x04,

// B (66): w=9, h=11
0x28,0x09,
0x00,0xE1,0xFF,0x3F,0x21,0x21,0x31,0xDF,0xCE,
0x04,0x07,0x07,0x04,0x04,0x04,0x06,0x03,0x01,

// C (67): w=10, h=11
0x29,0x09,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x01,0x02,0x0F,
0x01,0x03,0x06,0x04,0x04,0x04,0x04,0x02,0x03,0x00,

// D (68): w=11, h=11
0x2A,0x09,
0x00,0xE1,0xFF,0x1F,0x01,0x01,0x01,0x01,0x83,0xFE,
0x7C,
0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x02,0x03,0x01,
0x00,

// E (69): w=9, h=11
0x28,0x09,
0x00,0xE1,0xFF,0x3F,0x21,0x21,0xF9,0x01,0x07,
0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x06,0x01,

// F (70): w=9, h=11
0x28,0x09,
0x00,0xE1,0xFF,0x3F,0x21,0x21,0xF9,0x01,0x07,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x00,0x00,

// G (71): w=10, h=11
0x29,0x09,
0xF0,0xFC,0x0E,0x02,0x01,0x41,0x41,0xC1,0xC2,0x4F,
0x01,0x03,0x06,0x04,0x04,0x04,0x02,0x07,0x01,0x00,

// H (72): w=11, h=11
0x2A,0x09,
0x00,0xE1,0xFF,0x3F,0x21,0x20,0x20,0xE1,0xFF,0x1F,
0x01,
0x04,0x07,0x07,0x04,0x00,0x00,0x04,0x07,0x07,0x04,
0x00,

// I (73): w=5, h=11
0x24,0x09,
0x00,0xE1,0xFF,0x1F,0x01,
0x04,0x07,0x07,0x04,0x00,

// J (74): w=8, h=11
0x27,0x03,
0x00,0x00,0x00,0x00,0xE1,0xFF,0x1F,0x01,
0x03,0x07,0x04,0x04,0x03,0x01,0x00,0x00,

// K (75): w=11, h=11
0x2A,0x09,
0x00,0xC1,0xFF,0x3F,0x21,0xF0,0xC8,0x85,0x03,0x01,
0x01,
0x04,0x07,0x07,0x04,0x00,0x00,0x05,0x07,0x07,0x06,
0x04,

// L (76): w=9, h=11
0x28,0x09,
0x00,0xE1,0xFF,0x1F,0x01,0x00,0x00,0x00,0x00,
0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x06,0x01,

// M (77): w=14, h=11
0x2D,0x09,
0x00,0x81,0xFF,0x07,0x7F,0xF8,0x80,0xC0,0x70,0x1C,
0xC3,0xFF,0x3F,0x01,
0x04,0x07,0x04,0x00,0x00,0x07,0x07,0x00,0x00,0x04,
0x07,0x07,0x04,0x00,

// N (78): w=12, h=11
0x2B,0x09,
0x00,0xC1,0x7F,0x07,0x1F,0x7C,0xF0,0xC0,0x00,0xF1,
0x1F,0x01,
0x04,0x07,0x04,0x00,0x00,0x00,0x01,0x07,0x07,0x07,
0x00,0x00,

// O (79): w=11, h=11
0x2A,0x09,
0xF0,0xFC,0x0E,0x02,0x01,0x01,0x01,0x01,0x83,0xFE,
0x7C,
0x01,0x03,0x06,0x04,0x04,0x04,0x04,0x02,0x03,0x01,
0x00,

// P (80): w=10, h=11
0x29,0x09,
0x00,0xC1,0xFF,0x3F,0x21,0x21,0x21,0x31,0x1F,0x0E,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=11, h=13
0x2A,0x09,
0xF0,0xFC,0x0E,0x82,0x81,0x81,0x01,0x01,0x83,0xFE,
0x7C,
0x01,0x03,0x07,0x04,0x04,0x05,0x0F,0x1E,0x1B,0x09,
0x04,

// R (82): w=11, h=11
0x2A,0x09,
0x00,0xC1,0xFF,0x3F,0x21,0x21,0xE1,0xD1,0x1F,0x0E,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x07,0x07,0x04,
0x02,

// S (83): w=9, h=11
0x28,0x09,
0x80,0x1E,0x3E,0x33,0x71,0x61,0xE1,0xC2,0x0F,
0x07,0x02,0x04,0x04,0x04,0x06,0x03,0x03,0x00,

// T (84): w=10, h=11
0x29,0x09,
0x07,0x03,0x01,0xE1,0xFF,0x1F,0x01,0x01,0x03,0x07,
0x00,0x00,0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x00,

// U (85): w=10, h=11
0x29,0x0F,
0xE1,0xFF,0x1F,0x01,0x00,0x00,0x00,0xE1,0x3F,0x01,
0x03,0x07,0x06,0x04,0x04,0x04,0x06,0x03,0x00,0x00,

// V (86): w=11, h=11
0x2A,0x08,
0x01,0x0F,0xFF,0xF1,0x01,0x80,0x60,0x39,0x0F,0x03,
0x01,
0x00,0x00,0x00,0x07,0x07,0x01,0x00,0x00,0x00,0x00,
0x00,

// W (87): w=16, h=11
0x2F,0x07,
0x01,0x1F,0xFF,0xE1,0x81,0x60,0x19,0x1F,0xFF,0xE1,
0x80,0x60,0x39,0x0F,0x03,0x01,
0x00,0x00,0x07,0x07,0x01,0x00,0x00,0x00,0x07,0x07,
0x01,0x00,0x00,0x00,0x00,0x00,

// X (88): w=12, h=11
0x2B,0x02,
0x00,0x00,0x01,0x83,0xCF,0x7D,0xF0,0xD8,0x0D,0x07,
0x03,0x01,
0x04,0x06,0x07,0x05,0x00,0x00,0x04,0x07,0x07,0x04,
0x00,0x00,

// Y (89): w=10, h=11
0x29,0x07,
0x01,0x03,0x0F,0xFD,0x70,0x10,0x0C,0x07,0x03,0x01,
0x00,0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=9, h=11
0x28,0x09,
0x00,0x87,0xC1,0xE1,0x71,0x39,0x1D,0x0F,0x07,
0x07,0x07,0x05,0x04,0x04,0x04,0x04,0x07,0x00,

// bracketleft (91): w=6, h=13
0x25,0x09,
0x00,0xF0,0xFF,0x0F,0x01,0x01,
0x1F,0x1F,0x10,0x10,0x00,0x00,

// backslash (92): w=6, h=11
0x25,0x10,
0x03,0x0C,0x30,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x04,

// bracketright (93): w=6, h=13
0x25,0x04,
0x00,0x00,0x01,0xF1,0xFF,0x0F,
0x10,0x10,0x1F,0x1F,0x00,0x00,

// asciicircum (94): w=7, h=7
0x06,0x09,
0x40,0x70,0x1C,0x07,0x1C,0x70,0x40,

// underscore (95): w=9, h=1
0x88,0x0C,0x36,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=4, h=3
0x03,0x09,
0x01,0x03,0x02,0x04,

// a (97): w=9, h=7
0x08,0x89,
0x3C,0x7E,0x43,0x41,0x21,0x7A,0x7F,0x47,0x20,

// b (98): w=7, h=11
0x26,0x09,
0xC0,0xF9,0x3F,0x17,0x10,0xF0,0xE0,
0x03,0x07,0x04,0x04,0x06,0x03,0x01,

// c (99): w=7, h=7
0x06,0x89,
0x3C,0x7E,0x43,0x41,0x41,0x27,0x06,

// d (100): w=9, h=11
0x28,0x09,
0xC0,0xE0,0x30,0x10,0x10,0xA0,0xF9,0x7F,0x07,
0x03,0x07,0x04,0x04,0x02,0x07,0x07,0x04,0x02,

// e (101): w=7, h=7
0x06,0x89,
0x3C,0x7E,0x4B,0x49,0x49,0x2F,0x06,

// f (102): w=7, h=14
0x26,0x06,
0x10,0xF0,0xFC,0x1E,0x11,0x03,0x03,
0x3E,0x1F,0x01,0x00,0x00,0x00,0x00,

// g (103): w=9, h=12
0x28,0x42,
0x00,0xB0,0x78,0x44,0x44,0x44,0x3E,0x1B,0x03,
0x0C,0x0B,0x0B,0x0B,0x0B,0x0B,0x07,0x06,0x00,

// h (104): w=9, h=11
0x28,0x09,
0x80,0xF9,0x7F,0x47,0x20,0x30,0xF0,0xE0,0x00,
0x07,0x07,0x00,0x00,0x00,0x07,0x07,0x04,0x02,

// i (105): w=4, h=10
0x23,0x29,
0xC8,0xF8,0x3B,0x03,
0x03,0x03,0x02,0x01,

// j (106): w=7, h=13
0xA6,0x01,0x15,
0x00,0x00,0x00,0x88,0xF8,0x7B,0x03,
0x18,0x18,0x10,0x0F,0x07,0x00,0x00,

// k (107): w=8, h=11
0x27,0x09,
0x80,0xF9,0xFF,0xA7,0x90,0x50,0x70,0x30,
0x07,0x07,0x00,0x00,0x03,0x07,0x06,0x02,

// l (108): w=4, h=11
0x23,0x09,
0x80,0xF9,0x7F,0x07,
0x07,0x07,0x04,0x02,

// m (109): w=14, h=7
0x0D,0x89,
0x71,0x7F,0x0F,0x04,0x02,0x73,0x7F,0x0E,0x04,0x02,
0x73,0x7F,0x4E,0x20,

// n (110): w=9, h=7
0x08,0x89,
0x71,0x7F,0x0F,0x04,0x02,0x73,0x7F,0x4E,0x20,

// o (111): w=7, h=7
0x06,0x89,
0x3C,0x7E,0x43,0x41,0x61,0x3F,0x1E,

// p (112): w=9, h=10
0xA8,0x04,0x26,
0x00,0x80,0xF9,0x7F,0x47,0x42,0x61,0x3F,0x1E,
0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// q (113): w=8, h=10
0x27,0x89,
0x3C,0x7E,0x43,0x41,0xA1,0xF3,0x7E,0x0F,
0x00,0x00,0x00,0x02,0x03,0x03,0x02,0x00,

// r (114): w=7, h=7
0x06,0x88,
0x71,0x7F,0x0F,0x02,0x01,0x03,0x03,

// s (115): w=7, h=7
0x06,0x89,
0x60,0x66,0x4E,0x49,0x39,0x33,0x03,

// t (116): w=5, h=9
0x24,0x48,
0xE4,0xFC,0x1F,0x87,0x04,
0x01,0x01,0x01,0x00,0x00,

// u (117): w=9, h=7
0x08,0x89,
0x39,0x7F,0x67,0x20,0x10,0x78,0x7F,0x47,0x20,

// v (118): w=7, h=7
0x06,0x89,
0x39,0x7F,0x47,0x40,0x60,0x33,0x0F,

// w (119): w=12, h=7
0x0B,0x89,
0x39,0x7F,0x47,0x40,0x20,0x38,0x7F,0x47,0x40,0x60,
0x33,0x0F,

// x (120): w=8, h=7
0x07,0x89,
0x60,0x62,0x33,0x1F,0x7C,0x66,0x23,0x13,

// y (121): w=9, h=10
0x28,0x83,
0x04,0x03,0x07,0x1E,0xF8,0x60,0x18,0x07,0x03,
0x03,0x03,0x02,0x01,0x00,0x00,0x00,0x00,0x00,

// z (122): w=8, h=7
0x07,0x89,
0x40,0x26,0x33,0x73,0x6B,0x66,0x23,0x11,

// braceleft (123): w=5, h=13
0x24,0x09,
0x40,0xC0,0xBC,0x1E,0x01,
0x00,0x0F,0x1F,0x10,0x00,

// bar (124): w=1, h=11
0xA0,0x00,0x89,
0xFF,
0x07,

// braceright (125): w=5, h=13
0x24,0x09,
0x00,0x81,0xDF,0x3E,0x20,
0x10,0x0F,0x07,0x00,0x00,

// asciitilde (126): w=10, h=3
0x09,0xA9,
0x04,0x06,0x03,0x03,0x03,0x06,0x06,0x06,0x03,0x01

};
// 1490 bytes
// 1680 bytes with FAST_FONT_INDEX
