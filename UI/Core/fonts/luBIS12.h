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

const char font_luBIS12[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD2,0x00,
0xDC,0x00,
0xF4,0x00,
0x0A,0x01,
0x28,0x01,
0x44,0x01,
0x49,0x01,
0x59,0x01,
0x69,0x01,
0x72,0x01,
0x88,0x01,
0x8F,0x01,
0x95,0x01,
0x9C,0x01,
0xB9,0x01,
0xD1,0x01,
0xE0,0x01,
0xF8,0x01,
0x0E,0x02,
0x24,0x02,
0x3C,0x02,
0x54,0x02,
0x6A,0x02,
0x80,0x02,
0x98,0x02,
0xA4,0x02,
0xB2,0x02,
0xCA,0x02,
0xD7,0x02,
0xEF,0x02,
0x01,0x03,
0x1F,0x03,
0x39,0x03,
0x4F,0x03,
0x69,0x03,
0x85,0x03,
0x9D,0x03,
0xB5,0x03,
0xCF,0x03,
0xEB,0x03,
0xF9,0x03,
0x0F,0x04,
0x29,0x04,
0x3D,0x04,
0x5F,0x04,
0x7B,0x04,
0x99,0x04,
0xB1,0x04,
0xCF,0x04,
0xE7,0x04,
0xFD,0x04,
0x19,0x05,
0x33,0x05,
0x4D,0x05,
0x6F,0x05,
0x8B,0x05,
0xA3,0x05,
0xBD,0x05,
0xCD,0x05,
0xDB,0x05,
0xEB,0x05,
0x01,0x06,
0x0C,0x06,
0x13,0x06,
0x2B,0x06,
0x43,0x06,
0x57,0x06,
0x71,0x06,
0x85,0x06,
0x9C,0x06,
0xB4,0x06,
0xCA,0x06,
0xD8,0x06,
0xEE,0x06,
0x06,0x07,
0x14,0x07,
0x36,0x07,
0x4C,0x07,
0x62,0x07,
0x7A,0x07,
0x92,0x07,
0xA6,0x07,
0xBA,0x07,
0xC8,0x07,
0xDE,0x07,
0xF4,0x07,
0x12,0x08,
0x2A,0x08,
0x44,0x08,
0x5A,0x08,
0x6A,0x08,
0x76,0x08,
0x86,0x08,

// space (32): w=1, h=1
0x80,0x0B,0x4A,
0x00,

// exclam (33): w=6, h=12
0x25,0x0D,
0x00,0x80,0xFF,0xFF,0x3F,0x03,
0x0C,0x0C,0x0C,0x0C,0x00,0x00,

// quotedbl (34): w=8, h=6
0x07,0x18,
0x0F,0x3F,0x3F,0x00,0x00,0x3F,0x3F,0x0F,

// numbersign (35): w=11, h=12
0x2A,0x13,
0x80,0x98,0xD8,0xF8,0xFC,0x9F,0xFF,0xF9,0xBE,0x9F,
0x1B,
0x0D,0x0F,0x07,0x09,0x0F,0x0F,0x03,0x01,0x01,0x01,
0x00,

// dollar (36): w=10, h=14
0x29,0x14,
0x00,0x00,0x0E,0x3F,0xFF,0xFB,0xFF,0xC3,0x83,0x07,
0x0E,0x0C,0x0C,0xFC,0xFF,0x0C,0x0F,0x07,0x03,0x00,

// percent (37): w=14, h=12
0x2D,0x13,
0x1C,0x3E,0x37,0x33,0xBF,0xDF,0xE4,0x70,0xB8,0xDC,
0xCE,0xC7,0xC3,0x81,
0x08,0x0C,0x0E,0x07,0x03,0x01,0x00,0x02,0x0F,0x0F,
0x0C,0x0E,0x07,0x03,

// ampersand (38): w=13, h=12
0x2C,0x0E,
0x80,0xC0,0xC0,0x6C,0x3E,0xFF,0xFF,0xF3,0x9F,0x0F,
0xC6,0xE0,0x60,
0x07,0x07,0x0F,0x0E,0x0C,0x0C,0x0D,0x07,0x0F,0x0F,
0x09,0x08,0x00,

// quotesingle (39): w=3, h=5
0x02,0x18,
0x0F,0x1F,0x1F,

// parenleft (40): w=7, h=15
0x26,0x0D,
0xC0,0xF0,0xF8,0x7C,0x0E,0x06,0x01,
0x0F,0x1F,0x3F,0x70,0x00,0x00,0x00,

// parenright (41): w=7, h=15
0x26,0x08,
0x00,0x00,0x00,0xCF,0xFE,0xFC,0xF0,
0x60,0x30,0x3C,0x1F,0x0F,0x03,0x00,

// asterisk (42): w=7, h=6
0x06,0x13,
0x14,0x36,0x1C,0x03,0x3F,0x15,0x06,

// plus (43): w=10, h=10
0x29,0x54,
0x30,0x30,0x30,0x30,0xF8,0x7F,0x33,0x30,0x30,0x30,
0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,

// comma (44): w=4, h=6
0x83,0x09,0x56,
0x24,0x37,0x1F,0x07,

// hyphen (45): w=4, h=2
0x03,0xD3,
0x03,0x03,0x03,0x03,

// period (46): w=4, h=3
0x83,0x09,0x56,
0x06,0x07,0x07,0x03,

// slash (47): w=13, h=15
0xAC,0x00,0x42,
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xF0,0x38,0x1E,
0x0F,0x03,0x01,
0x40,0x60,0x78,0x3C,0x0E,0x07,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,

// zero (48): w=11, h=12
0x2A,0x13,
0xE0,0xF8,0xFC,0x7E,0x07,0x03,0x03,0xF7,0xFF,0xFE,
0x7C,
0x03,0x07,0x0F,0x0E,0x0C,0x0C,0x07,0x07,0x03,0x01,
0x00,

// one (49): w=6, h=12
0xA5,0x00,0x87,
0x02,0xE3,0xFF,0xFF,0x7F,0x03,
0x0C,0x0F,0x0F,0x07,0x00,0x00,

// two (50): w=11, h=12
0x2A,0x0E,
0x00,0x00,0x06,0x83,0xC3,0xC3,0xE3,0x77,0x3F,0x3E,
0x1E,
0x0C,0x0E,0x0F,0x0F,0x0D,0x0C,0x0C,0x0C,0x0C,0x04,
0x00,

// three (51): w=10, h=12
0x29,0x14,
0x00,0x00,0x66,0x63,0x63,0xE3,0xF7,0xDF,0x9F,0x0E,
0x0E,0x0C,0x0C,0x0C,0x0C,0x0E,0x0F,0x07,0x03,0x00,

// four (52): w=10, h=12
0x29,0x0F,
0x80,0xC0,0xE0,0xF0,0xB8,0x8C,0xF6,0xFF,0xFF,0x83,
0x01,0x01,0x01,0x01,0x01,0x0F,0x0F,0x0F,0x01,0x01,

// five (53): w=11, h=12
0x2A,0x13,
0x00,0x20,0x3E,0x3F,0x33,0x73,0xF3,0xE3,0xC3,0x83,
0x03,
0x0E,0x0C,0x0C,0x0C,0x0C,0x0E,0x0F,0x07,0x07,0x01,
0x00,

// six (54): w=11, h=12
0x2A,0x13,
0xE0,0xF8,0xFC,0x7E,0x2E,0x37,0x73,0xF3,0xF3,0xE3,
0x07,
0x03,0x07,0x0F,0x0E,0x0C,0x0C,0x0E,0x07,0x07,0x01,
0x00,

// seven (55): w=10, h=12
0x29,0x19,
0x02,0x03,0x83,0xC3,0xF3,0x7B,0x3F,0x0F,0x07,0x03,
0x0C,0x0F,0x0F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

// eight (56): w=10, h=12
0x29,0x14,
0x80,0xC0,0xDC,0x7E,0x7F,0x73,0xF3,0xFF,0xDF,0x0E,
0x07,0x07,0x0F,0x0C,0x0C,0x0C,0x0E,0x07,0x03,0x00,

// nine (57): w=11, h=12
0x2A,0x13,
0x00,0x78,0xFE,0xFE,0xE7,0xC3,0x43,0xE7,0xFF,0xFE,
0x7C,
0x0E,0x0C,0x0C,0x0C,0x0C,0x0E,0x07,0x07,0x03,0x01,
0x00,

// colon (58): w=5, h=9
0x24,0x6E,
0x80,0xC6,0xC7,0xC7,0x03,
0x01,0x01,0x01,0x00,0x00,

// semicolon (59): w=6, h=12
0x25,0x6D,
0x00,0xC0,0xC7,0xC7,0x47,0x03,
0x08,0x0D,0x0F,0x07,0x00,0x00,

// less (60): w=11, h=10
0x2A,0x53,
0x10,0x30,0x30,0x78,0x78,0xD8,0x8C,0x8C,0x06,0x06,
0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x00,
0x00,

// equal (61): w=11, h=6
0x0A,0x8E,
0x30,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x03,

// greater (62): w=11, h=10
0x2A,0x4E,
0x00,0x80,0x83,0xC6,0xC6,0x6C,0x78,0x78,0x30,0x30,
0x20,
0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// question (63): w=8, h=12
0x27,0x13,
0x07,0x83,0xC3,0xE3,0x7F,0x3F,0x1F,0x0E,
0x0C,0x0D,0x0D,0x05,0x00,0x00,0x00,0x00,

// at (64): w=14, h=12
0x2D,0x0D,
0xE0,0x38,0x0C,0x86,0xE2,0x13,0x09,0x89,0xE9,0xF9,
0x09,0x02,0x86,0xF8,
0x01,0x02,0x04,0x09,0x0B,0x0B,0x09,0x08,0x07,0x03,
0x02,0x03,0x01,0x00,

// A (65): w=12, h=12
0x2B,0x0E,
0x00,0x00,0x80,0xC0,0xF0,0xBC,0x8F,0x9F,0xFF,0xFF,
0xF0,0x00,
0x08,0x0E,0x0F,0x03,0x01,0x01,0x01,0x01,0x03,0x0F,
0x0F,0x0E,

// B (66): w=10, h=12
0x29,0x13,
0x00,0xF0,0xFF,0xFF,0x6F,0x63,0xF3,0xDF,0x9F,0x0E,
0x0E,0x0F,0x0F,0x0D,0x0C,0x0C,0x0F,0x07,0x07,0x00,

// C (67): w=12, h=12
0x2B,0x13,
0xE0,0xF8,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x03,
0x03,0x07,
0x03,0x07,0x0F,0x0F,0x0E,0x0C,0x0C,0x0C,0x0C,0x06,
0x00,0x00,

// D (68): w=13, h=12
0x2C,0x13,
0x00,0xF0,0xFF,0xFF,0x1F,0x03,0x03,0x03,0x03,0xFF,
0xFF,0xFE,0x7C,
0x0E,0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0E,0x07,0x07,
0x03,0x01,0x00,

// E (69): w=11, h=12
0x2A,0x0D,
0x00,0xE0,0xFF,0xFF,0x7F,0x63,0x63,0x63,0x63,0x03,
0x03,
0x0C,0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,
0x00,

// F (70): w=11, h=12
0x2A,0x0C,
0x00,0xE0,0xFF,0xFF,0x7F,0x63,0x63,0x63,0x63,0x03,
0x03,
0x0C,0x0F,0x0F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// G (71): w=12, h=12
0x2B,0x13,
0xE0,0xF8,0xFC,0xFE,0x0E,0x07,0x03,0x03,0xC3,0xC3,
0xC3,0x07,
0x03,0x07,0x0F,0x0F,0x0E,0x0C,0x0C,0x0F,0x0F,0x07,
0x00,0x00,

// H (72): w=13, h=12
0x2C,0x13,
0x00,0xF0,0xFF,0xFF,0x7F,0x61,0x60,0x60,0xE0,0xFC,
0xFF,0xFF,0x07,
0x0E,0x0F,0x0F,0x03,0x00,0x00,0x00,0x08,0x0F,0x0F,
0x0F,0x00,0x00,

// I (73): w=6, h=12
0x25,0x0D,
0x00,0xE0,0xFF,0xFF,0x7F,0x03,
0x0C,0x0F,0x0F,0x0F,0x00,0x00,

// J (74): w=10, h=15
0x29,0x07,
0x00,0x00,0x00,0x00,0x00,0xC0,0xFE,0xFF,0x7F,0x03,
0x60,0x60,0x60,0x60,0x78,0x3F,0x3F,0x0F,0x00,0x00,

// K (75): w=12, h=12
0x2B,0x0E,
0x00,0xE0,0xFF,0xFF,0x7F,0xE3,0xF8,0xFC,0x8E,0x07,
0x03,0x01,
0x0C,0x0F,0x0F,0x07,0x00,0x00,0x03,0x07,0x0F,0x0F,
0x0C,0x08,

// L (76): w=9, h=12
0x28,0x14,
0x00,0xF0,0xFF,0xFF,0x1F,0x01,0x00,0x00,0x00,
0x0E,0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,

// M (77): w=16, h=12
0x2F,0x0D,
0x00,0xE0,0xFF,0x7F,0x1F,0xFF,0xFF,0xC0,0xC0,0xE0,
0x78,0x9E,0xFF,0xFF,0x7F,0x03,
0x0C,0x0F,0x0F,0x00,0x00,0x07,0x07,0x07,0x03,0x00,
0x08,0x0F,0x0F,0x0F,0x00,0x00,

// N (78): w=13, h=12
0x2C,0x0D,
0x00,0xE0,0xFF,0x7F,0x1F,0x7E,0xF8,0xE0,0x80,0xE0,
0xFF,0x7F,0x03,
0x0C,0x0F,0x0F,0x00,0x00,0x00,0x01,0x07,0x0F,0x0F,
0x0F,0x00,0x00,

// O (79): w=14, h=12
0x2D,0x13,
0xE0,0xF8,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x87,
0xFF,0xFE,0xFE,0x38,
0x03,0x07,0x07,0x0F,0x0C,0x0C,0x0C,0x0C,0x06,0x07,
0x03,0x01,0x00,0x00,

// P (80): w=11, h=12
0x2A,0x0D,
0x00,0xE0,0xFF,0xFF,0x7F,0x63,0x63,0x73,0x3F,0x1F,
0x0E,
0x0C,0x0F,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// Q (81): w=14, h=15
0x2D,0x13,
0xE0,0xF8,0xFC,0xFE,0x0E,0x07,0x03,0x03,0x03,0x87,
0xFF,0xFE,0xFE,0x38,
0x03,0x07,0x07,0x0F,0x0C,0x0C,0x0C,0x1C,0x3E,0x37,
0x73,0x71,0x20,0x20,

// R (82): w=11, h=12
0x2A,0x0E,
0x00,0xE0,0xFF,0xFF,0x7F,0xE3,0xE3,0xF3,0x3F,0x1F,
0x0E,
0x0C,0x0F,0x0F,0x03,0x00,0x00,0x07,0x0F,0x0F,0x0C,
0x00,

// S (83): w=10, h=12
0x29,0x0E,
0x00,0x00,0x3E,0x3E,0x7F,0xF3,0xE3,0xC3,0xC3,0x07,
0x0E,0x0E,0x0C,0x0C,0x0C,0x0E,0x07,0x07,0x03,0x00,

// T (84): w=13, h=12
0x2C,0x12,
0x03,0x03,0x03,0x83,0xFB,0xFF,0xFF,0x0F,0x03,0x03,
0x03,0x03,0x03,
0x00,0x00,0x00,0x0F,0x0F,0x0F,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,

// U (85): w=12, h=12
0x2B,0x13,
0xE0,0xFE,0xFF,0x7F,0x03,0x00,0x00,0x00,0xF8,0xFF,
0x7F,0x07,
0x03,0x07,0x0F,0x0E,0x0C,0x0C,0x0C,0x0F,0x07,0x03,
0x00,0x00,

// V (86): w=12, h=12
0x2B,0x18,
0x07,0xFF,0xFF,0xFE,0x80,0x00,0xC0,0xF0,0x3C,0x0F,
0x07,0x01,
0x00,0x01,0x0F,0x0F,0x0F,0x0F,0x03,0x00,0x00,0x00,
0x00,0x00,

// W (87): w=16, h=12
0x2F,0x18,
0xFF,0xFF,0xFF,0x00,0xC0,0xF8,0x3E,0xFF,0xFF,0xFF,
0xC0,0xF0,0x7C,0x1F,0x07,0x01,
0x07,0x0F,0x0F,0x0F,0x03,0x00,0x00,0x0F,0x0F,0x0F,
0x07,0x01,0x00,0x00,0x00,0x00,

// X (88): w=13, h=12
0x2C,0x07,
0x00,0x00,0x00,0x03,0x9F,0xFF,0xFE,0xF8,0xDC,0x0E,
0x07,0x03,0x01,
0x08,0x0C,0x0E,0x07,0x03,0x01,0x03,0x0F,0x0F,0x0E,
0x08,0x00,0x00,

// Y (89): w=11, h=12
0x2A,0x18,
0x01,0x0F,0xFF,0xFE,0xF8,0xF0,0x3C,0x0E,0x07,0x03,
0x01,
0x00,0x08,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,

// Z (90): w=12, h=12
0x2B,0x0D,
0x00,0x00,0x02,0x83,0xE3,0xF3,0xFB,0x7F,0x3F,0x0F,
0x07,0x03,
0x0C,0x0E,0x0F,0x0F,0x0F,0x0D,0x0C,0x0C,0x0C,0x0C,
0x00,0x00,

// bracketleft (91): w=7, h=15
0x26,0x0D,
0x00,0x80,0xFC,0xFF,0x1F,0x03,0x03,
0x70,0x7F,0x7F,0x63,0x00,0x00,0x00,

// backslash (92): w=6, h=15
0x25,0x1B,
0x03,0x3F,0xFE,0xE0,0x00,0x00,
0x00,0x00,0x03,0x3F,0x7E,0x60,

// bracketright (93): w=7, h=15
0x26,0x0D,
0x00,0x00,0x00,0xE3,0xFF,0xFF,0x07,
0x60,0x60,0x7C,0x7F,0x1F,0x00,0x00,

// asciicircum (94): w=10, h=10
0x29,0x0F,
0x00,0x00,0xC0,0xE0,0x70,0x1C,0x1F,0xFC,0xE0,0x00,
0x02,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x03,0x03,

// underscore (95): w=8, h=2
0x87,0x0C,0x46,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,

// grave (96): w=4, h=2
0x83,0x00,0xA6,
0x01,0x01,0x03,0x02,

// a (97): w=11, h=9
0x2A,0x6E,
0xE0,0xF8,0xFC,0x9E,0xC7,0x63,0xF3,0xFF,0xFF,0x7F,
0x03,
0x00,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,

// b (98): w=11, h=12
0x2A,0x0E,
0x00,0xE0,0xFE,0xFF,0xBF,0x67,0x30,0xB8,0xF8,0xF8,
0x70,
0x0C,0x0F,0x0F,0x0F,0x0C,0x0C,0x0E,0x07,0x03,0x01,
0x00,

// c (99): w=9, h=9
0x28,0x6D,
0xF0,0xFC,0xFE,0xFE,0x87,0x83,0x83,0xC3,0x07,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// d (100): w=12, h=12
0x2B,0x0D,
0x00,0xC0,0xE0,0xF0,0x38,0x18,0x98,0xF8,0xFF,0xFF,
0x7F,0x03,
0x07,0x0F,0x0F,0x0C,0x06,0x03,0x0D,0x0F,0x0F,0x07,
0x00,0x00,

// e (101): w=9, h=9
0x28,0x6E,
0xF0,0xFC,0xFE,0xBE,0xB3,0xBB,0x9F,0x9F,0xCE,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

// f (102): w=10, h=15
0xA9,0x00,0x52,
0x00,0x18,0xF8,0xFE,0xFE,0x1F,0x1B,0x1B,0x03,0x07,
0x60,0x7F,0x7F,0x3F,0x01,0x00,0x00,0x00,0x00,0x00,

// g (103): w=11, h=12
0x2A,0x6D,
0x00,0xF8,0xFC,0xFE,0xC6,0x63,0xB3,0xFF,0xFF,0xFF,
0x07,
0x0E,0x0D,0x0D,0x0D,0x0C,0x0C,0x0F,0x07,0x03,0x00,
0x00,

// h (104): w=10, h=12
0x29,0x0E,
0x00,0xE0,0xFF,0xFF,0xDF,0x61,0xB0,0xF8,0xF8,0xF0,
0x0C,0x0F,0x0F,0x03,0x00,0x08,0x0F,0x0F,0x0F,0x00,

// i (105): w=6, h=12
0x25,0x0D,
0x00,0xE0,0xFA,0xFB,0x3B,0x03,
0x0C,0x0F,0x0F,0x07,0x00,0x00,

// j (106): w=10, h=15
0x29,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0xFA,0xFB,0x3B,0x03,
0x70,0x60,0x60,0x60,0x7E,0x3F,0x1F,0x07,0x00,0x00,

// k (107): w=11, h=12
0x2A,0x0D,
0x00,0xE0,0xFE,0xFF,0xBF,0xC3,0xE0,0xF0,0x38,0x18,
0x08,
0x0C,0x0F,0x0F,0x07,0x00,0x03,0x0F,0x0F,0x0E,0x08,
0x00,

// l (108): w=6, h=12
0x25,0x0D,
0x00,0xE0,0xFE,0xFF,0x7F,0x03,
0x0C,0x0F,0x0F,0x07,0x00,0x00,

// m (109): w=16, h=9
0x2F,0x6E,
0x80,0xFC,0xFF,0x7F,0x1B,0x0C,0xE6,0xFF,0xFF,0x3F,
0x18,0x06,0xF7,0xFF,0xFF,0x0E,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,

// n (110): w=10, h=9
0x29,0x6E,
0xC0,0xFE,0xFF,0x7F,0x1B,0x0C,0xFE,0xFF,0xFF,0x1E,
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,0x00,

// o (111): w=10, h=9
0x29,0x6E,
0xF0,0xFC,0xFE,0xCE,0x87,0x83,0xC3,0xFF,0x7F,0x3E,
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// p (112): w=11, h=12
0x2A,0x6E,
0x00,0xF0,0xFF,0xFF,0xBF,0x8D,0xC6,0xF3,0x7F,0x3F,
0x1E,
0x0E,0x0F,0x0F,0x07,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,

// q (113): w=11, h=12
0x2A,0x6E,
0xE0,0xF8,0xFC,0xDE,0xC7,0x63,0xD3,0xFF,0xFF,0x7F,
0x03,
0x00,0x01,0x01,0x01,0x00,0x0C,0x0F,0x0F,0x0F,0x00,
0x00,

// r (114): w=9, h=9
0x28,0x6D,
0xC0,0xFE,0xFF,0x7F,0x1B,0x0C,0x06,0x07,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// s (115): w=9, h=9
0x28,0x6D,
0xC0,0xC0,0x8E,0x9F,0xBF,0xFB,0xF3,0xE3,0x03,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,

// t (116): w=6, h=11
0x25,0x33,
0x8C,0xFE,0xFF,0xFF,0x0F,0x0C,
0x03,0x07,0x07,0x07,0x06,0x00,

// u (117): w=10, h=9
0x29,0x73,
0xF0,0xFF,0xFF,0xDF,0x61,0xB0,0xFC,0xFF,0xFF,0x07,
0x00,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x00,0x00,

// v (118): w=10, h=9
0x29,0x73,
0x07,0xFF,0xFF,0xFC,0xC0,0xF0,0x3C,0x0F,0x07,0x01,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// w (119): w=14, h=9
0x2D,0x73,
0xFF,0xFF,0xFF,0xE0,0x78,0x1E,0xFF,0xFF,0xFF,0xF0,
0x7C,0x1F,0x07,0x01,
0x01,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,

// x (120): w=11, h=9
0x2A,0x67,
0x00,0x80,0xC1,0xE7,0x7F,0xFF,0xFC,0xEE,0x87,0x03,
0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,

// y (121): w=12, h=12
0x2B,0x6C,
0x00,0x01,0x3F,0xFF,0xFF,0xF0,0xF0,0x38,0x1E,0x0F,
0x03,0x01,
0x08,0x0C,0x0E,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,

// z (122): w=10, h=9
0x29,0x6E,
0x80,0xC0,0xE3,0xF3,0xFB,0xBF,0x9F,0x8F,0x87,0x03,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

// braceleft (123): w=7, h=15
0x26,0x0D,
0x80,0xC0,0xCC,0x7E,0x7F,0x1F,0x03,
0x38,0x7F,0x7F,0x7F,0x00,0x00,0x00,

// bar (124): w=5, h=15
0x24,0x0C,
0x00,0x00,0xF8,0x7F,0x03,
0x60,0x7F,0x0F,0x00,0x00,

// braceright (125): w=7, h=15
0x26,0x08,
0x00,0x00,0x10,0x7F,0xFF,0xFF,0x8E,
0x60,0x7C,0x7F,0x3F,0x19,0x01,0x00,

// asciitilde (126): w=10, h=4
0x09,0xB4,
0x0C,0x0F,0x03,0x03,0x07,0x0E,0x0C,0x0C,0x0F,0x03

};
// 2004 bytes
// 2194 bytes with FAST_FONT_INDEX
