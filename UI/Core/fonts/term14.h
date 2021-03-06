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

// term14 = "Terminal"

const char font_term14[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCF,0x00,
0xD7,0x00,
0xED,0x00,
0xFD,0x00,
0x11,0x01,
0x21,0x01,
0x28,0x01,
0x33,0x01,
0x3E,0x01,
0x48,0x01,
0x5A,0x01,
0x61,0x01,
0x6C,0x01,
0x73,0x01,
0x85,0x01,
0x95,0x01,
0xA3,0x01,
0xB3,0x01,
0xC3,0x01,
0xD3,0x01,
0xE3,0x01,
0xF3,0x01,
0x03,0x02,
0x13,0x02,
0x23,0x02,
0x2E,0x02,
0x3A,0x02,
0x4E,0x02,
0x58,0x02,
0x6C,0x02,
0x7E,0x02,
0x94,0x02,
0xAC,0x02,
0xC0,0x02,
0xD4,0x02,
0xE8,0x02,
0xFC,0x02,
0x10,0x03,
0x26,0x03,
0x3A,0x03,
0x4C,0x03,
0x60,0x03,
0x74,0x03,
0x88,0x03,
0xA0,0x03,
0xB6,0x03,
0xCA,0x03,
0xDE,0x03,
0xF4,0x03,
0x0A,0x04,
0x1C,0x04,
0x32,0x04,
0x48,0x04,
0x60,0x04,
0x78,0x04,
0x8C,0x04,
0xA2,0x04,
0xB4,0x04,
0xBF,0x04,
0xD1,0x04,
0xDC,0x04,
0xE5,0x04,
0xF2,0x04,
0xFA,0x04,
0x0E,0x05,
0x22,0x05,
0x34,0x05,
0x48,0x05,
0x5C,0x05,
0x70,0x05,
0x84,0x05,
0x98,0x05,
0xAA,0x05,
0xB8,0x05,
0xCC,0x05,
0xDE,0x05,
0xF4,0x05,
0x08,0x06,
0x1C,0x06,
0x30,0x06,
0x44,0x06,
0x58,0x06,
0x6A,0x06,
0x7E,0x06,
0x92,0x06,
0xA8,0x06,
0xC0,0x06,
0xD4,0x06,
0xEA,0x06,
0xFA,0x06,
0x08,0x07,
0x0F,0x07,
0x1D,0x07,

// space (32): w=1, h=1
0x80,0x10,0xE5,
0x00,

// exclam (33): w=4, h=11
0xA3,0x01,0x88,
0x00,0x7F,0x7F,0x00,
0x02,0x07,0x07,0x02,

// quotedbl (34): w=6, h=4
0x05,0x1C,
0x1F,0x1F,0x00,0x00,0x1F,0x1F,

// numbersign (35): w=10, h=14
0x29,0x2E,
0x20,0x20,0xFF,0xFF,0x20,0x20,0xFF,0xFF,0x20,0x20,
0x01,0x01,0x3F,0x3F,0x01,0x01,0x3F,0x3F,0x01,0x01,

// dollar (36): w=7, h=15
0x26,0x16,
0x3C,0x7E,0x66,0x43,0xC2,0xCE,0x8E,
0x0E,0x0E,0x08,0xF8,0x0C,0x0F,0x07,

// percent (37): w=9, h=11
0x28,0x2F,
0x0E,0x5B,0x51,0x3B,0xAE,0xE0,0x50,0xD0,0x80,
0x00,0x00,0x00,0x00,0x03,0x06,0x04,0x06,0x03,

// ampersand (38): w=7, h=11
0x26,0x36,
0xC0,0xEE,0x3B,0xE1,0x82,0xE3,0x20,
0x03,0x07,0x04,0x04,0x03,0x07,0x04,

// quoteright (39): w=4, h=4
0x83,0x00,0x88,
0x04,0x1F,0x03,0x00,

// parenleft (40): w=4, h=15
0xA3,0x00,0x88,
0xF0,0xFC,0x06,0x01,
0x07,0x1F,0x30,0x40,

// parenright (41): w=4, h=15
0xA3,0x00,0x88,
0x01,0x06,0xFC,0xF0,
0x40,0x30,0x1F,0x07,

// asterisk (42): w=8, h=8
0x07,0x75,
0x04,0xCC,0xF8,0x3F,0x3F,0xF8,0xCC,0x04,

// plus (43): w=8, h=10
0x27,0x55,
0x30,0x30,0x30,0xFF,0xFF,0x30,0x30,0x30,
0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// comma (44): w=4, h=6
0x83,0x09,0x88,
0x10,0x3F,0x0F,0x03,

// minus (45): w=9, h=2
0x08,0xCF,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// period (46): w=4, h=3
0x83,0x09,0x88,
0x02,0x07,0x07,0x02,

// slash (47): w=8, h=13
0x27,0x15,
0x00,0x00,0x00,0xC0,0x70,0x1C,0x07,0x01,
0x10,0x1C,0x07,0x01,0x00,0x00,0x00,0x00,

// zero (48): w=7, h=11
0x26,0x36,
0xF8,0xFE,0x03,0x01,0x03,0xFE,0xF8,
0x00,0x03,0x06,0x04,0x06,0x03,0x00,

// one (49): w=6, h=11
0x25,0x3C,
0x04,0x02,0xFF,0xFF,0x00,0x00,
0x04,0x04,0x07,0x07,0x04,0x04,

// two (50): w=7, h=11
0x26,0x36,
0x06,0x07,0x81,0xC1,0x63,0x3F,0x1E,
0x06,0x07,0x05,0x04,0x04,0x06,0x06,

// three (51): w=7, h=11
0x26,0x36,
0x02,0x03,0x21,0x21,0x73,0xDF,0x8E,
0x02,0x06,0x04,0x04,0x04,0x07,0x03,

// four (52): w=7, h=11
0x26,0x36,
0xC0,0xF0,0x98,0x86,0xFF,0xFF,0x80,
0x00,0x00,0x00,0x04,0x07,0x07,0x04,

// five (53): w=7, h=11
0x26,0x36,
0x3F,0x3F,0x11,0x11,0x31,0xE1,0xC0,
0x02,0x06,0x04,0x04,0x06,0x03,0x01,

// six (54): w=7, h=11
0x26,0x36,
0xF0,0xFC,0x26,0x11,0x31,0xE1,0xC0,
0x01,0x03,0x06,0x04,0x06,0x03,0x01,

// seven (55): w=7, h=11
0x26,0x36,
0x03,0x03,0x01,0xC1,0xF9,0x1F,0x07,
0x00,0x00,0x06,0x07,0x00,0x00,0x00,

// eight (56): w=7, h=11
0x26,0x36,
0x8C,0xDE,0x73,0x21,0x73,0xDE,0x8C,
0x01,0x03,0x06,0x04,0x06,0x03,0x01,

// nine (57): w=7, h=11
0x26,0x36,
0x1C,0x3E,0x63,0x41,0x23,0xFE,0x7C,
0x00,0x04,0x04,0x06,0x03,0x01,0x00,

// colon (58): w=4, h=9
0xA3,0x03,0x88,
0x82,0xC7,0xC7,0x82,
0x00,0x01,0x01,0x00,

// semicolon (59): w=5, h=12
0x24,0x7D,
0x00,0xC2,0xC7,0xC7,0x02,
0x04,0x0F,0x03,0x00,0x00,

// less (60): w=9, h=9
0x28,0x4F,
0x10,0x38,0x38,0x6C,0x6C,0xC6,0xC6,0x83,0x83,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=8, h=6
0x07,0x95,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,

// greater (62): w=9, h=9
0x28,0x4F,
0x83,0x83,0xC6,0xC6,0x6C,0x6C,0x38,0x38,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=8, h=11
0x27,0x35,
0x02,0x03,0x61,0x61,0x31,0x11,0x1F,0x0E,
0x00,0x02,0x07,0x07,0x02,0x00,0x00,0x00,

// at (64): w=10, h=14
0x29,0x0E,
0xF8,0xFE,0x02,0xC1,0xE1,0x11,0x12,0xFE,0xF8,0x00,
0x07,0x1F,0x18,0x31,0x23,0x22,0x22,0x23,0x13,0x02,

// A (65): w=11, h=11
0x2A,0x28,
0x00,0x00,0xE0,0xFC,0x9F,0x83,0x9F,0xFC,0xE0,0x00,
0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x04,0x07,0x07,
0x04,

// B (66): w=9, h=11
0x28,0x2F,
0x01,0xFF,0xFF,0x21,0x21,0x21,0x3F,0xEE,0xC0,
0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x07,0x03,

// C (67): w=9, h=11
0x28,0x2F,
0xFC,0xFE,0x03,0x01,0x01,0x01,0x03,0x0E,0x0F,
0x01,0x03,0x06,0x04,0x04,0x04,0x04,0x06,0x03,

// D (68): w=9, h=11
0x28,0x2F,
0x01,0xFF,0xFF,0x01,0x01,0x01,0x03,0xFE,0xFC,
0x04,0x07,0x07,0x04,0x04,0x04,0x06,0x03,0x01,

// E (69): w=9, h=11
0x28,0x2F,
0x01,0x01,0xFF,0xFF,0x21,0x21,0x79,0x01,0x87,
0x04,0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x07,

// F (70): w=9, h=11
0x28,0x2F,
0x01,0x01,0xFF,0xFF,0x21,0x21,0xF9,0x01,0x07,
0x04,0x04,0x07,0x07,0x04,0x04,0x00,0x00,0x00,

// G (71): w=10, h=11
0x29,0x2E,
0xFC,0xFE,0x03,0x01,0x01,0x41,0x43,0xCE,0xCF,0x40,
0x01,0x03,0x06,0x04,0x04,0x04,0x04,0x07,0x03,0x00,

// H (72): w=9, h=11
0x28,0x2F,
0x01,0xFF,0xFF,0x21,0x20,0x21,0xFF,0xFF,0x01,
0x04,0x07,0x07,0x04,0x00,0x04,0x07,0x07,0x04,

// I (73): w=8, h=11
0x27,0x35,
0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,
0x04,0x04,0x04,0x07,0x07,0x04,0x04,0x04,

// J (74): w=9, h=11
0x28,0x2F,
0xC0,0x00,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x03,0x06,0x04,0x04,0x04,0x07,0x03,0x00,0x00,

// K (75): w=9, h=11
0x28,0x2F,
0x01,0xFF,0xFF,0x31,0x38,0xED,0xC7,0x03,0x01,
0x04,0x07,0x07,0x04,0x00,0x00,0x07,0x07,0x04,

// L (76): w=9, h=11
0x28,0x2F,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x80,
0x04,0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x07,

// M (77): w=11, h=11
0x2A,0x28,
0x01,0xFF,0xFF,0x03,0x3C,0xC0,0x3C,0x03,0xFF,0xFF,
0x01,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x04,0x07,0x07,
0x04,

// N (78): w=10, h=11
0x29,0x2E,
0x01,0xFF,0xFF,0x06,0x18,0x60,0x81,0xFF,0xFF,0x01,
0x04,0x07,0x07,0x04,0x04,0x00,0x01,0x07,0x07,0x00,

// O (79): w=9, h=11
0x28,0x2F,
0xFC,0xFE,0x03,0x01,0x01,0x01,0x03,0xFE,0xFC,
0x01,0x03,0x06,0x04,0x04,0x04,0x06,0x03,0x01,

// P (80): w=9, h=11
0x28,0x2F,
0x01,0x01,0xFF,0xFF,0x41,0x41,0x41,0x7F,0x3E,
0x04,0x04,0x07,0x07,0x04,0x04,0x00,0x00,0x00,

// Q (81): w=10, h=14
0x29,0x2E,
0xFC,0xFE,0x03,0x01,0x01,0x01,0x03,0xFE,0xFC,0x00,
0x01,0x03,0x36,0x2C,0x14,0x14,0x36,0x23,0x31,0x10,

// R (82): w=10, h=11
0x29,0x2E,
0x01,0xFF,0xFF,0x21,0x21,0x21,0xF3,0xDF,0x0E,0x00,
0x04,0x07,0x07,0x04,0x00,0x00,0x00,0x07,0x07,0x04,

// S (83): w=8, h=11
0x27,0x35,
0x1E,0x3E,0x33,0x21,0x21,0x62,0xE7,0xC7,
0x07,0x07,0x02,0x04,0x04,0x06,0x03,0x03,

// T (84): w=10, h=11
0x29,0x2E,
0x0F,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x0F,
0x00,0x00,0x04,0x04,0x07,0x07,0x04,0x04,0x00,0x00,

// U (85): w=10, h=11
0x29,0x2E,
0x01,0xFF,0xFF,0x01,0x00,0x00,0x01,0xFF,0xFF,0x01,
0x00,0x01,0x03,0x06,0x04,0x04,0x06,0x03,0x01,0x00,

// V (86): w=11, h=11
0x2A,0x28,
0x01,0x07,0x3F,0xF9,0xC0,0x00,0xC0,0xF9,0x3F,0x07,
0x01,
0x00,0x00,0x00,0x00,0x03,0x06,0x03,0x00,0x00,0x00,
0x00,

// W (87): w=11, h=11
0x2A,0x28,
0x01,0x7F,0xFF,0x01,0xE0,0x38,0xE0,0x01,0xFF,0x7F,
0x01,
0x00,0x00,0x07,0x07,0x01,0x00,0x01,0x07,0x07,0x00,
0x00,

// X (88): w=9, h=11
0x28,0x2F,
0x01,0x07,0x8F,0xF9,0x70,0xF9,0x8F,0x07,0x01,
0x04,0x07,0x07,0x04,0x00,0x04,0x07,0x07,0x04,

// Y (89): w=10, h=11
0x29,0x2E,
0x01,0x03,0x0F,0x39,0xE0,0xE0,0x39,0x0F,0x03,0x01,
0x00,0x00,0x00,0x04,0x07,0x07,0x04,0x00,0x00,0x00,

// Z (90): w=8, h=11
0x27,0x35,
0x07,0x01,0x81,0xC1,0x71,0x3D,0x0F,0x03,
0x04,0x06,0x07,0x05,0x04,0x04,0x04,0x07,

// bracketleft (91): w=4, h=14
0xA3,0x00,0x88,
0xFF,0xFF,0x01,0x01,
0x3F,0x3F,0x20,0x20,

// backslash (92): w=8, h=13
0x27,0x15,
0x01,0x07,0x1C,0x70,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x1C,0x10,

// bracketright (93): w=4, h=14
0xA3,0x00,0x79,
0x01,0x01,0xFF,0xFF,
0x20,0x20,0x3F,0x3F,

// asciicircum (94): w=7, h=4
0x06,0x76,
0x08,0x0C,0x06,0x03,0x06,0x0C,0x08,

// underscore (95): w=10, h=2
0x89,0x0A,0x55,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// quoteleft (96): w=6, h=4
0x05,0x1C,
0x01,0x01,0x03,0x06,0x04,0x18,

// a (97): w=9, h=9
0x28,0x6F,
0xE0,0xF2,0x9B,0x09,0x09,0x89,0xFF,0xFE,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// b (98): w=9, h=12
0x28,0x0F,
0x01,0xFF,0xFF,0x10,0x08,0x08,0x18,0xF0,0xE0,
0x08,0x0F,0x0F,0x04,0x08,0x08,0x0C,0x07,0x03,

// c (99): w=8, h=9
0x27,0x75,
0x7C,0xFE,0x83,0x01,0x01,0x03,0x86,0xCF,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// d (100): w=9, h=12
0x28,0x0F,
0xE0,0xF0,0x18,0x08,0x09,0x11,0xFF,0xFF,0x00,
0x03,0x07,0x0C,0x08,0x08,0x04,0x0F,0x0F,0x08,

// e (101): w=9, h=9
0x28,0x6F,
0x7C,0xFE,0x93,0x11,0x11,0x11,0x13,0x9E,0x9C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// f (102): w=9, h=12
0x28,0x0F,
0x08,0x08,0xFE,0xFF,0x09,0x09,0x09,0x09,0x01,
0x08,0x08,0x0F,0x0F,0x08,0x08,0x08,0x00,0x00,

// g (103): w=9, h=12
0x28,0x6F,
0x7C,0xFE,0x83,0x01,0x01,0x82,0xFF,0xFF,0x01,
0x00,0x08,0x09,0x09,0x09,0x08,0x0F,0x07,0x00,

// h (104): w=9, h=12
0x28,0x0F,
0x01,0xFF,0xFF,0x10,0x08,0x08,0xF8,0xF0,0x00,
0x08,0x0F,0x0F,0x08,0x00,0x08,0x0F,0x0F,0x08,

// i (105): w=8, h=12
0x27,0x15,
0x00,0x08,0x08,0xF9,0xF9,0x00,0x00,0x00,
0x18,0x18,0x18,0x1F,0x1F,0x18,0x18,0x18,

// j (106): w=6, h=15
0x25,0x1C,
0x08,0x08,0x08,0x08,0xF9,0xF9,
0xC0,0xC0,0xC0,0xC0,0xFF,0x3F,

// k (107): w=9, h=12
0x28,0x0F,
0x01,0xFF,0xFF,0xC0,0xE0,0x38,0x18,0x08,0x08,
0x08,0x0F,0x0F,0x00,0x01,0x0B,0x0E,0x0C,0x08,

// l (108): w=8, h=12
0x27,0x10,
0x01,0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,
0x08,0x08,0x08,0x0F,0x0F,0x08,0x08,0x08,

// m (109): w=10, h=9
0x29,0x6E,
0xFF,0xFE,0x01,0x01,0xFF,0xFE,0x01,0x01,0xFF,0xFE,
0x01,0x01,0x00,0x00,0x01,0x01,0x00,0x00,0x01,0x01,

// n (110): w=9, h=9
0x28,0x6F,
0x01,0xFF,0xFF,0x02,0x01,0x01,0xFF,0xFE,0x00,
0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x01,

// o (111): w=9, h=9
0x28,0x6F,
0x7C,0xFE,0x83,0x01,0x01,0x01,0x83,0xFE,0x7C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// p (112): w=9, h=12
0x28,0x6F,
0x01,0xFF,0xFF,0x82,0x01,0x01,0x83,0xFE,0x7C,
0x08,0x0F,0x0F,0x08,0x09,0x01,0x01,0x00,0x00,

// q (113): w=9, h=12
0x28,0x6F,
0x7C,0xFE,0x83,0x01,0x01,0x82,0xFF,0xFF,0x01,
0x00,0x00,0x01,0x01,0x09,0x08,0x0F,0x0F,0x08,

// r (114): w=9, h=9
0x28,0x6F,
0x01,0x01,0xFF,0xFF,0x02,0x02,0x01,0x03,0x03,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// s (115): w=8, h=9
0x27,0x75,
0xCE,0xDF,0x91,0x11,0x11,0x12,0xF7,0xE7,
0x01,0x01,0x00,0x01,0x01,0x01,0x01,0x00,

// t (116): w=9, h=12
0x28,0x0F,
0x08,0x08,0xFF,0xFF,0x08,0x08,0x08,0x08,0x00,
0x00,0x00,0x07,0x0F,0x08,0x08,0x08,0x04,0x04,

// u (117): w=9, h=9
0x28,0x6F,
0x01,0xFF,0xFF,0x00,0x00,0x81,0xFF,0xFF,0x00,
0x00,0x00,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// v (118): w=10, h=9
0x29,0x6E,
0x01,0x03,0x1F,0x79,0xC0,0xC0,0x79,0x1F,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,

// w (119): w=11, h=9
0x2A,0x68,
0x03,0x3F,0xF9,0xC0,0x70,0x1C,0x70,0xC0,0xF9,0x3F,
0x03,
0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,
0x00,

// x (120): w=9, h=9
0x28,0x6F,
0x01,0x83,0xE7,0x3D,0x10,0x3D,0xE7,0x83,0x01,
0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x01,

// y (121): w=10, h=12
0x29,0x6E,
0x01,0x03,0x1F,0x79,0xC0,0xC0,0x79,0x1F,0x03,0x01,
0x00,0x08,0x08,0x0C,0x0F,0x09,0x00,0x00,0x00,0x00,

// z (122): w=7, h=9
0x26,0x76,
0x87,0xC1,0x61,0x39,0x0D,0x07,0xC3,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// braceleft (123): w=6, h=14
0x25,0x1C,
0x40,0xE0,0xBF,0x1F,0x00,0x00,
0x00,0x00,0x1F,0x7F,0x60,0x60,

// bar (124): w=2, h=16
0xA1,0x00,0x99,
0xFF,0xFF,
0xFF,0xFF,

// braceright (125): w=6, h=14
0x25,0x1C,
0x00,0x00,0x1F,0xBF,0xE0,0x40,
0x60,0x60,0x7F,0x1F,0x00,0x00,

// asciitilde (126): w=7, h=3
0x06,0x76,
0x06,0x01,0x03,0x02,0x06,0x04,0x03

};
// 1640 bytes
// 1830 bytes with FAST_FONT_INDEX
