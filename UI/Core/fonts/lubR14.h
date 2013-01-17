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

const char font_lubR14[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCA,0x00,
0xD2,0x00,
0xEC,0x00,
0x03,0x01,
0x1F,0x01,
0x3D,0x01,
0x42,0x01,
0x53,0x01,
0x64,0x01,
0x6E,0x01,
0x86,0x01,
0x8B,0x01,
0x92,0x01,
0x97,0x01,
0xB7,0x01,
0xCD,0x01,
0xDF,0x01,
0xF1,0x01,
0x03,0x02,
0x1B,0x02,
0x2D,0x02,
0x43,0x02,
0x57,0x02,
0x6D,0x02,
0x83,0x02,
0x89,0x02,
0x8F,0x02,
0xA9,0x02,
0xB7,0x02,
0xD1,0x02,
0xE3,0x02,
0x05,0x03,
0x25,0x03,
0x3D,0x03,
0x57,0x03,
0x75,0x03,
0x8D,0x03,
0xA3,0x03,
0xC1,0x03,
0xE1,0x03,
0xEF,0x03,
0x09,0x04,
0x27,0x04,
0x3F,0x04,
0x63,0x04,
0x83,0x04,
0x9F,0x04,
0xB7,0x04,
0xEC,0x04,
0x0A,0x05,
0x1E,0x05,
0x38,0x05,
0x56,0x05,
0x74,0x05,
0x9A,0x05,
0xB6,0x05,
0xD4,0x05,
0xEA,0x05,
0xF8,0x05,
0x18,0x06,
0x26,0x06,
0x40,0x06,
0x4B,0x06,
0x52,0x06,
0x68,0x06,
0x82,0x06,
0x94,0x06,
0xAE,0x06,
0xC2,0x06,
0xD4,0x06,
0xEC,0x06,
0x08,0x07,
0x16,0x07,
0x2A,0x07,
0x44,0x07,
0x52,0x07,
0x78,0x07,
0x94,0x07,
0xAA,0x07,
0xC4,0x07,
0xDE,0x07,
0xF0,0x07,
0x02,0x08,
0x12,0x08,
0x2E,0x08,
0x46,0x08,
0x68,0x08,
0x80,0x08,
0x98,0x08,
0xAC,0x08,
0xBD,0x08,
0xC2,0x08,
0xD3,0x08,

// space (32): w=1, h=1
0x80,0x0E,0x4A,
0x00,

// exclam (33): w=2, h=15
0x21,0x15,
0xFF,0x7F,
0x67,0x60,

// quotedbl (34): w=6, h=5
0x05,0x0F,
0x07,0x1F,0x00,0x00,0x1F,0x07,

// numbersign (35): w=12, h=15
0x2B,0x08,
0x00,0x20,0x20,0x20,0xF0,0x2F,0x20,0xA0,0x78,0x27,
0x20,0x20,
0x04,0x04,0x64,0x1E,0x05,0x04,0x74,0x0F,0x04,0x04,
0x04,0x00,

// dollar (36): w=7, h=17
0x46,0x1C,
0x3E,0x7E,0xE1,0xFF,0x81,0x01,0x07,
0x38,0x60,0x40,0xFF,0x61,0x3F,0x1E,
0x00,0x00,0x00,0x03,0x00,0x00,0x00,

// percent (37): w=13, h=15
0x2C,0x08,
0x3E,0x43,0x41,0x41,0x41,0x3E,0x80,0x60,0xB0,0x88,
0x84,0x83,0x01,
0x40,0x60,0x10,0x08,0x06,0x03,0x00,0x1E,0x61,0x40,
0x40,0x61,0x1E,

// ampersand (38): w=14, h=15
0x2D,0x08,
0x00,0x80,0x80,0x5E,0x7E,0xE3,0xA1,0x21,0x3F,0x1E,
0x80,0x80,0x80,0x80,
0x1E,0x3F,0x30,0x60,0x40,0x41,0x43,0x47,0x3E,0x3C,
0x70,0x78,0x47,0x40,

// quotesingle (39): w=3, h=5
0x02,0x0F,
0x07,0x1F,0x07,

// parenleft (40): w=5, h=18
0x44,0x0E,
0xC0,0xF0,0x1C,0x02,0x01,
0x0F,0x3F,0xE0,0x00,0x00,
0x00,0x00,0x00,0x01,0x02,

// parenright (41): w=5, h=18
0x44,0x0E,
0x01,0x02,0x1C,0xF0,0xC0,
0x00,0x00,0xE0,0x3F,0x0F,
0x02,0x01,0x00,0x00,0x00,

// asterisk (42): w=8, h=7
0x07,0x0E,
0x04,0x24,0x68,0x17,0x13,0x68,0x44,0x04,

// plus (43): w=11, h=13
0x2A,0x4E,
0x40,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,
0x40,
0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,
0x00,

// comma (44): w=2, h=7
0x81,0x0C,0x66,
0x47,0x3F,

// hyphen (45): w=5, h=1
0x04,0xEF,
0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x0D,0x66,
0x03,0x03,

// slash (47): w=10, h=18
0x49,0x08,
0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x06,0x01,
0x00,0x80,0x60,0x18,0x06,0x01,0x00,0x00,0x00,0x00,
0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// zero (48): w=10, h=15
0x29,0x0F,
0xF0,0xFC,0x06,0x01,0x01,0x01,0x01,0x06,0xFC,0xF0,
0x07,0x1F,0x30,0x40,0x40,0x40,0x40,0x30,0x1F,0x07,

// one (49): w=8, h=15
0x27,0x16,
0x01,0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,
0x40,0x40,0x40,0x7F,0x7F,0x40,0x40,0x40,

// two (50): w=8, h=15
0x27,0x16,
0x0E,0x03,0x01,0x01,0x81,0xC3,0x7E,0x3C,
0x60,0x78,0x66,0x62,0x61,0x60,0x60,0x60,

// three (51): w=8, h=15
0x27,0x16,
0x07,0x81,0x81,0x81,0x81,0xC3,0x3E,0x1C,
0x70,0x60,0x40,0x40,0x40,0x61,0x3F,0x1E,

// four (52): w=11, h=15
0x2A,0x09,
0x00,0x80,0xC0,0x20,0x10,0x0C,0x06,0xFF,0xFF,0x00,
0x00,
0x03,0x03,0x02,0x02,0x02,0x42,0x42,0x7F,0x7F,0x42,
0x42,

// five (53): w=8, h=15
0x27,0x16,
0x7F,0x43,0x43,0x43,0xC3,0x83,0x83,0x03,
0x70,0x40,0x40,0x40,0x40,0x31,0x3F,0x1F,

// six (54): w=10, h=15
0x29,0x0F,
0xF0,0xFC,0x46,0x23,0x21,0x21,0x21,0x63,0xC7,0x80,
0x07,0x1F,0x30,0x60,0x40,0x40,0x40,0x30,0x3F,0x0F,

// seven (55): w=9, h=15
0x28,0x15,
0x03,0x03,0x03,0x03,0x83,0x63,0x33,0x0F,0x07,
0x00,0x60,0x7C,0x0F,0x01,0x00,0x00,0x00,0x00,

// eight (56): w=10, h=15
0x29,0x0F,
0x00,0x1C,0xBE,0x63,0xE1,0xC1,0xC1,0xA3,0x3E,0x1C,
0x1E,0x3F,0x60,0x40,0x40,0x40,0x41,0x63,0x3F,0x1E,

// nine (57): w=10, h=15
0x29,0x0F,
0xF8,0xFE,0x06,0x01,0x01,0x01,0x03,0x06,0xFC,0xF0,
0x00,0x71,0x63,0x42,0x42,0x42,0x62,0x31,0x1F,0x07,

// colon (58): w=2, h=11
0x21,0x95,
0x03,0x03,
0x06,0x06,

// semicolon (59): w=2, h=15
0x21,0x95,
0x03,0x03,
0x46,0x3E,

// less (60): w=12, h=13
0x2B,0x48,
0x40,0x40,0xA0,0xA0,0x10,0x10,0x08,0x08,0x04,0x06,
0x02,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x02,0x02,0x04,0x0C,
0x08,0x10,

// equal (61): w=12, h=6
0x0B,0xC8,
0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,
0x21,0x21,

// greater (62): w=12, h=13
0x2B,0x48,
0x03,0x02,0x06,0x04,0x08,0x08,0x10,0x10,0xA0,0xA0,
0x40,0x40,
0x10,0x08,0x0C,0x04,0x02,0x02,0x01,0x01,0x00,0x00,
0x00,0x00,

// question (63): w=8, h=15
0x27,0x0F,
0x0E,0x03,0x01,0x81,0xC1,0x63,0x3E,0x1C,
0x00,0x00,0x66,0x67,0x00,0x00,0x00,0x00,

// at (64): w=16, h=15
0x2F,0x0E,
0xC0,0x30,0x18,0x04,0xC6,0x22,0x13,0x09,0x09,0xC9,
0xF9,0x09,0x02,0x06,0x0C,0xF0,
0x07,0x18,0x30,0x20,0x47,0x48,0x48,0x44,0x43,0x2F,
0x08,0x08,0x08,0x04,0x03,0x01,

// A (65): w=15, h=15
0x2E,0x08,
0x00,0x00,0x00,0x00,0xC0,0x30,0x0E,0x1F,0x7C,0xF0,
0xC0,0x00,0x00,0x00,0x00,
0x40,0x60,0x58,0x47,0x02,0x02,0x02,0x02,0x02,0x03,
0x47,0x7E,0x78,0x60,0x40,

// B (66): w=11, h=15
0x2A,0x09,
0x01,0x01,0xFF,0xFF,0x81,0x81,0x81,0xC3,0xBE,0x1C,
0x00,
0x40,0x40,0x7F,0x7F,0x40,0x40,0x40,0x41,0x63,0x3F,
0x1E,

// C (67): w=12, h=15
0x2B,0x0F,
0xF0,0xFC,0x0E,0x06,0x03,0x01,0x01,0x01,0x01,0x01,
0x03,0x0E,
0x07,0x0F,0x18,0x30,0x60,0x40,0x40,0x40,0x40,0x40,
0x40,0x20,

// D (68): w=14, h=15
0x2D,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x03,
0x02,0x0E,0xFC,0xF0,
0x40,0x40,0x7F,0x7F,0x40,0x40,0x40,0x40,0x40,0x60,
0x20,0x38,0x0F,0x03,

// E (69): w=11, h=15
0x2A,0x08,
0x01,0x01,0xFF,0xFF,0x81,0x81,0x81,0x81,0xC1,0x07,
0x00,
0x40,0x40,0x7F,0x7F,0x40,0x40,0x40,0x40,0x41,0x40,
0x70,

// F (70): w=10, h=15
0x29,0x09,
0x01,0x01,0xFF,0xFF,0x81,0x81,0x81,0x81,0xC1,0x07,
0x40,0x40,0x7F,0x7F,0x40,0x40,0x00,0x00,0x01,0x00,

// G (71): w=14, h=15
0x2D,0x0E,
0xF0,0xFC,0x1E,0x06,0x03,0x01,0x01,0x01,0x01,0x01,
0x03,0x0E,0x00,0x00,
0x07,0x0F,0x18,0x30,0x60,0x40,0x40,0x40,0x41,0x41,
0x7F,0x3F,0x01,0x01,

// H (72): w=15, h=15
0x2E,0x08,
0x01,0x01,0xFF,0xFF,0x81,0x81,0x80,0x80,0x80,0x81,
0x81,0xFF,0xFF,0x01,0x01,
0x40,0x40,0x7F,0x7F,0x40,0x40,0x00,0x00,0x00,0x40,
0x40,0x7F,0x7F,0x40,0x40,

// I (73): w=6, h=15
0x25,0x09,
0x01,0x01,0xFF,0xFF,0x01,0x01,
0x40,0x40,0x7F,0x7F,0x40,0x40,

// J (74): w=8, h=18
0x47,0x08,
0x00,0x00,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x80,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,
0x03,0x02,0x02,0x03,0x01,0x00,0x00,0x00,

// K (75): w=14, h=15
0x2D,0x08,
0x01,0x01,0xFF,0xFF,0x81,0xC1,0xA0,0x10,0x09,0x05,
0x03,0x01,0x01,0x00,
0x40,0x40,0x7F,0x7F,0x40,0x41,0x03,0x07,0x5C,0x78,
0x70,0x60,0x40,0x40,

// L (76): w=11, h=15
0x2A,0x08,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,
0x40,0x40,0x7F,0x7F,0x40,0x40,0x40,0x40,0x40,0x40,
0x70,

// M (77): w=17, h=15
0x30,0x08,
0x01,0x01,0xFF,0x07,0x3E,0xF8,0xE0,0x00,0x00,0x00,
0xC0,0x30,0x0E,0xFF,0xFF,0x01,0x01,
0x40,0x40,0x7F,0x40,0x40,0x00,0x07,0x1F,0x1C,0x06,
0x01,0x40,0x40,0x7F,0x7F,0x40,0x40,

// N (78): w=15, h=15
0x2E,0x08,
0x01,0x01,0xFF,0x0F,0x1E,0x38,0x70,0xE0,0x80,0x00,
0x01,0x01,0xFF,0x01,0x01,
0x40,0x40,0x7F,0x40,0x40,0x00,0x00,0x01,0x03,0x07,
0x1E,0x38,0x7F,0x00,0x00,

// O (79): w=13, h=15
0x2C,0x10,
0xF0,0xFC,0x0E,0x02,0x03,0x01,0x01,0x01,0x03,0x02,
0x0E,0xFC,0xF0,
0x07,0x1F,0x38,0x20,0x60,0x40,0x40,0x40,0x60,0x20,
0x38,0x1F,0x07,

// P (80): w=11, h=15
0x2A,0x08,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x81,0xC3,0xFE,
0x7C,
0x40,0x40,0x7F,0x7F,0x41,0x41,0x01,0x01,0x00,0x00,
0x00,

// Q (81): w=17, h=18
0x50,0x0C,
0xF0,0xFC,0x0E,0x06,0x03,0x01,0x01,0x01,0x01,0x03,
0x06,0x0E,0xFC,0xF0,0x00,0x00,0x00,
0x07,0x1F,0x38,0x30,0x60,0x40,0x40,0x40,0x40,0xE0,
0xB0,0x38,0x1F,0x07,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x03,0x03,0x02,0x02,

// R (82): w=14, h=15
0x2D,0x07,
0x01,0x01,0xFF,0xFF,0x81,0x81,0x81,0x81,0xC3,0x7E,
0x3C,0x00,0x00,0x00,
0x40,0x40,0x7F,0x7F,0x40,0x40,0x01,0x07,0x0E,0x3C,
0x70,0x60,0x40,0x40,

// S (83): w=9, h=15
0x28,0x0F,
0x3C,0x7E,0x63,0xC1,0xC1,0x81,0x83,0x0E,0x00,
0x38,0x60,0x40,0x40,0x40,0x41,0x63,0x3F,0x1E,

// T (84): w=12, h=15
0x2B,0x0E,
0x03,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,
0x01,0x03,
0x00,0x00,0x00,0x40,0x40,0x7F,0x7F,0x40,0x40,0x00,
0x00,0x00,

// U (85): w=14, h=15
0x2D,0x08,
0x01,0x01,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x01,
0x01,0xFF,0x01,0x01,
0x00,0x00,0x1F,0x3F,0x60,0x40,0x40,0x40,0x40,0x60,
0x30,0x1F,0x00,0x00,

// V (86): w=14, h=15
0x2D,0x08,
0x01,0x03,0x0F,0x7F,0xF1,0xC0,0x00,0x00,0x00,0x80,
0xE1,0x1D,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x0F,0x3E,0x78,0x1C,0x03,
0x00,0x00,0x00,0x00,

// W (87): w=18, h=15
0x31,0x08,
0x01,0x03,0x3F,0xFD,0xC1,0x00,0x00,0xE0,0x1E,0x7F,
0xF8,0xC0,0x00,0x00,0xE1,0x1D,0x03,0x01,
0x00,0x00,0x00,0x03,0x3F,0x7C,0x0F,0x00,0x00,0x00,
0x03,0x1F,0x7C,0x1E,0x01,0x00,0x00,0x00,

// X (88): w=13, h=15
0x2C,0x08,
0x01,0x01,0x07,0x0F,0x3D,0xF1,0xE0,0xC0,0x30,0x09,
0x07,0x03,0x01,
0x40,0x60,0x50,0x4C,0x06,0x01,0x01,0x07,0x4F,0x7C,
0x70,0x60,0x40,

// Y (89): w=14, h=15
0x2D,0x08,
0x01,0x03,0x07,0x0F,0x3D,0x71,0xE0,0x80,0xC0,0x30,
0x19,0x07,0x03,0x01,
0x00,0x00,0x00,0x00,0x40,0x40,0x7F,0x7F,0x40,0x40,
0x00,0x00,0x00,0x00,

// Z (90): w=10, h=15
0x29,0x10,
0x07,0x01,0x01,0x01,0xC1,0xF1,0x79,0x1F,0x07,0x03,
0x60,0x78,0x5C,0x4F,0x43,0x40,0x40,0x40,0x40,0x70,

// bracketleft (91): w=4, h=18
0x43,0x14,
0xFF,0xFF,0x01,0x01,
0xFF,0xFF,0x00,0x00,
0x03,0x03,0x02,0x02,

// backslash (92): w=10, h=18
0x49,0x08,
0x01,0x06,0x18,0x60,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x06,0x18,0x60,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,

// bracketright (93): w=4, h=18
0x43,0x0F,
0x01,0x01,0xFF,0xFF,
0x00,0x00,0xFF,0xFF,
0x02,0x02,0x03,0x03,

// asciicircum (94): w=12, h=13
0x2B,0x08,
0x00,0x00,0x00,0xC0,0x38,0x0E,0x0F,0x38,0xC0,0x00,
0x00,0x00,
0x10,0x0C,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x0C,0x10,

// underscore (95): w=8, h=1
0x87,0x10,0x56,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=4, h=3
0x83,0x00,0x89,
0x01,0x01,0x02,0x04,

// a (97): w=10, h=11
0x29,0x8E,
0x80,0xC6,0x63,0x21,0x21,0x23,0xFF,0xFE,0x00,0x00,
0x03,0x07,0x06,0x04,0x04,0x04,0x03,0x07,0x04,0x04,

// b (98): w=12, h=15
0x2B,0x08,
0x01,0x01,0xFF,0xFF,0x20,0x10,0x10,0x10,0x10,0x70,
0xE0,0xC0,
0x00,0x00,0x7F,0x3F,0x20,0x40,0x40,0x40,0x40,0x20,
0x3F,0x0F,

// c (99): w=8, h=11
0x27,0x8F,
0xF8,0xFE,0x06,0x03,0x01,0x01,0x01,0x07,
0x00,0x03,0x03,0x06,0x04,0x04,0x04,0x04,

// d (100): w=12, h=15
0x2B,0x0E,
0x80,0xE0,0x20,0x10,0x10,0x10,0x11,0x21,0xFF,0xFF,
0x00,0x00,
0x1F,0x3F,0x70,0x40,0x40,0x40,0x40,0x20,0x7F,0x7F,
0x40,0x40,

// e (101): w=9, h=11
0x28,0x8F,
0xF8,0xFE,0x26,0x21,0x21,0x21,0x23,0x3E,0x38,
0x00,0x03,0x03,0x06,0x04,0x04,0x04,0x04,0x02,

// f (102): w=8, h=15
0x27,0x08,
0x10,0x10,0xFF,0xFF,0x10,0x10,0x10,0x03,
0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,0x00,0x00,

// g (103): w=11, h=15
0x2A,0x88,
0x00,0x3C,0x7E,0xC3,0x81,0x81,0xC3,0x7F,0x3D,0x01,
0x01,
0x38,0x3B,0x67,0x44,0x44,0x44,0x44,0x64,0x3C,0x18,
0x00,

// h (104): w=13, h=15
0x2C,0x08,
0x01,0x01,0xFF,0xFF,0x20,0x20,0x10,0x10,0x10,0xF0,
0xE0,0x00,0x00,
0x40,0x40,0x7F,0x7F,0x40,0x40,0x00,0x40,0x40,0x7F,
0x7F,0x40,0x40,

// i (105): w=6, h=15
0x25,0x08,
0x10,0x10,0xF3,0xF3,0x00,0x00,
0x40,0x40,0x7F,0x7F,0x40,0x40,

// j (106): w=6, h=19
0x45,0x09,
0x00,0x00,0x10,0x10,0xF3,0xF3,
0x00,0x00,0x00,0x00,0xFF,0xFF,
0x07,0x04,0x04,0x04,0x07,0x03,

// k (107): w=12, h=15
0x2B,0x08,
0x01,0x01,0xFF,0xFF,0x00,0x00,0x80,0x50,0x70,0x30,
0x10,0x00,
0x40,0x40,0x7F,0x7F,0x42,0x47,0x0E,0x1C,0x38,0x60,
0x40,0x40,

// l (108): w=6, h=15
0x25,0x08,
0x01,0x01,0xFF,0xFF,0x00,0x00,
0x40,0x40,0x7F,0x7F,0x40,0x40,

// m (109): w=18, h=11
0x31,0x8E,
0x01,0x01,0xFF,0xFF,0x02,0x01,0x01,0x01,0xFF,0xFE,
0x02,0x01,0x01,0x01,0xFF,0xFE,0x00,0x00,
0x04,0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x07,0x07,
0x04,0x04,0x04,0x04,0x07,0x07,0x04,0x04,

// n (110): w=13, h=11
0x2C,0x88,
0x01,0x01,0xFF,0xFF,0x02,0x02,0x01,0x01,0x01,0xFF,
0xFE,0x00,0x00,
0x04,0x04,0x07,0x07,0x04,0x04,0x00,0x04,0x04,0x07,
0x07,0x04,0x04,

// o (111): w=10, h=11
0x29,0x8F,
0xF8,0xFE,0x06,0x03,0x01,0x01,0x03,0x06,0xFE,0xF8,
0x00,0x03,0x03,0x06,0x04,0x04,0x06,0x03,0x03,0x00,

// p (112): w=12, h=15
0x2B,0x89,
0x01,0x01,0xFF,0xFF,0x02,0x01,0x01,0x01,0x01,0x07,
0xFE,0xFC,
0x40,0x40,0x7F,0x7F,0x42,0x44,0x04,0x04,0x04,0x02,
0x03,0x00,

// q (113): w=12, h=15
0x2B,0x8D,
0xF8,0xFE,0x02,0x01,0x01,0x01,0x01,0x02,0xFF,0xFF,
0x00,0x00,
0x01,0x03,0x07,0x04,0x04,0x04,0x44,0x42,0x7F,0x7F,
0x40,0x40,

// r (114): w=8, h=11
0x27,0x89,
0x01,0x01,0xFF,0xFF,0x02,0x03,0x01,0x07,
0x04,0x04,0x07,0x07,0x04,0x04,0x00,0x00,

// s (115): w=8, h=11
0x27,0x8F,
0x9E,0x3F,0x33,0x31,0x61,0x63,0xEE,0xC0,
0x03,0x06,0x04,0x04,0x04,0x06,0x03,0x03,

// t (116): w=7, h=14
0x26,0x2E,
0x08,0x08,0xFF,0xFF,0x08,0x08,0x08,
0x00,0x00,0x1F,0x3F,0x20,0x20,0x20,

// u (117): w=13, h=11
0x2C,0x88,
0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,0x01,0x01,0xFF,
0xFF,0x00,0x00,
0x00,0x00,0x03,0x07,0x04,0x04,0x04,0x02,0x02,0x07,
0x07,0x04,0x04,

// v (118): w=11, h=11
0x2A,0x88,
0x01,0x07,0x1F,0x7D,0xE1,0x80,0x80,0xE0,0x19,0x07,
0x01,
0x00,0x00,0x00,0x00,0x03,0x07,0x03,0x00,0x00,0x00,
0x00,

// w (119): w=16, h=11
0x2F,0x88,
0x01,0x0F,0x7F,0xF9,0xC1,0x80,0x70,0x0E,0x1F,0x7C,
0xF0,0x80,0xC0,0x39,0x0F,0x01,
0x00,0x00,0x00,0x03,0x07,0x01,0x00,0x00,0x00,0x00,
0x03,0x07,0x01,0x00,0x00,0x00,

// x (120): w=11, h=11
0x2A,0x88,
0x01,0x03,0x07,0x9F,0x79,0x70,0xF0,0xC9,0x07,0x03,
0x01,
0x04,0x06,0x05,0x00,0x00,0x00,0x04,0x07,0x07,0x06,
0x04,

// y (121): w=11, h=15
0x2A,0x88,
0x01,0x07,0x1F,0x7D,0xE1,0x80,0x00,0xE0,0x39,0x07,
0x01,
0x00,0x00,0x40,0x60,0x73,0x0F,0x03,0x00,0x00,0x00,
0x00,

// z (122): w=9, h=11
0x28,0x90,
0x07,0x01,0xC1,0xE1,0x79,0x3D,0x0F,0x07,0x01,
0x06,0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x07,

// braceleft (123): w=5, h=18
0x44,0x0F,
0x00,0x00,0xFE,0x01,0x01,
0x02,0x02,0xFD,0x00,0x00,
0x00,0x00,0x01,0x02,0x02,

// bar (124): w=1, h=18
0x40,0x16,
0xFF,
0xFF,
0x03,

// braceright (125): w=5, h=18
0x44,0x0F,
0x01,0xF1,0x1E,0x00,0x00,
0x00,0x3C,0xE7,0x02,0x02,
0x02,0x02,0x01,0x00,0x00,

// asciitilde (126): w=12, h=4
0x0B,0xE8,
0x0E,0x01,0x01,0x01,0x02,0x02,0x04,0x0C,0x08,0x08,
0x08,0x07

};
// 2083 bytes
// 2273 bytes with FAST_FONT_INDEX
