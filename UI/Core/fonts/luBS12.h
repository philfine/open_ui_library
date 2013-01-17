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

const char font_luBS12[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCC,0x00,
0xD6,0x00,
0xEE,0x00,
0x00,0x01,
0x20,0x01,
0x3A,0x01,
0x3F,0x01,
0x4B,0x01,
0x57,0x01,
0x60,0x01,
0x76,0x01,
0x7C,0x01,
0x82,0x01,
0x88,0x01,
0x9E,0x01,
0xB4,0x01,
0xC1,0x01,
0xD5,0x01,
0xE9,0x01,
0xFF,0x01,
0x11,0x02,
0x27,0x02,
0x3B,0x02,
0x51,0x02,
0x67,0x02,
0x6F,0x02,
0x77,0x02,
0x8D,0x02,
0x99,0x02,
0xAF,0x02,
0xC1,0x02,
0xDF,0x02,
0xFB,0x02,
0x0F,0x03,
0x27,0x03,
0x41,0x03,
0x55,0x03,
0x67,0x03,
0x7F,0x03,
0x97,0x03,
0x9F,0x03,
0xAF,0x03,
0xC7,0x03,
0xDB,0x03,
0xF7,0x03,
0x0D,0x04,
0x29,0x04,
0x3D,0x04,
0x5D,0x04,
0x75,0x04,
0x89,0x04,
0xA1,0x04,
0xB7,0x04,
0xD1,0x04,
0xF3,0x04,
0x0B,0x05,
0x23,0x05,
0x37,0x05,
0x43,0x05,
0x59,0x05,
0x65,0x05,
0x7B,0x05,
0x85,0x05,
0x8C,0x05,
0xA0,0x05,
0xB6,0x05,
0xC8,0x05,
0xDE,0x05,
0xF2,0x05,
0x02,0x06,
0x18,0x06,
0x2C,0x06,
0x34,0x06,
0x42,0x06,
0x56,0x06,
0x5E,0x06,
0x7E,0x06,
0x92,0x06,
0xA8,0x06,
0xBE,0x06,
0xD4,0x06,
0xE2,0x06,
0xF4,0x06,
0x02,0x07,
0x16,0x07,
0x2C,0x07,
0x4A,0x07,
0x5E,0x07,
0x76,0x07,
0x8A,0x07,
0x96,0x07,
0x9C,0x07,
0xA8,0x07,

// space (32): w=1, h=1
0x80,0x0B,0x4A,
0x00,

// exclam (33): w=3, h=12
0x22,0x10,
0x1F,0xFF,0xFF,
0x0C,0x0C,0x0C,

// quotedbl (34): w=8, h=6
0x07,0x0E,
0x07,0x3F,0x3F,0x00,0x00,0x3F,0x3F,0x07,

// numbersign (35): w=11, h=12
0x2A,0x09,
0x80,0x98,0xD8,0xFC,0xBF,0x9F,0xD8,0xFE,0xBF,0x9B,
0x18,
0x01,0x0D,0x0F,0x07,0x01,0x0F,0x0F,0x03,0x01,0x01,
0x00,

// dollar (36): w=8, h=14
0x27,0x16,
0x0C,0x3F,0x3F,0xF3,0xFF,0xE3,0xC3,0x80,
0x0E,0x0C,0x0C,0xFF,0xFC,0x0F,0x0F,0x07,

// percent (37): w=15, h=12
0x2E,0x08,
0x1E,0x3F,0x33,0x33,0x3F,0x9E,0xC0,0xF0,0x38,0x9C,
0xCE,0xC7,0xC3,0xC1,0x80,
0x00,0x08,0x0C,0x0E,0x07,0x03,0x01,0x00,0x00,0x07,
0x0F,0x0C,0x0C,0x0F,0x07,

// ampersand (38): w=12, h=12
0x2B,0x0E,
0x80,0xC0,0xEE,0x7F,0x7F,0xF3,0xF3,0xDF,0x0E,0x80,
0xE0,0x60,
0x03,0x07,0x0F,0x0E,0x0C,0x0D,0x0F,0x07,0x0F,0x0F,
0x09,0x00,

// quotesingle (39): w=3, h=5
0x02,0x0E,
0x07,0x1F,0x1F,

// parenleft (40): w=5, h=15
0x24,0x0F,
0xE0,0xF8,0xFC,0x0E,0x03,
0x03,0x0F,0x1F,0x38,0x60,

// parenright (41): w=5, h=15
0x24,0x0F,
0x03,0x0E,0xFC,0xF8,0xE0,
0x60,0x38,0x1F,0x0F,0x03,

// asterisk (42): w=7, h=6
0x06,0x09,
0x04,0x16,0x3D,0x03,0x3D,0x16,0x04,

// plus (43): w=10, h=10
0x29,0x4F,
0x30,0x30,0x30,0x30,0xFF,0xFF,0x30,0x30,0x30,0x30,
0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,

// comma (44): w=3, h=6
0x82,0x09,0x57,
0x27,0x3F,0x1F,

// hyphen (45): w=4, h=2
0x03,0xC9,
0x03,0x03,0x03,0x03,

// period (46): w=3, h=3
0x82,0x09,0x57,
0x07,0x07,0x07,

// slash (47): w=10, h=15
0x29,0x08,
0x00,0x00,0x00,0x00,0xC0,0xF0,0x7C,0x1F,0x07,0x01,
0x40,0x70,0x7C,0x1F,0x07,0x01,0x00,0x00,0x00,0x00,

// zero (48): w=10, h=12
0x29,0x0F,
0xF8,0xFC,0xFE,0x07,0x03,0x03,0x07,0xFE,0xFC,0xF8,
0x01,0x03,0x07,0x0E,0x0C,0x0C,0x0E,0x07,0x03,0x01,

// one (49): w=5, h=12
0xA4,0x00,0x79,
0x03,0x03,0xFF,0xFF,0xFF,
0x00,0x00,0x0F,0x0F,0x0F,

// two (50): w=9, h=12
0x28,0x10,
0x06,0x03,0x03,0x83,0xC3,0xE7,0x7F,0x3E,0x1C,
0x0E,0x0F,0x0F,0x0F,0x0D,0x0C,0x0C,0x0C,0x0C,

// three (51): w=9, h=12
0x28,0x15,
0x06,0x63,0x63,0x63,0x63,0xF3,0xDF,0xDE,0x8E,
0x0E,0x0C,0x0C,0x0C,0x0C,0x0E,0x0F,0x07,0x03,

// four (52): w=10, h=12
0x29,0x0F,
0xC0,0xE0,0xF0,0xB8,0x9C,0x87,0xFF,0xFF,0xFF,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x0F,0x0F,0x0F,0x01,

// five (53): w=8, h=12
0x27,0x16,
0x3F,0x3F,0x33,0x33,0x73,0xE3,0xE3,0xC3,
0x0E,0x0C,0x0C,0x0C,0x0E,0x0F,0x07,0x03,

// six (54): w=10, h=12
0x29,0x0F,
0xF8,0xFC,0xFE,0x6F,0x37,0x33,0x73,0xF3,0xE7,0xC0,
0x01,0x07,0x07,0x0E,0x0C,0x0C,0x0E,0x0F,0x07,0x03,

// seven (55): w=9, h=12
0x28,0x15,
0x03,0x03,0x83,0xC3,0xF3,0x7B,0x1F,0x0F,0x07,
0x08,0x0E,0x0F,0x0F,0x01,0x00,0x00,0x00,0x00,

// eight (56): w=10, h=12
0x29,0x0F,
0x80,0xDE,0xFE,0x7F,0x73,0x63,0xFF,0xFF,0xCE,0x80,
0x03,0x07,0x0F,0x0E,0x0C,0x0C,0x0C,0x0F,0x07,0x03,

// nine (57): w=10, h=12
0x29,0x0F,
0x3C,0x7E,0xFF,0xE7,0xC3,0xC3,0x67,0xFE,0xFE,0xF8,
0x00,0x0E,0x0C,0x0C,0x0C,0x0E,0x0F,0x07,0x03,0x01,

// colon (58): w=3, h=9
0x22,0x70,
0xC7,0xC7,0xC7,
0x01,0x01,0x01,

// semicolon (59): w=3, h=12
0x22,0x70,
0xC7,0xC7,0xC7,
0x09,0x0F,0x07,

// less (60): w=10, h=10
0x29,0x4F,
0x10,0x30,0x30,0x78,0x78,0xCC,0xCC,0x86,0x86,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,

// equal (61): w=10, h=6
0x09,0x8F,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,

// greater (62): w=10, h=10
0x29,0x4F,
0x03,0x86,0x86,0xCC,0xCC,0x78,0x78,0x30,0x30,0x20,
0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=8, h=12
0x27,0x0F,
0x07,0x03,0x83,0xC3,0xE3,0x3F,0x1E,0x0E,
0x00,0x00,0x0D,0x0D,0x0D,0x00,0x00,0x00,

// at (64): w=14, h=12
0x2D,0x0D,
0xE0,0x18,0x0C,0xC6,0xE2,0x13,0x09,0x89,0xC9,0xF9,
0x19,0x02,0x84,0x78,
0x01,0x02,0x04,0x09,0x0B,0x0B,0x09,0x09,0x07,0x03,
0x02,0x02,0x01,0x00,

// A (65): w=13, h=12
0x2C,0x08,
0x00,0x00,0xC0,0xF8,0xBE,0x8F,0x8F,0xFF,0xFE,0xF8,
0xC0,0x00,0x00,
0x08,0x0F,0x07,0x01,0x01,0x01,0x01,0x01,0x01,0x0F,
0x0F,0x0F,0x08,

// B (66): w=9, h=12
0x28,0x14,
0xFF,0xFF,0xFF,0x63,0x63,0xFF,0xDF,0xCE,0x80,
0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0F,0x07,0x07,

// C (67): w=11, h=12
0x2A,0x0E,
0xF8,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x03,0x03,
0x07,
0x01,0x03,0x07,0x07,0x0E,0x0C,0x0C,0x0C,0x0C,0x0C,
0x06,

// D (68): w=12, h=12
0x2B,0x0F,
0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x07,0x0F,0xFE,
0xFC,0xF8,
0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0E,0x07,
0x03,0x01,

// E (69): w=9, h=12
0x28,0x0F,
0xFF,0xFF,0xFF,0x63,0x63,0x63,0x63,0x63,0x03,
0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,

// F (70): w=8, h=12
0x27,0x14,
0xFF,0xFF,0xFF,0x63,0x63,0x63,0x63,0x03,
0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,

// G (71): w=11, h=12
0x2A,0x0F,
0xF8,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0xC3,0xC3,
0xC7,
0x01,0x03,0x07,0x07,0x0E,0x0C,0x0C,0x0C,0x0F,0x0F,
0x0F,

// H (72): w=11, h=12
0x2A,0x10,
0xFF,0xFF,0xFF,0x60,0x60,0x60,0x60,0x60,0xFF,0xFF,
0xFF,
0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,
0x0F,

// I (73): w=3, h=12
0x22,0x15,
0xFF,0xFF,0xFF,
0x0F,0x0F,0x0F,

// J (74): w=7, h=15
0x26,0x0A,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x60,0x60,0x60,0x60,0x7F,0x3F,0x1F,

// K (75): w=11, h=12
0x2A,0x14,
0xFF,0xFF,0xFF,0x60,0xF0,0xF8,0xDE,0x87,0x03,0x01,
0x00,
0x0F,0x0F,0x0F,0x00,0x00,0x03,0x07,0x0F,0x0E,0x0C,
0x08,

// L (76): w=9, h=12
0x28,0x0F,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,

// M (77): w=13, h=12
0x2C,0x15,
0xFF,0xFF,0x1F,0xFF,0xFE,0xF0,0x80,0xE0,0xFC,0x1F,
0xFF,0xFF,0xFF,
0x0F,0x0F,0x00,0x00,0x03,0x07,0x07,0x07,0x00,0x00,
0x0F,0x0F,0x0F,

// N (78): w=10, h=12
0x29,0x15,
0xFF,0xFF,0x1F,0x3E,0xF8,0xF0,0xC0,0x80,0xFF,0xFF,
0x0F,0x0F,0x00,0x00,0x00,0x01,0x07,0x0F,0x0F,0x0F,

// O (79): w=13, h=12
0x2C,0x0F,
0xF8,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x07,0x0E,
0xFE,0xFC,0xF8,
0x01,0x03,0x07,0x07,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,
0x07,0x03,0x01,

// P (80): w=9, h=12
0x28,0x14,
0xFF,0xFF,0xFF,0x63,0x63,0x73,0x7F,0x3F,0x1E,
0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=15, h=15
0x2E,0x0D,
0xF8,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x07,0x0E,
0xFE,0xFC,0xF8,0x00,0x00,
0x01,0x03,0x07,0x07,0x0E,0x0C,0x0C,0x0C,0x1E,0x3F,
0x37,0x73,0x71,0x30,0x10,

// R (82): w=11, h=12
0x2A,0x0E,
0xFF,0xFF,0xFF,0x63,0xE3,0xF3,0xFF,0xBE,0x1E,0x00,
0x00,
0x0F,0x0F,0x0F,0x00,0x00,0x01,0x07,0x0F,0x0E,0x0C,
0x08,

// S (83): w=9, h=12
0x28,0x0E,
0x1C,0x3E,0x7F,0x7F,0x73,0xE3,0xE3,0xC7,0x80,
0x0E,0x0C,0x0C,0x0C,0x0C,0x0C,0x0F,0x07,0x03,

// T (84): w=11, h=12
0x2A,0x0E,
0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,0x03,0x03,0x03,
0x03,
0x00,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x00,0x00,0x00,
0x00,

// U (85): w=10, h=12
0x29,0x15,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x03,0x07,0x0F,0x0E,0x0C,0x0C,0x0E,0x0F,0x07,0x03,

// V (86): w=12, h=12
0x2B,0x08,
0x01,0x0F,0x3F,0xFE,0xF8,0xC0,0x00,0xC0,0xF0,0x7E,
0x0F,0x01,
0x00,0x00,0x00,0x01,0x0F,0x0F,0x0E,0x0F,0x03,0x00,
0x00,0x00,

// W (87): w=16, h=12
0x2F,0x08,
0x03,0x3F,0xFF,0xFE,0xE0,0x80,0xF8,0x7F,0x7F,0xFF,
0xF8,0x80,0xE0,0xFC,0x3F,0x03,
0x00,0x00,0x03,0x0F,0x0F,0x0F,0x07,0x00,0x00,0x07,
0x0F,0x0F,0x0F,0x03,0x00,0x00,

// X (88): w=11, h=12
0x2A,0x0E,
0x01,0x03,0x0F,0x9F,0xFE,0xF8,0xF8,0xDE,0x0F,0x03,
0x01,
0x08,0x0C,0x0F,0x03,0x01,0x01,0x07,0x0F,0x0F,0x0C,
0x08,

// Y (89): w=11, h=12
0x2A,0x0F,
0x01,0x07,0x0F,0x3F,0xFC,0xF0,0xF0,0x3C,0x0F,0x07,
0x01,
0x00,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x00,0x00,0x00,
0x00,

// Z (90): w=9, h=12
0x28,0x0F,
0x03,0x03,0xC3,0xE3,0xFB,0x7F,0x3F,0x0F,0x07,
0x0E,0x0F,0x0F,0x0F,0x0D,0x0C,0x0C,0x0C,0x0C,

// bracketleft (91): w=5, h=15
0x24,0x0F,
0xFF,0xFF,0xFF,0x03,0x03,
0x7F,0x7F,0x7F,0x60,0x60,

// backslash (92): w=10, h=15
0x29,0x08,
0x01,0x07,0x1F,0x7C,0xF0,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x1F,0x7C,0x70,0x40,

// bracketright (93): w=5, h=15
0x24,0x0F,
0x03,0x03,0xFF,0xFF,0xFF,
0x60,0x60,0x7F,0x7F,0x7F,

// asciicircum (94): w=10, h=10
0x29,0x0F,
0x00,0x80,0xE0,0x78,0x1E,0x1F,0x78,0xE0,0x80,0x00,
0x02,0x03,0x01,0x00,0x00,0x00,0x00,0x01,0x03,0x02,

// underscore (95): w=7, h=2
0x86,0x0C,0x56,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=4, h=2
0x83,0x00,0x79,
0x01,0x01,0x03,0x02,

// a (97): w=9, h=9
0x28,0x6F,
0xE0,0xF7,0xF3,0xB3,0xB3,0xFF,0xFF,0xFE,0x80,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// b (98): w=10, h=12
0x29,0x0F,
0xFF,0xFF,0xFF,0x30,0x18,0x18,0x38,0xF8,0xF0,0xE0,
0x0F,0x0F,0x0F,0x04,0x0C,0x0C,0x0E,0x0F,0x07,0x03,

// c (99): w=8, h=9
0x27,0x6E,
0x7C,0xFE,0xFE,0xC7,0x83,0x83,0x83,0x87,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// d (100): w=10, h=12
0x29,0x0F,
0xE0,0xF0,0xF8,0x38,0x18,0x18,0x10,0xFF,0xFF,0xFF,
0x03,0x07,0x0F,0x0E,0x0C,0x0C,0x06,0x0F,0x0F,0x0F,

// e (101): w=9, h=9
0x28,0x6E,
0x7C,0xFE,0xFF,0xDB,0x9B,0x9B,0x9F,0x9E,0xDC,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// f (102): w=7, h=12
0x26,0x0E,
0x18,0xFE,0xFF,0xFF,0x1B,0x1B,0x03,
0x00,0x0F,0x0F,0x0F,0x00,0x00,0x00,

// g (103): w=10, h=12
0x29,0x6F,
0x7C,0xFE,0xFF,0xC7,0x83,0x83,0x42,0xFF,0xFF,0xFF,
0x00,0x06,0x0D,0x0D,0x0D,0x0C,0x0E,0x0F,0x07,0x03,

// h (104): w=9, h=12
0x28,0x10,
0xFF,0xFF,0xFF,0x30,0x18,0x18,0xF8,0xF8,0xF0,
0x0F,0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x0F,

// i (105): w=3, h=12
0x22,0x15,
0xFB,0xFB,0xFB,
0x0F,0x0F,0x0F,

// j (106): w=6, h=15
0x25,0x08,
0x00,0x00,0x00,0xFB,0xFB,0xFB,
0x60,0x60,0x60,0x7F,0x7F,0x3F,

// k (107): w=9, h=12
0x28,0x15,
0xFF,0xFF,0xFF,0x80,0xE0,0xF8,0x38,0x08,0x00,
0x0F,0x0F,0x0F,0x00,0x03,0x0F,0x0F,0x0E,0x08,

// l (108): w=3, h=12
0x22,0x15,
0xFF,0xFF,0xFF,
0x0F,0x0F,0x0F,

// m (109): w=15, h=9
0x2E,0x6F,
0xFF,0xFF,0xFF,0x06,0x03,0x03,0xFF,0xFF,0xFE,0x06,
0x03,0x03,0xFF,0xFF,0xFE,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,0x00,0x01,0x01,0x01,

// n (110): w=9, h=9
0x28,0x70,
0xFF,0xFF,0xFF,0x06,0x03,0x03,0xFF,0xFF,0xFE,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,

// o (111): w=10, h=9
0x29,0x6E,
0x7C,0xFE,0xFE,0xC7,0x83,0x83,0xC7,0xFE,0xFE,0x7C,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// p (112): w=10, h=12
0x29,0x6F,
0xFF,0xFF,0xFF,0x86,0x83,0x83,0xC7,0xFF,0xFE,0x7C,
0x0F,0x0F,0x0F,0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// q (113): w=10, h=12
0x29,0x6F,
0x7C,0xFE,0xFF,0xC7,0x83,0x83,0xC2,0xFF,0xFF,0xFF,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x0F,0x0F,0x0F,

// r (114): w=6, h=9
0x25,0x74,
0xFF,0xFF,0xFF,0x06,0x07,0x07,
0x01,0x01,0x01,0x00,0x00,0x00,

// s (115): w=8, h=9
0x27,0x70,
0xCE,0x9F,0x9F,0xBB,0xB3,0xF3,0xF7,0xE0,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// t (116): w=6, h=11
0x25,0x2E,
0x0C,0xFF,0xFF,0xFF,0x0C,0x0C,
0x00,0x03,0x07,0x07,0x06,0x06,

// u (117): w=9, h=9
0x28,0x70,
0xFF,0xFF,0xFF,0x80,0x80,0xC0,0xFF,0xFF,0xFF,
0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// v (118): w=10, h=9
0x29,0x6E,
0x01,0x0F,0x3F,0xFF,0xF8,0xC0,0xF0,0x7E,0x0F,0x01,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// w (119): w=14, h=9
0x2D,0x6E,
0x03,0x3F,0xFF,0xFC,0xE0,0xFC,0x1F,0x3F,0xFF,0xF8,
0xE0,0xFE,0x1F,0x03,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,
0x01,0x01,0x00,0x00,

// x (120): w=9, h=9
0x28,0x69,
0x01,0x83,0xEF,0x7F,0x7E,0xFC,0xEF,0xC3,0x01,
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,

// y (121): w=11, h=12
0x2A,0x68,
0x01,0x07,0x1F,0xFF,0xFC,0xE0,0xF0,0x7C,0x1F,0x07,
0x01,
0x00,0x08,0x0C,0x0E,0x0F,0x03,0x00,0x00,0x00,0x00,
0x00,

// z (122): w=9, h=9
0x28,0x6E,
0xC3,0xE3,0xF3,0xFB,0xFF,0xBF,0x8F,0x87,0x83,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// braceleft (123): w=5, h=15
0x24,0x0F,
0xC0,0xCE,0xFF,0x7F,0x33,
0x00,0x38,0x7F,0x7F,0x66,

// bar (124): w=2, h=15
0x21,0x0F,
0xFF,0xFF,
0x7F,0x7F,

// braceright (125): w=5, h=15
0x24,0x0F,
0x3F,0x7F,0xFE,0xC0,0xC0,
0x7E,0x7F,0x3F,0x00,0x00,

// asciitilde (126): w=10, h=4
0x09,0xAF,
0x0E,0x0F,0x03,0x03,0x06,0x06,0x0C,0x0C,0x0F,0x07

};
// 1782 bytes
// 1972 bytes with FAST_FONT_INDEX
