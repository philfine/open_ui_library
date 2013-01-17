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

// ncenR14 = "New Century Schoolbook Roman"

const char font_ncenR14[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD0,0x00,
0xE6,0x00,
0xFA,0x00,
0x1A,0x01,
0x36,0x01,
0x39,0x01,
0x4D,0x01,
0x61,0x01,
0x6A,0x01,
0x7E,0x01,
0x84,0x01,
0x8C,0x01,
0x91,0x01,
0x9D,0x01,
0xB1,0x01,
0xC3,0x01,
0xD7,0x01,
0xEB,0x01,
0x01,0x02,
0x15,0x02,
0x29,0x02,
0x3D,0x02,
0x51,0x02,
0x65,0x02,
0x6B,0x02,
0x73,0x02,
0x87,0x02,
0x92,0x02,
0xA6,0x02,
0xB6,0x02,
0xD2,0x02,
0xF0,0x02,
0x0A,0x03,
0x24,0x03,
0x42,0x03,
0x5A,0x03,
0x72,0x03,
0x90,0x03,
0xB0,0x03,
0xBE,0x03,
0xD2,0x03,
0xF2,0x03,
0x0A,0x04,
0x2E,0x04,
0x4C,0x04,
0x6A,0x04,
0x82,0x04,
0xB1,0x04,
0xCF,0x04,
0xE5,0x04,
0xFF,0x04,
0x1D,0x05,
0x3B,0x05,
0x65,0x05,
0x81,0x05,
0x9F,0x05,
0xB5,0x05,
0xC3,0x05,
0xD3,0x05,
0xE1,0x05,
0xF5,0x05,
0x01,0x06,
0x07,0x06,
0x1B,0x06,
0x31,0x06,
0x43,0x06,
0x59,0x06,
0x6B,0x06,
0x7D,0x06,
0x93,0x06,
0xA9,0x06,
0xB3,0x06,
0xC8,0x06,
0xDE,0x06,
0xE8,0x06,
0x0A,0x07,
0x20,0x07,
0x34,0x07,
0x4A,0x07,
0x60,0x07,
0x70,0x07,
0x80,0x07,
0x8E,0x07,
0xA4,0x07,
0xBA,0x07,
0xDA,0x07,
0xEE,0x07,
0x04,0x08,
0x14,0x08,
0x25,0x08,
0x2C,0x08,
0x3D,0x08,

// space (32): w=1, h=1
0x80,0x0D,0x49,
0x00,

// exclam (33): w=2, h=14
0x21,0x10,
0xFF,0x7F,
0x33,0x30,

// quotedbl (34): w=4, h=5
0x03,0x10,
0x1F,0x00,0x00,0x1F,

// numbersign (35): w=10, h=13
0x29,0x29,
0x00,0x10,0x10,0xF0,0x1F,0x10,0xF0,0x1F,0x10,0x10,
0x01,0x01,0x1F,0x01,0x01,0x1F,0x01,0x01,0x01,0x00,

// dollar (36): w=9, h=16
0x28,0x09,
0x38,0x7C,0x66,0xC2,0xFF,0x82,0x82,0x0E,0x0C,
0x18,0x38,0x20,0x20,0xFF,0x21,0x33,0x1F,0x0E,

// percent (37): w=15, h=14
0x2E,0x09,
0x70,0xFC,0x8E,0x83,0x41,0x31,0x0E,0xC4,0x34,0x0C,
0x83,0xC0,0x40,0x40,0x80,
0x00,0x00,0x00,0x00,0x30,0x0C,0x03,0x00,0x1C,0x3F,
0x23,0x20,0x10,0x0C,0x03,

// ampersand (38): w=13, h=14
0x2C,0x09,
0x00,0x80,0xDE,0xF3,0xE1,0xB1,0x1B,0x4E,0x40,0xC0,
0xC0,0x40,0x40,
0x1F,0x3F,0x31,0x20,0x21,0x23,0x17,0x1E,0x1E,0x39,
0x30,0x10,0x08,

// quotesingle (39): w=1, h=5
0x00,0x10,
0x1F,

// parenleft (40): w=6, h=17
0x45,0x09,
0xE0,0xF8,0x1C,0x06,0x02,0x01,
0x0F,0x3F,0x70,0xC0,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,

// parenright (41): w=6, h=17
0x45,0x09,
0x01,0x02,0x06,0x1C,0xF8,0xE0,
0x00,0x80,0xC0,0x70,0x3F,0x0F,
0x01,0x00,0x00,0x00,0x00,0x00,

// asterisk (42): w=7, h=7
0x06,0x10,
0x36,0x14,0x08,0x7F,0x08,0x14,0x36,

// plus (43): w=9, h=9
0x28,0x89,
0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,

// comma (44): w=3, h=5
0x82,0x0C,0x47,
0x10,0x0B,0x07,

// hyphen (45): w=5, h=1
0x84,0x08,0x46,
0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x0C,0x57,
0x03,0x03,

// slash (47): w=5, h=14
0x24,0x09,
0x00,0x00,0xC0,0x38,0x07,
0x30,0x0E,0x01,0x00,0x00,

// zero (48): w=9, h=14
0x28,0x09,
0xF8,0xFE,0x06,0x01,0x01,0x01,0x06,0xFE,0xF8,
0x07,0x1F,0x18,0x20,0x20,0x20,0x18,0x1F,0x07,

// one (49): w=8, h=14
0x27,0x0F,
0x02,0x02,0x02,0xFF,0xFF,0x00,0x00,0x00,
0x20,0x20,0x20,0x3F,0x3F,0x20,0x20,0x20,

// two (50): w=9, h=14
0x28,0x09,
0x0C,0x0E,0x02,0x01,0x01,0x81,0xC3,0x7E,0x3C,
0x30,0x38,0x3C,0x36,0x33,0x31,0x30,0x30,0x3C,

// three (51): w=9, h=14
0x28,0x09,
0x00,0x06,0x07,0x41,0x41,0x41,0xE3,0xBE,0x1C,
0x18,0x38,0x20,0x20,0x20,0x20,0x30,0x1F,0x0F,

// four (52): w=10, h=14
0x29,0x08,
0x00,0x00,0xC0,0x30,0x0C,0x02,0xFF,0xFF,0x00,0x00,
0x04,0x07,0x04,0x04,0x24,0x24,0x3F,0x3F,0x24,0x04,

// five (53): w=9, h=14
0x28,0x09,
0x00,0xFF,0x43,0x23,0x23,0x23,0x63,0xC3,0x81,
0x18,0x38,0x20,0x20,0x20,0x20,0x30,0x1F,0x0F,

// six (54): w=9, h=14
0x28,0x09,
0xF0,0xFC,0x8E,0x42,0x61,0x61,0xE1,0xC7,0x86,
0x0F,0x1F,0x30,0x20,0x20,0x20,0x30,0x1F,0x0F,

// seven (55): w=9, h=14
0x28,0x09,
0x0F,0x03,0x03,0x03,0x83,0xE3,0x7B,0x0F,0x03,
0x00,0x00,0x00,0x3E,0x3F,0x01,0x00,0x00,0x00,

// eight (56): w=9, h=14
0x28,0x09,
0x00,0x3E,0xF3,0x61,0xC1,0xC1,0xE3,0x9E,0x00,
0x0E,0x1F,0x30,0x20,0x20,0x20,0x31,0x1F,0x0F,

// nine (57): w=9, h=14
0x28,0x09,
0x7C,0xFE,0xC3,0x81,0x81,0x81,0x43,0xFE,0xFC,
0x18,0x38,0x21,0x21,0x21,0x10,0x1C,0x0F,0x03,

// colon (58): w=2, h=9
0x21,0xB0,
0x83,0x83,
0x01,0x01,

// semicolon (59): w=3, h=12
0x22,0xAA,
0x00,0x83,0x83,
0x08,0x05,0x03,

// less (60): w=9, h=9
0x28,0x89,
0x10,0x10,0x38,0x28,0x6C,0x44,0xC6,0x82,0x83,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,

// equal (61): w=9, h=4
0x08,0xC9,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=9, h=9
0x28,0x89,
0x83,0x82,0xC6,0x44,0x6C,0x28,0x38,0x10,0x10,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=7, h=14
0x26,0x09,
0x06,0x06,0x01,0x01,0xC3,0x3F,0x1E,
0x00,0x00,0x30,0x33,0x00,0x00,0x00,

// at (64): w=13, h=14
0x2C,0x09,
0xE0,0x18,0x04,0xC2,0xF2,0x39,0x09,0x91,0xF9,0x7A,
0x02,0x8C,0x70,
0x03,0x0C,0x10,0x23,0x27,0x24,0x22,0x23,0x27,0x14,
0x12,0x09,0x00,

// A (65): w=14, h=14
0x2D,0x02,
0x00,0x00,0x00,0x00,0xC0,0x38,0x07,0x3F,0xF8,0xC0,
0x00,0x00,0x00,0x00,
0x20,0x20,0x38,0x27,0x21,0x01,0x01,0x01,0x21,0x27,
0x3F,0x38,0x20,0x20,

// B (66): w=12, h=14
0x2B,0x09,
0x01,0x01,0xFF,0xFF,0x41,0x41,0x41,0x41,0x63,0xBE,
0x9C,0x00,
0x20,0x20,0x3F,0x3F,0x20,0x20,0x20,0x20,0x20,0x30,
0x1F,0x0F,

// C (67): w=12, h=14
0x2B,0x09,
0xF0,0xFC,0x0E,0x02,0x03,0x01,0x01,0x01,0x01,0x02,
0x06,0x1F,
0x03,0x0F,0x1C,0x10,0x30,0x20,0x20,0x20,0x20,0x30,
0x10,0x0C,

// D (68): w=14, h=14
0x2D,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x03,
0x02,0x0E,0xFC,0xF0,
0x20,0x20,0x3F,0x3F,0x20,0x20,0x20,0x20,0x20,0x30,
0x10,0x1C,0x0F,0x03,

// E (69): w=11, h=14
0x2A,0x09,
0x01,0x01,0xFF,0xFF,0x41,0x41,0x41,0xF1,0x01,0x03,
0x1F,
0x20,0x20,0x3F,0x3F,0x20,0x20,0x20,0x21,0x20,0x30,
0x3E,

// F (70): w=11, h=14
0x2A,0x09,
0x01,0x01,0xFF,0xFF,0x41,0x41,0x41,0xF1,0x01,0x03,
0x1F,
0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,0x01,0x00,0x00,
0x00,

// G (71): w=14, h=14
0x2D,0x09,
0xF0,0xFC,0x0E,0x02,0x03,0x01,0x01,0x01,0x01,0x03,
0x02,0x06,0x1F,0x00,
0x03,0x0F,0x1C,0x10,0x30,0x20,0x20,0x20,0x20,0x31,
0x11,0x1F,0x3F,0x01,

// H (72): w=15, h=14
0x2E,0x09,
0x01,0x01,0xFF,0xFF,0x41,0x41,0x40,0x40,0x40,0x41,
0x41,0xFF,0xFF,0x01,0x01,
0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,0x00,0x00,0x20,
0x20,0x3F,0x3F,0x20,0x20,

// I (73): w=6, h=14
0x25,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x20,0x20,0x3F,0x3F,0x20,0x20,

// J (74): w=9, h=14
0x28,0x09,
0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x1C,0x2C,0x20,0x20,0x20,0x1F,0x0F,0x00,0x00,

// K (75): w=15, h=14
0x2E,0x08,
0x01,0x01,0xFF,0xFF,0x81,0xC1,0xE0,0x90,0x09,0x07,
0x03,0x01,0x01,0x00,0x00,
0x20,0x20,0x3F,0x3F,0x20,0x20,0x01,0x03,0x27,0x2E,
0x3C,0x38,0x30,0x20,0x20,

// L (76): w=11, h=14
0x2A,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,
0x20,0x20,0x3F,0x3F,0x20,0x20,0x20,0x20,0x20,0x30,
0x3E,

// M (77): w=17, h=14
0x30,0x09,
0x01,0x01,0xFF,0x03,0x1F,0xFC,0xE0,0x00,0x00,0x00,
0xE0,0x1C,0x03,0xFF,0xFF,0x01,0x01,
0x20,0x20,0x3F,0x20,0x20,0x00,0x07,0x3F,0x38,0x07,
0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,

// N (78): w=14, h=14
0x2D,0x09,
0x01,0x01,0xFF,0x0F,0x1C,0x38,0xF0,0xC0,0x80,0x01,
0x01,0xFF,0x01,0x01,
0x20,0x20,0x3F,0x20,0x20,0x00,0x00,0x01,0x07,0x0E,
0x1C,0x3F,0x00,0x00,

// O (79): w=14, h=14
0x2D,0x09,
0xF0,0xFC,0x0E,0x02,0x03,0x01,0x01,0x01,0x01,0x03,
0x02,0x0E,0xFC,0xF0,
0x03,0x0F,0x1C,0x10,0x30,0x20,0x20,0x20,0x20,0x30,
0x10,0x1C,0x0F,0x03,

// P (80): w=11, h=14
0x2A,0x09,
0x01,0x01,0xFF,0xFF,0x81,0x81,0x81,0x81,0x43,0x7E,
0x3C,
0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,0x00,0x00,0x00,
0x00,

// Q (81): w=15, h=18
0x4E,0x08,
0xF0,0xFC,0x0E,0x02,0x03,0x01,0x01,0x01,0x01,0x03,
0x02,0x0E,0xFC,0xF0,0x00,
0x03,0x0F,0x1C,0x14,0x32,0x22,0x22,0x26,0x3C,0xF0,
0xF0,0x9C,0x0F,0x03,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x03,0x03,0x01,

// R (82): w=14, h=14
0x2D,0x08,
0x01,0x01,0xFF,0xFF,0x41,0x41,0x41,0xC1,0xA3,0x3E,
0x1C,0x00,0x00,0x00,
0x20,0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,0x07,0x1F,
0x3C,0x30,0x20,0x10,

// S (83): w=10, h=14
0x29,0x09,
0x3C,0x7E,0x63,0xE1,0xC1,0xC1,0xC1,0x82,0x8F,0x00,
0x3E,0x18,0x30,0x20,0x20,0x20,0x21,0x31,0x1F,0x0F,

// T (84): w=12, h=14
0x2B,0x09,
0x1F,0x03,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,
0x03,0x1F,
0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,
0x00,0x00,

// U (85): w=14, h=14
0x2D,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x01,
0x01,0xFF,0x01,0x01,
0x00,0x00,0x0F,0x1F,0x30,0x20,0x20,0x20,0x20,0x20,
0x10,0x0F,0x00,0x00,

// V (86): w=14, h=14
0x2D,0x02,
0x01,0x01,0x07,0x3F,0xF9,0xC1,0x00,0x00,0x00,0xC1,
0x39,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x01,0x0F,0x3E,0x30,0x0E,0x01,
0x00,0x00,0x00,0x00,

// W (87): w=20, h=14
0x33,0x02,
0x01,0x01,0x07,0x3F,0xF9,0xC1,0x00,0x01,0xC1,0x3F,
0x3F,0xF9,0xC1,0x00,0x00,0xC1,0x39,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x01,0x0F,0x3C,0x3E,0x01,0x00,
0x00,0x01,0x0F,0x3C,0x3C,0x03,0x00,0x00,0x00,0x00,

// X (88): w=13, h=14
0x2C,0x0E,
0x01,0x01,0x07,0x0F,0x3D,0xF0,0xE0,0xB0,0x1D,0x07,
0x01,0x01,0x00,
0x20,0x20,0x38,0x2C,0x23,0x01,0x01,0x23,0x2F,0x3C,
0x38,0x20,0x20,

// Y (89): w=14, h=14
0x2D,0x02,
0x01,0x01,0x03,0x0F,0x3D,0xF1,0xC0,0x80,0xC0,0x31,
0x0D,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,
0x00,0x00,0x00,0x00,

// Z (90): w=10, h=14
0x29,0x09,
0x1F,0x03,0x01,0x81,0xC1,0xE1,0x79,0x1D,0x0F,0x03,
0x30,0x3C,0x2E,0x27,0x21,0x20,0x20,0x20,0x30,0x3E,

// bracketleft (91): w=4, h=17
0x43,0x0F,
0xFF,0xFF,0x01,0x01,
0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,

// backslash (92): w=7, h=14
0x26,0x10,
0x07,0x1C,0x70,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x07,0x1C,0x30,

// bracketright (93): w=4, h=17
0x43,0x0A,
0x01,0x01,0xFF,0xFF,
0x00,0x00,0xFF,0xFF,
0x01,0x01,0x01,0x01,

// asciicircum (94): w=9, h=9
0x28,0x09,
0x00,0xC0,0x70,0x1C,0x07,0x1C,0x70,0xC0,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// underscore (95): w=9, h=1
0x88,0x0F,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=4, h=3
0x03,0x2F,
0x01,0x03,0x02,0x04,

// a (97): w=9, h=9
0x28,0xA9,
0xC0,0xE6,0x26,0x11,0x11,0x91,0xFE,0xFC,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,

// b (98): w=10, h=14
0x29,0x03,
0x01,0xFF,0xFF,0x40,0x20,0x20,0x20,0x60,0xC0,0x80,
0x00,0x3F,0x1F,0x10,0x20,0x20,0x20,0x30,0x1F,0x0F,

// c (99): w=8, h=9
0x27,0xA9,
0x7C,0xFE,0x83,0x01,0x01,0x01,0x86,0xC6,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// d (100): w=10, h=14
0x29,0x09,
0x80,0xC0,0x60,0x20,0x20,0x20,0x41,0xFF,0xFF,0x00,
0x0F,0x1F,0x30,0x20,0x20,0x20,0x10,0x3F,0x3F,0x20,

// e (101): w=8, h=9
0x27,0xA9,
0x7C,0xFE,0x93,0x11,0x11,0x13,0x9E,0xDC,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,

// f (102): w=8, h=14
0x27,0x07,
0x20,0x20,0xFC,0xFE,0x23,0x21,0x07,0x06,
0x00,0x20,0x3F,0x3F,0x20,0x00,0x00,0x00,

// g (103): w=10, h=14
0x29,0x89,
0x00,0x98,0x7C,0x66,0x42,0x42,0x66,0x3E,0x1B,0x03,
0x18,0x35,0x23,0x23,0x23,0x23,0x23,0x37,0x1E,0x0C,

// h (104): w=10, h=14
0x29,0x09,
0x01,0xFF,0xFF,0x40,0x20,0x20,0x60,0xE0,0xC0,0x00,
0x20,0x3F,0x3F,0x20,0x00,0x00,0x20,0x3F,0x3F,0x20,

// i (105): w=4, h=13
0x23,0x29,
0x10,0xF3,0xF3,0x00,
0x10,0x1F,0x1F,0x10,

// j (106): w=6, h=17
0xC5,0x01,0x17,
0x00,0x00,0x00,0x10,0xF3,0xF3,
0xC0,0xC0,0x00,0x00,0xFF,0x7F,
0x00,0x01,0x01,0x01,0x00,0x00,

// k (107): w=10, h=14
0x29,0x08,
0x01,0xFF,0xFF,0x00,0x00,0xA0,0x60,0x20,0x20,0x00,
0x20,0x3F,0x3F,0x22,0x07,0x2C,0x38,0x30,0x20,0x20,

// l (108): w=4, h=14
0x23,0x09,
0x01,0xFF,0xFF,0x00,
0x20,0x3F,0x3F,0x20,

// m (109): w=16, h=9
0x2F,0xA9,
0x01,0xFF,0xFF,0x02,0x01,0x01,0x03,0xFF,0xFE,0x02,
0x01,0x01,0x03,0xFF,0xFE,0x00,
0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,
0x00,0x00,0x01,0x01,0x01,0x01,

// n (110): w=10, h=9
0x29,0xA9,
0x01,0xFF,0xFF,0x02,0x01,0x01,0x03,0xFF,0xFE,0x00,
0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,

// o (111): w=9, h=9
0x28,0xA9,
0x7C,0xFE,0x83,0x01,0x01,0x01,0x83,0xFE,0x7C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// p (112): w=10, h=13
0x29,0xA9,
0x01,0xFF,0xFF,0x82,0x01,0x01,0x01,0x83,0xFE,0x7C,
0x10,0x1F,0x1F,0x10,0x01,0x01,0x01,0x01,0x00,0x00,

// q (113): w=10, h=13
0x29,0xA8,
0x7C,0xFE,0x83,0x01,0x01,0x01,0x82,0xFE,0xFF,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x10,0x1F,0x1F,0x10,

// r (114): w=7, h=9
0x26,0xA9,
0x01,0xFF,0xFF,0x04,0x02,0x03,0x07,
0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// s (115): w=7, h=9
0x26,0xA9,
0xCE,0x9B,0x19,0x11,0x31,0xB2,0xE7,
0x01,0x00,0x01,0x01,0x01,0x01,0x00,

// t (116): w=6, h=12
0x25,0x48,
0x08,0xFF,0xFF,0x08,0x08,0x00,
0x00,0x07,0x0F,0x08,0x08,0x04,

// u (117): w=10, h=9
0x29,0xA9,
0x01,0xFF,0xFF,0x80,0x00,0x00,0x81,0xFF,0xFF,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x01,

// v (118): w=10, h=9
0x29,0xA9,
0x01,0x07,0x1F,0x79,0xE0,0xC0,0x60,0x19,0x07,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,

// w (119): w=15, h=9
0x2E,0xA9,
0x01,0x07,0x3F,0xF9,0xC0,0xE1,0x19,0x07,0x3F,0xF9,
0xC0,0xE1,0x19,0x07,0x01,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,

// x (120): w=9, h=9
0x28,0xA9,
0x01,0x83,0x47,0x2D,0x38,0x68,0xC5,0x83,0x01,
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,

// y (121): w=10, h=13
0x29,0xA9,
0x01,0x03,0x0F,0x3D,0xF0,0xC0,0x30,0x0D,0x03,0x01,
0x18,0x18,0x10,0x0C,0x03,0x00,0x00,0x00,0x00,0x00,

// z (122): w=7, h=9
0x26,0xA9,
0x87,0xC1,0x61,0x39,0x1D,0x87,0xC3,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// braceleft (123): w=5, h=17
0x44,0x09,
0x00,0xFC,0x7E,0x01,0x01,
0x01,0x7E,0xFC,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,

// bar (124): w=2, h=14
0xA1,0x00,0x8A,
0xFF,0xFF,
0x3F,0x3F,

// braceright (125): w=5, h=17
0x44,0x09,
0x01,0x01,0x7E,0xFC,0x00,
0x00,0x00,0xFC,0x7E,0x01,
0x01,0x01,0x00,0x00,0x00,

// asciitilde (126): w=10, h=3
0x09,0xE9,
0x04,0x06,0x03,0x01,0x03,0x06,0x04,0x06,0x03,0x01

};
// 1931 bytes
// 2121 bytes with FAST_FONT_INDEX
