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

const char font_charR12[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD1,0x00,
0xE7,0x00,
0xF7,0x00,
0x13,0x01,
0x2B,0x01,
0x2F,0x01,
0x3B,0x01,
0x47,0x01,
0x50,0x01,
0x64,0x01,
0x69,0x01,
0x70,0x01,
0x75,0x01,
0x87,0x01,
0x97,0x01,
0xA3,0x01,
0xB3,0x01,
0xC3,0x01,
0xD5,0x01,
0xE7,0x01,
0xF7,0x01,
0x07,0x02,
0x17,0x02,
0x27,0x02,
0x2B,0x02,
0x33,0x02,
0x49,0x02,
0x55,0x02,
0x6B,0x02,
0x77,0x02,
0x93,0x02,
0xAB,0x02,
0xBF,0x02,
0xD3,0x02,
0xEB,0x02,
0xFF,0x02,
0x11,0x03,
0x29,0x03,
0x41,0x03,
0x49,0x03,
0x59,0x03,
0x6D,0x03,
0x7F,0x03,
0x9B,0x03,
0xB3,0x03,
0xCB,0x03,
0xDD,0x03,
0xF5,0x03,
0x0B,0x04,
0x1D,0x04,
0x31,0x04,
0x49,0x04,
0x61,0x04,
0x81,0x04,
0x97,0x04,
0xAD,0x04,
0xBF,0x04,
0xC9,0x04,
0xDB,0x04,
0xE5,0x04,
0xF2,0x04,
0xFD,0x04,
0x01,0x05,
0x0A,0x05,
0x1A,0x05,
0x21,0x05,
0x31,0x05,
0x39,0x05,
0x45,0x05,
0x57,0x05,
0x69,0x05,
0x71,0x05,
0x83,0x05,
0x95,0x05,
0x9D,0x05,
0xAC,0x05,
0xB6,0x05,
0xBF,0x05,
0xCF,0x05,
0xDF,0x05,
0xE6,0x05,
0xED,0x05,
0xF9,0x05,
0x03,0x06,
0x0E,0x06,
0x1D,0x06,
0x27,0x06,
0x3B,0x06,
0x44,0x06,
0x52,0x06,
0x58,0x06,
0x66,0x06,

// space (32): w=1, h=1
0x80,0x0C,0x49,
0x00,

// exclam (33): w=2, h=11
0x21,0x56,
0x7F,0xFF,
0x06,0x06,

// quotedbl (34): w=5, h=5
0x04,0x2F,
0x07,0x1F,0x00,0x07,0x1F,

// numbersign (35): w=10, h=12
0x29,0x2F,
0x80,0x90,0x90,0xF0,0x9E,0x91,0xF0,0x9C,0x93,0x10,
0x00,0x0C,0x03,0x00,0x08,0x07,0x00,0x00,0x00,0x00,

// dollar (36): w=7, h=15
0x26,0x0F,
0x78,0xC8,0xC4,0xFF,0x84,0x84,0x1C,
0x1C,0x10,0x10,0x7F,0x10,0x09,0x07,

// percent (37): w=13, h=11
0x2C,0x4E,
0x3E,0x41,0x41,0x41,0x3E,0xC0,0x20,0x18,0xE4,0x13,
0x10,0x10,0xE0,
0x00,0x00,0x00,0x06,0x01,0x00,0x00,0x00,0x03,0x04,
0x04,0x04,0x03,

// ampersand (38): w=11, h=11
0x2A,0x4E,
0xC0,0x7E,0x39,0x31,0x71,0xD3,0x8E,0x20,0xE0,0x20,
0x20,
0x03,0x06,0x06,0x04,0x04,0x04,0x03,0x03,0x06,0x04,
0x04,

// quoteright (39): w=2, h=5
0x01,0x2E,
0x13,0x0F,

// parenleft (40): w=5, h=14
0x24,0x34,
0xF8,0x0E,0x02,0x01,0x01,
0x07,0x1C,0x10,0x20,0x20,

// parenright (41): w=5, h=14
0x24,0x2A,
0x01,0x01,0x02,0x0C,0xF8,
0x20,0x20,0x10,0x18,0x07,

// asterisk (42): w=7, h=6
0x06,0x2E,
0x04,0x24,0x34,0x07,0x34,0x24,0x04,

// plus (43): w=9, h=11
0x28,0x5C,
0x20,0x20,0x20,0x20,0xFF,0x20,0x20,0x20,0x20,
0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,

// comma (44): w=2, h=5
0x81,0x0B,0x56,
0x13,0x0F,

// hyphen (45): w=4, h=1
0x83,0x08,0x55,
0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x0B,0x56,
0x03,0x03,

// slash (47): w=8, h=13
0x27,0x48,
0x00,0x00,0x00,0x80,0x60,0x18,0x06,0x01,
0x10,0x0C,0x03,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=7, h=11
0x26,0x4F,
0xFC,0x06,0x01,0x01,0x01,0x02,0xFC,
0x01,0x03,0x04,0x04,0x04,0x03,0x01,

// one (49): w=5, h=11
0x24,0x56,
0x02,0x02,0x01,0xFF,0x00,
0x00,0x04,0x04,0x07,0x04,

// two (50): w=7, h=11
0x26,0x4F,
0x06,0x01,0x81,0x81,0x41,0x63,0x1E,
0x06,0x05,0x05,0x04,0x04,0x04,0x06,

// three (51): w=7, h=11
0x26,0x4F,
0x06,0x01,0x21,0x21,0x31,0x5F,0xCC,
0x03,0x04,0x04,0x04,0x04,0x02,0x01,

// four (52): w=8, h=12
0x27,0x4E,
0xC0,0xE0,0x90,0x8C,0x86,0xFF,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,

// five (53): w=8, h=11
0x27,0x49,
0x00,0x1F,0x11,0x11,0x11,0x11,0x31,0xE1,
0x02,0x07,0x04,0x04,0x04,0x04,0x02,0x01,

// six (54): w=7, h=12
0x26,0x2F,
0xF8,0x2C,0x12,0x12,0x11,0x31,0xE0,
0x03,0x04,0x08,0x08,0x08,0x04,0x03,

// seven (55): w=7, h=12
0x26,0x4F,
0x07,0x01,0x01,0xC1,0x31,0x0F,0x03,
0x00,0x0C,0x03,0x00,0x00,0x00,0x00,

// eight (56): w=7, h=11
0x26,0x4F,
0xC0,0x5E,0x31,0x21,0x21,0x73,0xCC,
0x03,0x02,0x04,0x04,0x04,0x06,0x03,

// nine (57): w=7, h=11
0x26,0x4F,
0x3C,0x62,0x41,0x41,0x41,0xE2,0x7C,
0x00,0x04,0x02,0x02,0x01,0x00,0x00,

// colon (58): w=2, h=8
0x01,0xB5,
0xC3,0xC3,

// semicolon (59): w=3, h=11
0x22,0xAF,
0x00,0xC3,0xC3,
0x04,0x04,0x03,

// less (60): w=10, h=9
0x29,0x76,
0x10,0x38,0x28,0x28,0x44,0x44,0xC2,0x82,0x82,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,

// equal (61): w=10, h=4
0x09,0xD6,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=10, h=9
0x29,0x76,
0x01,0x82,0x82,0x82,0x44,0x44,0x28,0x28,0x38,0x10,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=5, h=11
0x24,0x50,
0x02,0xC1,0x21,0x31,0x1E,
0x00,0x06,0x06,0x00,0x00,

// at (64): w=13, h=14
0x2C,0x35,
0xF0,0x08,0x04,0xE2,0x31,0x09,0x09,0x89,0xF1,0x09,
0x02,0x84,0x78,
0x03,0x0E,0x18,0x11,0x22,0x22,0x21,0x23,0x23,0x12,
0x11,0x01,0x00,

// A (65): w=11, h=11
0x2A,0x48,
0x00,0x00,0xC0,0x70,0x4E,0x43,0x5E,0xF0,0xC0,0x00,
0x00,
0x04,0x06,0x05,0x00,0x00,0x00,0x00,0x04,0x07,0x06,
0x04,

// B (66): w=9, h=11
0x28,0x4E,
0x01,0xFF,0x21,0x21,0x21,0x21,0x33,0x5E,0xC4,
0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x02,0x03,

// C (67): w=9, h=11
0x28,0x4E,
0xF8,0x06,0x02,0x01,0x01,0x01,0x01,0x01,0x06,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x04,0x03,

// D (68): w=11, h=11
0x2A,0x4E,
0x01,0xFF,0x01,0x01,0x01,0x01,0x01,0x02,0x02,0x06,
0xF8,
0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x06,0x02,0x03,
0x00,

// E (69): w=9, h=11
0x28,0x4E,
0x01,0xFF,0x21,0x21,0x21,0x21,0x71,0x07,0x00,
0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x07,

// F (70): w=8, h=11
0x27,0x4E,
0x01,0xFF,0x21,0x21,0x21,0x21,0x71,0x07,
0x04,0x07,0x04,0x04,0x00,0x00,0x00,0x00,

// G (71): w=11, h=11
0x2A,0x4E,
0xF8,0x86,0x02,0x03,0x01,0x01,0x01,0x21,0x21,0xE7,
0x20,
0x00,0x03,0x02,0x06,0x04,0x04,0x04,0x04,0x04,0x03,
0x00,

// H (72): w=11, h=11
0x2A,0x4E,
0x01,0xFF,0x21,0x20,0x20,0x20,0x20,0x20,0x21,0xFF,
0x01,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x04,0x07,
0x04,

// I (73): w=3, h=11
0x22,0x4E,
0x01,0xFF,0x01,
0x04,0x07,0x04,

// J (74): w=7, h=11
0x26,0x48,
0x00,0x00,0x00,0x01,0x01,0xFF,0x01,
0x07,0x04,0x04,0x04,0x06,0x03,0x00,

// K (75): w=9, h=11
0x28,0x4E,
0x01,0xFF,0x21,0x70,0xC8,0x85,0x03,0x01,0x01,
0x04,0x07,0x04,0x00,0x00,0x01,0x07,0x04,0x04,

// L (76): w=8, h=11
0x27,0x4E,
0x01,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,
0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x07,

// M (77): w=13, h=11
0x2C,0x4E,
0x01,0xFF,0x03,0x1E,0x78,0xC0,0x00,0x80,0x70,0x1C,
0x03,0xFF,0x01,
0x04,0x07,0x04,0x00,0x00,0x03,0x07,0x01,0x00,0x00,
0x04,0x07,0x04,

// N (78): w=11, h=11
0x2A,0x4E,
0x01,0xFF,0x07,0x0E,0x18,0x70,0xE0,0x80,0x01,0xFF,
0x01,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x01,0x07,0x07,
0x00,

// O (79): w=11, h=11
0x2A,0x4E,
0xF8,0x06,0x02,0x01,0x01,0x01,0x01,0x01,0x02,0x06,
0xFC,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x04,0x02,0x03,
0x01,

// P (80): w=8, h=11
0x27,0x4E,
0x01,0xFF,0x41,0x41,0x41,0x41,0x23,0x1E,
0x04,0x07,0x04,0x04,0x00,0x00,0x00,0x00,

// Q (81): w=11, h=14
0x2A,0x4E,
0xF8,0x06,0x02,0x01,0x01,0x01,0x01,0x01,0x02,0x06,
0xFC,
0x00,0x03,0x02,0x04,0x04,0x1C,0x3C,0x24,0x22,0x23,
0x21,

// R (82): w=10, h=11
0x29,0x4E,
0x01,0xFF,0x21,0x21,0x21,0x61,0xD3,0x9E,0x00,0x00,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x03,0x04,0x04,

// S (83): w=8, h=11
0x27,0x4E,
0x1E,0x33,0x31,0x21,0x21,0x61,0x61,0xC7,
0x07,0x04,0x04,0x04,0x04,0x04,0x02,0x03,

// T (84): w=9, h=11
0x28,0x4E,
0x07,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x07,
0x00,0x00,0x00,0x04,0x07,0x04,0x00,0x00,0x00,

// U (85): w=11, h=11
0x2A,0x4E,
0x01,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,
0x01,
0x00,0x03,0x06,0x04,0x04,0x04,0x04,0x04,0x02,0x01,
0x00,

// V (86): w=11, h=11
0x2A,0x47,
0x01,0x03,0x1F,0x79,0xC0,0x00,0x80,0x60,0x1D,0x03,
0x01,
0x00,0x00,0x00,0x00,0x03,0x06,0x03,0x00,0x00,0x00,
0x00,

// W (87): w=15, h=11
0x2E,0x48,
0x01,0x07,0x3F,0xF1,0x00,0xC0,0x3C,0x03,0x3E,0xE0,
0x00,0xC1,0x3D,0x03,0x01,
0x00,0x00,0x00,0x01,0x07,0x01,0x00,0x00,0x00,0x01,
0x07,0x01,0x00,0x00,0x00,

// X (88): w=10, h=11
0x29,0x48,
0x01,0x01,0x07,0x8D,0x78,0x70,0xC9,0x07,0x01,0x01,
0x04,0x06,0x05,0x00,0x00,0x00,0x05,0x07,0x06,0x04,

// Y (89): w=10, h=11
0x29,0x47,
0x01,0x03,0x07,0x0D,0x30,0xE0,0x10,0x0D,0x03,0x01,
0x00,0x00,0x00,0x04,0x04,0x07,0x04,0x00,0x00,0x00,

// Z (90): w=8, h=11
0x27,0x4F,
0x07,0x01,0xC1,0x61,0x39,0x0D,0x07,0x03,
0x06,0x07,0x05,0x04,0x04,0x04,0x04,0x07,

// bracketleft (91): w=4, h=14
0x23,0x35,
0xFF,0x01,0x01,0x01,
0x3F,0x20,0x20,0x20,

// backslash (92): w=8, h=13
0x27,0x48,
0x01,0x02,0x0C,0x30,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x0C,0x10,

// bracketright (93): w=4, h=14
0x23,0x30,
0x01,0x01,0x01,0xFF,
0x20,0x20,0x20,0x3F,

// asciicircum (94): w=10, h=5
0x89,0x01,0x79,
0x10,0x08,0x04,0x06,0x03,0x03,0x06,0x04,0x08,0x10,

// underscore (95): w=8, h=1
0x87,0x10,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// quoteleft (96): w=2, h=5
0x01,0x2E,
0x1E,0x19,

// a (97): w=7, h=8
0x06,0xAE,
0x62,0x93,0x91,0x89,0x49,0xFE,0x80,

// b (98): w=7, h=13
0x26,0x0F,
0x01,0xFF,0x20,0x20,0x20,0x60,0xC0,
0x00,0x1F,0x10,0x10,0x10,0x08,0x07,

// c (99): w=5, h=8
0x04,0xAF,
0x7C,0xC3,0x81,0x87,0xC6,

// d (100): w=7, h=13
0x26,0x0E,
0x80,0x40,0x20,0x20,0x21,0xFF,0x00,
0x07,0x18,0x10,0x10,0x08,0x1F,0x10,

// e (101): w=6, h=8
0x05,0xAF,
0x3C,0xCA,0x89,0x89,0x89,0x4E,

// f (102): w=5, h=13
0x24,0x0D,
0x20,0xFC,0x22,0x21,0x03,
0x10,0x1F,0x10,0x00,0x00,

// g (103): w=8, h=12
0x27,0xAE,
0x8E,0x7B,0x51,0x51,0x5B,0xCE,0x82,0x02,
0x07,0x08,0x08,0x08,0x08,0x04,0x03,0x00,

// h (104): w=8, h=13
0x27,0x0E,
0x01,0xFF,0x20,0x20,0x20,0x20,0xC0,0x00,
0x10,0x1F,0x10,0x00,0x00,0x10,0x1F,0x10,

// i (105): w=3, h=13
0x22,0x0F,
0x20,0xE7,0x00,
0x10,0x1F,0x10,

// j (106): w=5, h=17
0xC4,0x00,0x26,
0x00,0x00,0x00,0x20,0xE7,
0x80,0x80,0x00,0x00,0xFF,
0x01,0x01,0x01,0x01,0x00,

// k (107): w=8, h=13
0x27,0x0E,
0x01,0xFF,0x00,0x00,0xA0,0x60,0x20,0x00,
0x10,0x1F,0x11,0x03,0x06,0x1C,0x18,0x10,

// l (108): w=3, h=13
0x22,0x0F,
0x01,0xFF,0x00,
0x10,0x1F,0x10,

// m (109): w=13, h=8
0x0C,0xAE,
0x81,0xFF,0x81,0x01,0x81,0x81,0xFF,0x81,0x01,0x81,
0x81,0xFF,0x80,

// n (110): w=8, h=8
0x07,0xAE,
0x81,0xFF,0x81,0x01,0x01,0x81,0xFF,0x80,

// o (111): w=7, h=8
0x06,0xAF,
0x3C,0x42,0x81,0x81,0x81,0x42,0x3C,

// p (112): w=7, h=12
0x26,0xAF,
0x01,0xFF,0x81,0x81,0x81,0x43,0x3E,
0x08,0x0F,0x08,0x00,0x00,0x00,0x00,

// q (113): w=7, h=12
0x26,0xAE,
0x7C,0xC2,0x81,0x81,0x81,0xFF,0x00,
0x00,0x00,0x00,0x00,0x08,0x0F,0x08,

// r (114): w=5, h=8
0x04,0xAE,
0x81,0xFF,0x82,0x01,0x01,

// s (115): w=5, h=8
0x04,0xAF,
0xEE,0x89,0x99,0x91,0x73,

// t (116): w=5, h=10
0x24,0x6E,
0x04,0xFF,0x04,0x04,0x04,
0x00,0x03,0x02,0x02,0x02,

// u (117): w=8, h=8
0x07,0xAE,
0x01,0x7F,0x80,0x80,0x80,0x41,0xFF,0x80,

// v (118): w=9, h=8
0x08,0xA8,
0x01,0x03,0x0F,0x79,0xC0,0x60,0x1D,0x03,0x01,

// w (119): w=13, h=8
0x0C,0xA8,
0x01,0x07,0x3D,0xE0,0x60,0x1C,0x03,0x0F,0x78,0xC0,
0x31,0x0F,0x01,

// x (120): w=8, h=8
0x07,0xA8,
0x81,0xC3,0xA7,0x1D,0x38,0xE7,0xC1,0x81,

// y (121): w=9, h=12
0x28,0xA8,
0x01,0x03,0x1F,0x79,0xC0,0x60,0x1D,0x03,0x01,
0x08,0x0C,0x08,0x06,0x01,0x00,0x00,0x00,0x00,

// z (122): w=7, h=8
0x06,0xAE,
0xC3,0xE1,0xB1,0x99,0x8F,0x83,0xE1,

// braceleft (123): w=6, h=14
0x25,0x2F,
0x40,0x40,0xA0,0xBE,0x01,0x01,
0x00,0x00,0x00,0x1F,0x20,0x20,

// bar (124): w=1, h=17
0xC0,0x00,0x88,
0xFF,
0xFF,
0x01,

// braceright (125): w=6, h=14
0x25,0x2F,
0x01,0x01,0xBE,0xA0,0x40,0x40,
0x20,0x20,0x1F,0x00,0x00,0x00,

// c0126 (126): w=11, h=2
0x0A,0x5D,
0x02,0x02,0x01,0x01,0x01,0x03,0x02,0x02,0x02,0x01,
0x01

};
// 1461 bytes
// 1651 bytes with FAST_FONT_INDEX
