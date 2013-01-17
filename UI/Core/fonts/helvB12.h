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

// helvB12 = "Helvetica Bold"

const char font_helvB12[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD1,0x00,
0xE5,0x00,
0xF5,0x00,
0x11,0x01,
0x27,0x01,
0x2B,0x01,
0x35,0x01,
0x3F,0x01,
0x46,0x01,
0x50,0x01,
0x55,0x01,
0x5B,0x01,
0x60,0x01,
0x6A,0x01,
0x7C,0x01,
0x88,0x01,
0x9A,0x01,
0xAC,0x01,
0xBE,0x01,
0xD0,0x01,
0xE2,0x01,
0xF4,0x01,
0x06,0x02,
0x18,0x02,
0x1C,0x02,
0x22,0x02,
0x2C,0x02,
0x36,0x02,
0x40,0x02,
0x50,0x02,
0x6C,0x02,
0x84,0x02,
0x98,0x02,
0xAE,0x02,
0xC4,0x02,
0xD6,0x02,
0xE8,0x02,
0xFE,0x02,
0x14,0x03,
0x1A,0x03,
0x2A,0x03,
0x42,0x03,
0x54,0x03,
0x6C,0x03,
0x82,0x03,
0x9A,0x03,
0xAE,0x03,
0xC6,0x03,
0xDC,0x03,
0xF0,0x03,
0x06,0x04,
0x1C,0x04,
0x32,0x04,
0x50,0x04,
0x64,0x04,
0x7A,0x04,
0x8C,0x04,
0x96,0x04,
0xA0,0x04,
0xAA,0x04,
0xB4,0x04,
0xC0,0x04,
0xC5,0x04,
0xD7,0x04,
0xE9,0x04,
0xFB,0x04,
0x0D,0x05,
0x1F,0x05,
0x29,0x05,
0x3B,0x05,
0x4D,0x05,
0x53,0x05,
0x5B,0x05,
0x6D,0x05,
0x73,0x05,
0x8D,0x05,
0x9F,0x05,
0xB1,0x05,
0xC3,0x05,
0xD5,0x05,
0xE1,0x05,
0xF1,0x05,
0xFB,0x05,
0x0D,0x06,
0x1F,0x06,
0x39,0x06,
0x49,0x06,
0x5B,0x06,
0x6B,0x06,
0x75,0x06,
0x79,0x06,
0x83,0x06,

// space (32): w=1, h=1
0x80,0x0B,0x49,
0x00,

// exclam (33): w=2, h=12
0x21,0x16,
0xFF,0x3F,
0x0D,0x0C,

// quotedbl (34): w=5, h=4
0x04,0x10,
0x07,0x0F,0x00,0x07,0x0F,

// numbersign (35): w=9, h=12
0x28,0x08,
0x80,0x98,0xF8,0xFF,0x9F,0xF8,0xFF,0x9F,0x18,
0x01,0x0F,0x0F,0x01,0x0F,0x0F,0x01,0x01,0x00,

// dollar (36): w=7, h=13
0x26,0x0F,
0x1E,0x3F,0x73,0xFF,0xE3,0xC7,0x86,
0x06,0x0E,0x0C,0x3F,0x0C,0x0F,0x07,

// percent (37): w=13, h=12
0x2C,0x09,
0x0C,0x1E,0x33,0x33,0x1E,0x8C,0x60,0x18,0x86,0xC1,
0xC0,0x80,0x00,
0x00,0x00,0x00,0x08,0x06,0x01,0x00,0x03,0x07,0x0C,
0x0C,0x07,0x03,

// ampersand (38): w=10, h=12
0x29,0x0F,
0x80,0xCE,0x7F,0x73,0xF3,0xDF,0x8E,0xC0,0xE0,0x60,
0x03,0x07,0x0C,0x0C,0x0C,0x07,0x07,0x0F,0x0C,0x08,

// quotesingle (39): w=2, h=4
0x01,0x0F,
0x07,0x0F,

// parenleft (40): w=4, h=15
0x23,0x0F,
0xF8,0xFE,0x07,0x03,
0x0F,0x3F,0x70,0x60,

// parenright (41): w=4, h=15
0x23,0x0A,
0x03,0x07,0xFE,0xF8,
0x60,0x70,0x3F,0x0F,

// asterisk (42): w=5, h=5
0x04,0x09,
0x12,0x0C,0x0F,0x0C,0x12,

// plus (43): w=8, h=8
0x07,0x8F,
0x18,0x18,0x18,0xFF,0xFF,0x18,0x18,0x18,

// comma (44): w=2, h=5
0x81,0x0A,0x56,
0x13,0x0F,

// hyphen (45): w=4, h=2
0x03,0xE9,
0x03,0x03,0x03,0x03,

// period (46): w=2, h=2
0x81,0x0A,0x56,
0x03,0x03,

// slash (47): w=4, h=12
0x23,0x09,
0x00,0xE0,0x3C,0x07,
0x0F,0x01,0x00,0x00,

// zero (48): w=8, h=12
0x27,0x09,
0xFC,0xFE,0x07,0x03,0x03,0x07,0xFE,0xFC,
0x03,0x07,0x0E,0x0C,0x0C,0x0E,0x07,0x03,

// one (49): w=5, h=12
0x24,0x11,
0x0C,0x0C,0x0C,0xFE,0xFF,
0x00,0x00,0x00,0x0F,0x0F,

// two (50): w=8, h=12
0x27,0x09,
0x1C,0x1E,0x07,0x83,0xC3,0xE7,0x7E,0x3C,
0x0C,0x0E,0x0F,0x0F,0x0D,0x0C,0x0C,0x0C,

// three (51): w=8, h=12
0x27,0x09,
0x0C,0x0E,0x07,0x63,0x63,0xF7,0xFE,0x9C,
0x03,0x07,0x0E,0x0C,0x0C,0x0E,0x07,0x03,

// four (52): w=8, h=12
0x27,0x09,
0xC0,0xF0,0xBC,0x8E,0x83,0xFF,0xFF,0x80,
0x01,0x01,0x01,0x01,0x01,0x0F,0x0F,0x01,

// five (53): w=8, h=12
0x27,0x09,
0x00,0x70,0x3F,0x3F,0x33,0x73,0xE3,0xC3,
0x02,0x06,0x0E,0x0C,0x0C,0x0E,0x07,0x03,

// six (54): w=8, h=12
0x27,0x09,
0xFC,0xFE,0x67,0x33,0x33,0x77,0xE6,0xC4,
0x03,0x07,0x0E,0x0C,0x0C,0x0E,0x07,0x03,

// seven (55): w=8, h=12
0x27,0x09,
0x03,0x03,0x03,0xC3,0xF3,0x3F,0x0F,0x03,
0x00,0x00,0x0E,0x0F,0x01,0x00,0x00,0x00,

// eight (56): w=8, h=12
0x27,0x09,
0x8C,0xDE,0xF7,0x63,0x63,0xF7,0xDE,0x8C,
0x03,0x07,0x0E,0x0C,0x0C,0x0E,0x07,0x03,

// nine (57): w=8, h=12
0x27,0x09,
0x3C,0x7E,0xE7,0xC3,0xC3,0x67,0xFE,0xFC,
0x02,0x06,0x0E,0x0C,0x0C,0x0E,0x07,0x03,

// colon (58): w=2, h=8
0x01,0x95,
0xC3,0xC3,

// semicolon (59): w=2, h=11
0x21,0x95,
0xC3,0xC3,
0x04,0x03,

// less (60): w=8, h=8
0x07,0x8F,
0x18,0x18,0x3C,0x24,0x66,0x66,0xC3,0xC3,

// equal (61): w=8, h=6
0x07,0xAF,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,

// greater (62): w=8, h=8
0x07,0x8F,
0xC3,0xC3,0x66,0x66,0x24,0x3C,0x18,0x18,

// question (63): w=7, h=12
0x26,0x10,
0x0E,0x0F,0x03,0x83,0xE3,0x7F,0x3E,
0x00,0x00,0x00,0x0D,0x0D,0x00,0x00,

// at (64): w=13, h=14
0x2C,0x10,
0xF0,0x1C,0x06,0xC2,0xF3,0x19,0x09,0x09,0xE9,0x7B,
0x02,0x0C,0xF8,
0x03,0x0E,0x18,0x11,0x33,0x24,0x24,0x23,0x33,0x14,
0x04,0x03,0x01,

// A (65): w=11, h=12
0x2A,0x09,
0x00,0xC0,0xF0,0x7C,0x1F,0x07,0x1F,0x7C,0xF0,0xC0,
0x00,
0x0E,0x0F,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x0F,
0x0E,

// B (66): w=9, h=12
0x28,0x0F,
0xFF,0xFF,0x63,0x63,0x63,0x63,0xF7,0xFE,0x9C,
0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0E,0x07,0x03,

// C (67): w=10, h=12
0x29,0x0F,
0xF0,0xFC,0x9E,0x07,0x03,0x03,0x03,0x07,0x0E,0x0C,
0x00,0x03,0x07,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x03,

// D (68): w=10, h=12
0x29,0x0F,
0xFF,0xFF,0x03,0x03,0x03,0x03,0x06,0x9E,0xFC,0xF0,
0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x06,0x07,0x03,0x00,

// E (69): w=8, h=12
0x27,0x0F,
0xFF,0xFF,0x63,0x63,0x63,0x63,0x63,0x03,
0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,

// F (70): w=8, h=12
0x27,0x0F,
0xFF,0xFF,0x63,0x63,0x63,0x63,0x63,0x03,
0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=10, h=12
0x29,0x0F,
0xF0,0xFC,0x9E,0x07,0x03,0x03,0xC3,0xC7,0xCE,0xCC,
0x00,0x03,0x07,0x0E,0x0C,0x0C,0x0C,0x06,0x0F,0x0F,

// H (72): w=10, h=12
0x29,0x0F,
0xFF,0xFF,0x30,0x30,0x30,0x30,0x30,0x30,0xFF,0xFF,
0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,

// I (73): w=2, h=12
0x21,0x0F,
0xFF,0xFF,
0x0F,0x0F,

// J (74): w=7, h=12
0x26,0x0F,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x07,0x0F,0x0C,0x0C,0x0C,0x0F,0x07,

// K (75): w=11, h=12
0x2A,0x0E,
0xFF,0xFF,0x60,0x70,0xF8,0xDC,0x8E,0x07,0x03,0x01,
0x00,
0x0F,0x0F,0x00,0x00,0x00,0x01,0x03,0x07,0x0E,0x0C,
0x08,

// L (76): w=8, h=12
0x27,0x0F,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,

// M (77): w=11, h=12
0x2A,0x0F,
0xFF,0xFF,0x1F,0xF8,0xC0,0x00,0xC0,0xF8,0x1F,0xFF,
0xFF,
0x0F,0x0F,0x00,0x00,0x07,0x0E,0x07,0x00,0x00,0x0F,
0x0F,

// N (78): w=10, h=12
0x29,0x0F,
0xFF,0xFF,0x07,0x1E,0x78,0xE0,0x80,0x00,0xFF,0xFF,
0x0F,0x0F,0x00,0x00,0x00,0x01,0x07,0x0E,0x0F,0x0F,

// O (79): w=11, h=12
0x2A,0x0F,
0xF0,0xFC,0x9E,0x07,0x03,0x03,0x03,0x07,0x9E,0xFC,
0xF0,
0x00,0x03,0x07,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x03,
0x00,

// P (80): w=9, h=12
0x28,0x0F,
0xFF,0xFF,0xC3,0xC3,0xC3,0xC3,0xE7,0x7E,0x3C,
0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=11, h=13
0x2A,0x0F,
0xF0,0xFC,0x9E,0x07,0x03,0x03,0x83,0x07,0x1E,0xFC,
0xF0,
0x00,0x03,0x07,0x0E,0x0C,0x0D,0x0F,0x0F,0x1F,0x0B,
0x00,

// R (82): w=10, h=12
0x29,0x0F,
0xFF,0xFF,0x63,0x63,0x63,0x63,0xF3,0xFF,0x9E,0x00,
0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x0C,

// S (83): w=9, h=12
0x28,0x0F,
0x1C,0x3E,0x37,0x73,0x63,0x63,0xE7,0xCE,0x8C,
0x03,0x07,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x03,

// T (84): w=10, h=12
0x29,0x08,
0x03,0x03,0x03,0x03,0xFF,0xFF,0x03,0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,

// U (85): w=10, h=12
0x29,0x0F,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x03,0x07,0x0E,0x0C,0x0C,0x0C,0x0C,0x0E,0x07,0x03,

// V (86): w=10, h=12
0x29,0x09,
0x03,0x1F,0xFC,0xE0,0x00,0x00,0xE0,0xFC,0x1F,0x03,
0x00,0x00,0x00,0x03,0x0F,0x0F,0x03,0x00,0x00,0x00,

// W (87): w=14, h=12
0x2D,0x09,
0x07,0x3F,0xF8,0xC0,0x80,0xF0,0x3F,0x3F,0xF0,0x80,
0xC0,0xF8,0x3F,0x07,
0x00,0x00,0x01,0x0F,0x0F,0x01,0x00,0x00,0x01,0x0F,
0x0F,0x01,0x00,0x00,

// X (88): w=9, h=12
0x28,0x0F,
0x03,0x07,0x9E,0xF8,0xF0,0xF8,0x9E,0x07,0x03,
0x0C,0x0E,0x07,0x01,0x00,0x01,0x07,0x0E,0x0C,

// Y (89): w=10, h=12
0x29,0x09,
0x03,0x07,0x1E,0x78,0xE0,0xE0,0x78,0x1E,0x07,0x03,
0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,

// Z (90): w=8, h=12
0x27,0x0F,
0x03,0x03,0xC3,0xE3,0x73,0x3F,0x0F,0x07,
0x0E,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,

// bracketleft (91): w=4, h=15
0x23,0x0F,
0xFF,0xFF,0x03,0x03,
0x7F,0x7F,0x60,0x60,

// backslash (92): w=4, h=12
0x23,0x09,
0x07,0x3C,0xE0,0x00,
0x00,0x00,0x01,0x0F,

// bracketright (93): w=4, h=15
0x23,0x0A,
0x03,0x03,0xFF,0xFF,
0x60,0x60,0x7F,0x7F,

// asciicircum (94): w=8, h=7
0x07,0x0F,
0x60,0x78,0x1C,0x07,0x07,0x1C,0x78,0x60,

// underscore (95): w=9, h=1
0x88,0x0E,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=2
0x02,0x15,
0x01,0x01,0x06,

// a (97): w=8, h=9
0x27,0x6E,
0xE6,0xF7,0xB3,0x93,0x9B,0xFF,0xFE,0x00,
0x00,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// b (98): w=8, h=12
0x27,0x0F,
0xFF,0xFF,0x30,0x18,0x18,0x38,0xF0,0xE0,
0x0F,0x0F,0x06,0x0C,0x0C,0x0E,0x07,0x03,

// c (99): w=8, h=9
0x27,0x6E,
0x7C,0xFE,0xC7,0x83,0x83,0xC7,0xC6,0x44,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// d (100): w=8, h=12
0x27,0x0F,
0xE0,0xF0,0x38,0x18,0x18,0x38,0xFF,0xFF,
0x03,0x07,0x0E,0x0C,0x0C,0x06,0x0F,0x0F,

// e (101): w=8, h=9
0x27,0x6F,
0x7C,0xFE,0xDB,0x9B,0x9B,0xDB,0xDE,0x5C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// f (102): w=4, h=12
0x23,0x0F,
0x18,0xFE,0xFF,0x1B,
0x00,0x0F,0x0F,0x00,

// g (103): w=8, h=13
0x27,0x6F,
0x7C,0xFE,0xC7,0x83,0x83,0xC6,0xFF,0xFF,
0x04,0x0C,0x1D,0x19,0x19,0x1C,0x0F,0x07,

// h (104): w=8, h=12
0x27,0x0F,
0xFF,0xFF,0x30,0x18,0x18,0x18,0xF8,0xF0,
0x0F,0x0F,0x00,0x00,0x00,0x00,0x0F,0x0F,

// i (105): w=2, h=12
0x21,0x0F,
0xFB,0xFB,
0x0F,0x0F,

// j (106): w=3, h=16
0x22,0x0F,
0x00,0xFB,0xFB,
0xC0,0xFF,0x7F,

// k (107): w=8, h=12
0x27,0x0E,
0xFF,0xFF,0xC0,0xE0,0xF0,0xB8,0x18,0x08,
0x0F,0x0F,0x01,0x00,0x03,0x0F,0x0E,0x08,

// l (108): w=2, h=12
0x21,0x0F,
0xFF,0xFF,
0x0F,0x0F,

// m (109): w=12, h=9
0x2B,0x6F,
0xFF,0xFF,0x06,0x03,0x03,0xFF,0xFF,0x06,0x03,0x03,
0xFF,0xFE,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,
0x01,0x01,

// n (110): w=8, h=9
0x27,0x6F,
0xFF,0xFF,0x06,0x03,0x03,0x03,0xFF,0xFE,
0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x01,

// o (111): w=8, h=9
0x27,0x6F,
0x7C,0xFE,0xC7,0x83,0x83,0xC7,0xFE,0x7C,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// p (112): w=8, h=13
0x27,0x6F,
0xFF,0xFF,0xC6,0x83,0x83,0xC7,0xFE,0x7C,
0x1F,0x1F,0x00,0x01,0x01,0x01,0x00,0x00,

// q (113): w=8, h=13
0x27,0x6F,
0x7C,0xFE,0xC7,0x83,0x83,0xC6,0xFF,0xFF,
0x00,0x00,0x01,0x01,0x01,0x00,0x1F,0x1F,

// r (114): w=5, h=9
0x24,0x6E,
0xFF,0xFF,0x06,0x03,0x03,
0x01,0x01,0x00,0x00,0x00,

// s (115): w=7, h=9
0x26,0x6F,
0xCE,0xDF,0x9B,0x9B,0xB3,0xF7,0xE6,
0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// t (116): w=4, h=11
0x23,0x2F,
0x0C,0xFF,0xFF,0x0C,
0x00,0x03,0x07,0x06,

// u (117): w=8, h=9
0x27,0x6F,
0xFF,0xFF,0x80,0x80,0x80,0xC0,0xFF,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,

// v (118): w=8, h=9
0x27,0x69,
0x03,0x1F,0x7C,0xE0,0xE0,0x7C,0x1F,0x03,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,

// w (119): w=12, h=9
0x2B,0x69,
0x03,0x1F,0x7C,0xE0,0xF0,0x3F,0x3F,0xF0,0xE0,0x7C,
0x1F,0x03,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x01,0x01,0x00,
0x00,0x00,

// x (120): w=7, h=9
0x26,0x6F,
0x83,0xEF,0x7C,0x38,0x7C,0xEF,0x83,
0x01,0x01,0x00,0x00,0x00,0x01,0x01,

// y (121): w=8, h=13
0x27,0x69,
0x03,0x0F,0x7C,0xF0,0xC0,0xF8,0x3F,0x07,
0x00,0x18,0x18,0x0F,0x07,0x00,0x00,0x00,

// z (122): w=7, h=9
0x26,0x69,
0x83,0xC3,0xE3,0xFB,0xBF,0x8F,0x87,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// braceleft (123): w=4, h=15
0x23,0x0F,
0x80,0xFE,0x7F,0x03,
0x00,0x3F,0x7F,0x60,

// bar (124): w=1, h=16
0x20,0x10,
0xFF,
0xFF,

// braceright (125): w=4, h=15
0x23,0x0F,
0x03,0x7F,0xFE,0x80,
0x60,0x7F,0x3F,0x00,

// asciitilde (126): w=8, h=3
0x07,0xCF,
0x06,0x01,0x01,0x03,0x06,0x04,0x04,0x03

};
// 1487 bytes
// 1677 bytes with FAST_FONT_INDEX
