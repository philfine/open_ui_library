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

// courB18 = "Courier Bold"

const char font_courB18[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCF,0x00,
0xD9,0x00,
0xFF,0x00,
0x1F,0x01,
0x37,0x01,
0x4F,0x01,
0x55,0x01,
0x67,0x01,
0x79,0x01,
0x8F,0x01,
0xA9,0x01,
0xB1,0x01,
0xBF,0x01,
0xC5,0x01,
0xE8,0x01,
0xFE,0x01,
0x14,0x02,
0x2C,0x02,
0x44,0x02,
0x5C,0x02,
0x74,0x02,
0x8A,0x02,
0xA0,0x02,
0xB6,0x02,
0xCC,0x02,
0xD5,0x02,
0xE2,0x02,
0xFE,0x02,
0x0C,0x03,
0x28,0x03,
0x3C,0x03,
0x5C,0x03,
0x7A,0x03,
0x96,0x03,
0xB0,0x03,
0xCE,0x03,
0xEA,0x03,
0x06,0x04,
0x22,0x04,
0x40,0x04,
0x56,0x04,
0x72,0x04,
0x90,0x04,
0xAA,0x04,
0xC8,0x04,
0xE4,0x04,
0x00,0x05,
0x1C,0x05,
0x45,0x05,
0x63,0x05,
0x7D,0x05,
0x97,0x05,
0xB3,0x05,
0xD1,0x05,
0xEF,0x05,
0x0D,0x06,
0x2B,0x06,
0x43,0x06,
0x55,0x06,
0x78,0x06,
0x8A,0x06,
0x95,0x06,
0xA7,0x06,
0xAF,0x06,
0xC9,0x06,
0xE5,0x06,
0xFF,0x06,
0x1B,0x07,
0x35,0x07,
0x4D,0x07,
0x69,0x07,
0x87,0x07,
0x9D,0x07,
0xB8,0x07,
0xD4,0x07,
0xEA,0x07,
0x0C,0x08,
0x2A,0x08,
0x44,0x08,
0x60,0x08,
0x7C,0x08,
0x96,0x08,
0xAE,0x08,
0xC6,0x08,
0xE4,0x08,
0x02,0x09,
0x20,0x09,
0x3A,0x09,
0x54,0x09,
0x6A,0x09,
0x82,0x09,
0x8B,0x09,
0xA3,0x09,

// space (32): w=1, h=1
0x80,0x0F,0x4F,
0x00,

// exclam (33): w=4, h=16
0xA3,0x00,0x9B,
0x7E,0xFF,0xFF,0x7E,
0x00,0xEF,0xEF,0x00,

// quotedbl (34): w=7, h=7
0x86,0x00,0x7A,
0x0F,0x7F,0x0F,0x00,0x0F,0x7F,0x0F,

// numbersign (35): w=12, h=18
0x4B,0x10,
0x00,0x60,0x60,0xE0,0xFF,0x7F,0x60,0xE0,0xFF,0x7F,
0x60,0x60,
0x0C,0x0C,0xFC,0xFF,0x0F,0x0C,0xFC,0xFF,0x0F,0x0C,
0x0C,0x00,
0x00,0x00,0x07,0x07,0x00,0x00,0x07,0x07,0x00,0x00,
0x00,0x00,

// dollar (36): w=10, h=19
0x49,0x17,
0x78,0xFC,0xC6,0x86,0x87,0x87,0x8C,0x1E,0x1E,0x00,
0x78,0x78,0x30,0x61,0xE1,0xE1,0x61,0x73,0x3F,0x1E,
0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,

// percent (37): w=11, h=15
0x2A,0x36,
0x0C,0x1E,0x33,0x21,0xA1,0xB3,0x9E,0xCC,0x40,0x40,
0x00,
0x02,0x02,0x03,0x19,0x3D,0x66,0x42,0x42,0x66,0x3C,
0x18,

// ampersand (38): w=11, h=14
0x2A,0x56,
0x00,0x9C,0xFE,0xE3,0xC3,0x83,0x07,0x06,0x80,0x80,
0x00,
0x1E,0x3F,0x31,0x30,0x31,0x3B,0x1F,0x1F,0x3B,0x31,
0x30,

// quotesingle (39): w=3, h=7
0x82,0x01,0x9C,
0x1F,0x7F,0x1F,

// parenleft (40): w=5, h=20
0xC4,0x00,0xA9,
0xC0,0xF8,0x3E,0x07,0x03,
0x3F,0xFF,0xC0,0x00,0x00,
0x00,0x01,0x07,0x0E,0x0C,

// parenright (41): w=5, h=20
0xC4,0x00,0x7C,
0x03,0x07,0x3E,0xF8,0xC0,
0x00,0x00,0xC0,0xFF,0x3F,
0x0C,0x0E,0x07,0x01,0x00,

// asterisk (42): w=10, h=11
0x29,0x17,
0x18,0x18,0xB0,0xB0,0xFF,0xFF,0xB0,0xB0,0x18,0x18,
0x00,0x06,0x07,0x03,0x00,0x00,0x03,0x07,0x06,0x00,

// plus (43): w=12, h=12
0x2B,0x70,
0x60,0x60,0x60,0x60,0x60,0xFF,0xFF,0x60,0x60,0x60,
0x60,0x60,
0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=5, h=6
0x84,0x0D,0x8B,
0x30,0x1C,0x0F,0x07,0x03,

// hyphen (45): w=11, h=2
0x8A,0x08,0x67,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,

// period (46): w=3, h=3
0x82,0x0D,0x9C,
0x07,0x07,0x07,

// slash (47): w=11, h=19
0x4A,0x16,
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x78,0x1E,0x07,
0x01,
0x00,0x80,0xE0,0x78,0x1E,0x07,0x01,0x00,0x00,0x00,
0x00,
0x0E,0x0F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// zero (48): w=10, h=16
0x29,0x17,
0xF8,0xFE,0x06,0x03,0x03,0x03,0x03,0x06,0xFE,0xF8,
0x1F,0x7F,0x60,0xC0,0xC0,0xC0,0xC0,0x60,0x7F,0x1F,

// one (49): w=10, h=16
0x29,0x17,
0x06,0x06,0x06,0x07,0xFF,0xFF,0x00,0x00,0x00,0x00,
0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,

// two (50): w=11, h=16
0x2A,0x11,
0x00,0x1C,0x1E,0x07,0x03,0x03,0x03,0x83,0xC7,0xFE,
0x7C,
0xC0,0xE0,0xF0,0xF8,0xDC,0xCE,0xC7,0xC3,0xC1,0xC0,
0xC0,

// three (51): w=11, h=16
0x2A,0x11,
0x00,0x0C,0x0E,0x07,0x83,0x83,0x83,0xC3,0xE7,0x7E,
0x3C,
0x30,0x70,0xE0,0xC0,0xC1,0xC1,0xC1,0xC1,0xE3,0x7F,
0x3E,

// four (52): w=11, h=16
0x2A,0x11,
0x00,0x00,0xC0,0xF0,0x3C,0x0E,0x07,0xFF,0xFF,0x00,
0x00,
0x0C,0x0F,0x0F,0x0C,0xCC,0xCC,0xCC,0xFF,0xFF,0xCC,
0xCC,

// five (53): w=11, h=16
0x2A,0x16,
0x00,0xFF,0xFF,0xC3,0x63,0x63,0x63,0xE3,0xC3,0xC3,
0x00,
0x30,0x70,0xE0,0xC0,0xC0,0xC0,0xC0,0xE0,0x71,0x7F,
0x1F,

// six (54): w=10, h=16
0x29,0x17,
0xE0,0xF8,0xBC,0xCE,0xC6,0xC7,0xC3,0xC3,0x83,0x03,
0x1F,0x7F,0x71,0xE0,0xC0,0xC0,0xC0,0xE1,0x7F,0x3F,

// seven (55): w=10, h=16
0x29,0x17,
0x07,0x07,0x03,0x03,0x03,0x03,0x83,0xF3,0x7F,0x0F,
0x00,0x00,0x00,0x00,0xE0,0xFC,0x1F,0x03,0x00,0x00,

// eight (56): w=10, h=16
0x29,0x17,
0x3C,0x7E,0xC6,0x83,0x83,0x83,0x83,0xC6,0x7E,0x3C,
0x3E,0x7F,0xE3,0xC1,0xC1,0xC1,0xC1,0xE3,0x7F,0x3E,

// nine (57): w=10, h=16
0x29,0x1C,
0xF8,0xFE,0x06,0x03,0x03,0x03,0x03,0x86,0xFE,0xF8,
0xC1,0xC3,0xC7,0xC6,0xC6,0xC6,0x63,0x71,0x3F,0x0F,

// colon (58): w=3, h=11
0xA2,0x05,0x9C,
0x07,0x07,0x07,
0x07,0x07,0x07,

// semicolon (59): w=5, h=14
0xA4,0x05,0x7C,
0x00,0x00,0x07,0x07,0x07,
0x30,0x1C,0x0F,0x07,0x03,

// less (60): w=13, h=12
0x2C,0x6F,
0x60,0x60,0xF0,0xF0,0x98,0x98,0x0C,0x0C,0x06,0x06,
0x03,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x06,0x06,
0x0C,0x0C,0x08,

// equal (61): w=12, h=6
0x0B,0xD0,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x33,0x33,

// greater (62): w=13, h=12
0x2C,0x6F,
0x01,0x03,0x03,0x06,0x06,0x0C,0x0C,0x98,0x98,0xF0,
0xF0,0x60,0x60,
0x08,0x0C,0x0C,0x06,0x06,0x03,0x03,0x01,0x01,0x00,
0x00,0x00,0x00,

// question (63): w=9, h=15
0x28,0x3D,
0x1E,0x1F,0x03,0x03,0x83,0x83,0xC7,0xFE,0x7C,
0x00,0x00,0x00,0x77,0x77,0x01,0x00,0x00,0x00,

// at (64): w=10, h=18
0x49,0x17,
0xF8,0xFE,0x06,0x83,0xC3,0xE3,0x66,0xFE,0xF8,0x00,
0x7F,0xFF,0x80,0x07,0x0F,0x1C,0x18,0x9F,0x9F,0x18,
0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x01,0x01,0x00,

// A (65): w=14, h=15
0x2D,0x29,
0x00,0x00,0x03,0xC3,0xF3,0x7F,0x0F,0x0F,0x7C,0xF0,
0xC0,0x00,0x00,0x00,
0x60,0x78,0x7E,0x6F,0x67,0x66,0x06,0x06,0x66,0x67,
0x6F,0x7E,0x78,0x60,

// B (66): w=13, h=15
0x2C,0x2F,
0x03,0x03,0xFF,0xFF,0xC3,0xC3,0xC3,0xC3,0xC3,0xE7,
0xFE,0xBC,0x00,
0x60,0x60,0x7F,0x7F,0x60,0x60,0x60,0x60,0x60,0x60,
0x71,0x3F,0x1F,

// C (67): w=12, h=15
0x2B,0x30,
0xF0,0xFC,0x1E,0x06,0x03,0x03,0x03,0x03,0x03,0x06,
0x1F,0x1F,
0x07,0x1F,0x3C,0x30,0x60,0x60,0x60,0x60,0x60,0x60,
0x30,0x30,

// D (68): w=14, h=15
0x2D,0x29,
0x03,0x03,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x03,
0x06,0x1E,0xFC,0xF0,
0x60,0x60,0x7F,0x7F,0x60,0x60,0x60,0x60,0x60,0x60,
0x70,0x38,0x1F,0x07,

// E (69): w=13, h=15
0x2C,0x2F,
0x03,0x03,0xFF,0xFF,0xC3,0xC3,0xC3,0xF3,0xF3,0x03,
0x1F,0x1F,0x00,
0x60,0x60,0x7F,0x7F,0x60,0x60,0x60,0x63,0x63,0x60,
0x60,0x7C,0x7C,

// F (70): w=13, h=15
0x2C,0x2F,
0x03,0x03,0xFF,0xFF,0xC3,0xC3,0xC3,0xF3,0xF3,0x03,
0x03,0x1F,0x1F,
0x60,0x60,0x7F,0x7F,0x60,0x60,0x60,0x63,0x03,0x00,
0x00,0x00,0x00,

// G (71): w=13, h=15
0x2C,0x2F,
0xF0,0xFC,0x1E,0x06,0x03,0x03,0x03,0x03,0x03,0x03,
0x06,0x1F,0x1F,
0x07,0x1F,0x3C,0x30,0x60,0x60,0x60,0x63,0x63,0x63,
0x33,0x3F,0x1F,

// H (72): w=14, h=15
0x2D,0x29,
0x03,0x03,0xFF,0xFF,0xC3,0xC3,0xC0,0xC0,0xC3,0xC3,
0xFF,0xFF,0x03,0x03,
0x60,0x60,0x7F,0x7F,0x60,0x60,0x00,0x00,0x60,0x60,
0x7F,0x7F,0x60,0x60,

// I (73): w=10, h=15
0x29,0x37,
0x03,0x03,0x03,0x03,0xFF,0xFF,0x03,0x03,0x03,0x03,
0x60,0x60,0x60,0x60,0x7F,0x7F,0x60,0x60,0x60,0x60,

// J (74): w=13, h=15
0x2C,0x2F,
0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0xFF,0xFF,
0x03,0x03,0x03,
0x1E,0x3E,0x70,0x60,0x60,0x60,0x60,0x70,0x3F,0x1F,
0x00,0x00,0x00,

// K (75): w=14, h=15
0x2D,0x29,
0x03,0x03,0xFF,0xFF,0xC3,0xE3,0xF0,0xB8,0x1F,0x0F,
0x07,0x03,0x03,0x00,
0x60,0x60,0x7F,0x7F,0x61,0x60,0x01,0x03,0x07,0x1E,
0x7C,0x70,0x60,0x60,

// L (76): w=12, h=15
0x2B,0x30,
0x03,0x03,0x03,0xFF,0xFF,0x03,0x03,0x03,0x00,0x00,
0x00,0x00,
0x60,0x60,0x60,0x7F,0x7F,0x60,0x60,0x60,0x60,0x60,
0x7C,0x7C,

// M (77): w=14, h=15
0x2D,0x29,
0x03,0xFF,0xFF,0x0F,0x7C,0xF0,0x80,0x80,0xF0,0x7C,
0x0F,0xFF,0xFF,0x03,
0x60,0x7F,0x7F,0x60,0x60,0x00,0x03,0x03,0x00,0x60,
0x60,0x7F,0x7F,0x60,

// N (78): w=13, h=15
0x2C,0x2F,
0x03,0xFF,0xFF,0x0F,0x3C,0xF0,0xC0,0x00,0x03,0x03,
0xFF,0xFF,0x03,
0x60,0x7F,0x7F,0x60,0x60,0x00,0x03,0x0F,0x3C,0x70,
0x7F,0x7F,0x00,

// O (79): w=13, h=15
0x2C,0x2F,
0xF0,0xFC,0x1E,0x06,0x03,0x03,0x03,0x03,0x03,0x06,
0x1E,0xFC,0xF0,
0x07,0x1F,0x3C,0x30,0x60,0x60,0x60,0x60,0x60,0x30,
0x3C,0x1F,0x07,

// P (80): w=13, h=15
0x2C,0x2F,
0x03,0x03,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x03,
0x86,0xFE,0xFC,
0x60,0x60,0x7F,0x7F,0x63,0x63,0x63,0x63,0x03,0x03,
0x01,0x01,0x00,

// Q (81): w=13, h=18
0x4C,0x2F,
0xF0,0xFC,0x1E,0x06,0x03,0x03,0x03,0x03,0x03,0x06,
0x1E,0xFC,0xF0,
0x07,0x1F,0x3C,0x30,0xE0,0xE0,0xE0,0x60,0x60,0x30,
0x3C,0x9F,0x87,
0x00,0x00,0x03,0x03,0x03,0x01,0x01,0x03,0x03,0x03,
0x03,0x01,0x01,

// R (82): w=14, h=15
0x2D,0x29,
0x03,0x03,0xFF,0xFF,0x83,0x83,0x83,0x83,0x83,0xC6,
0xFE,0x7C,0x00,0x00,
0x60,0x60,0x7F,0x7F,0x61,0x61,0x01,0x03,0x07,0x1E,
0x7C,0x70,0x60,0x60,

// S (83): w=12, h=15
0x2B,0x30,
0x00,0x3C,0x7E,0xE7,0xC3,0xC3,0xC3,0x83,0x83,0x86,
0x1F,0x1F,
0x7C,0x7C,0x30,0x60,0x60,0x60,0x61,0x61,0x61,0x73,
0x3F,0x1E,

// T (84): w=12, h=15
0x2B,0x30,
0x3F,0x3F,0x03,0x03,0x03,0xFF,0xFF,0x03,0x03,0x03,
0x3F,0x3F,
0x00,0x00,0x60,0x60,0x60,0x7F,0x7F,0x60,0x60,0x60,
0x00,0x00,

// U (85): w=13, h=15
0x2C,0x2F,
0x03,0xFF,0xFF,0x03,0x03,0x00,0x00,0x00,0x03,0x03,
0xFF,0xFF,0x03,
0x00,0x0F,0x3F,0x70,0x60,0x60,0x60,0x60,0x60,0x70,
0x3F,0x0F,0x00,

// V (86): w=14, h=15
0x2D,0x29,
0x03,0x0F,0x7F,0xF3,0x83,0x00,0x00,0x00,0x00,0x83,
0xF3,0x7F,0x0F,0x03,
0x00,0x00,0x00,0x03,0x0F,0x7C,0x70,0x70,0x7C,0x0F,
0x03,0x00,0x00,0x00,

// W (87): w=14, h=15
0x2D,0x29,
0x03,0xFF,0xFF,0x03,0x83,0xE0,0xF8,0xF8,0xE0,0x83,
0x03,0xFF,0xFF,0x03,
0x00,0x03,0x7F,0x7C,0x7F,0x07,0x00,0x00,0x07,0x7F,
0x7C,0x7F,0x03,0x00,

// X (88): w=14, h=15
0x2D,0x29,
0x03,0x07,0x0F,0x1F,0x3B,0x73,0xE0,0xE0,0x73,0x3B,
0x1F,0x0F,0x07,0x03,
0x60,0x70,0x78,0x7C,0x6E,0x67,0x01,0x01,0x67,0x6E,
0x7C,0x78,0x70,0x60,

// Y (89): w=14, h=15
0x2D,0x29,
0x03,0x07,0x0F,0x1F,0x7B,0xE3,0xC0,0xC0,0xE3,0x7B,
0x1F,0x0F,0x07,0x03,
0x00,0x00,0x00,0x60,0x60,0x60,0x7F,0x7F,0x60,0x60,
0x60,0x00,0x00,0x00,

// Z (90): w=11, h=15
0x2A,0x36,
0x1F,0x1F,0x03,0x03,0x83,0xC3,0xF3,0x7B,0x1F,0x0F,
0x07,
0x70,0x78,0x7C,0x6F,0x67,0x61,0x60,0x60,0x60,0x7C,
0x7C,

// bracketleft (91): w=5, h=20
0xC4,0x00,0xA9,
0xFF,0xFF,0x03,0x03,0x03,
0xFF,0xFF,0x00,0x00,0x00,
0x0F,0x0F,0x0C,0x0C,0x0C,

// backslash (92): w=11, h=19
0x4A,0x16,
0x01,0x07,0x1E,0x78,0xE0,0x80,0x00,0x00,0x00,0x00,
0x00,
0x00,0x00,0x00,0x00,0x01,0x07,0x1E,0x78,0xE0,0x80,
0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0F,
0x0E,

// bracketright (93): w=5, h=20
0xC4,0x00,0x7C,
0x03,0x03,0x03,0xFF,0xFF,
0x00,0x00,0x00,0xFF,0xFF,
0x0C,0x0C,0x0C,0x0F,0x0F,

// asciicircum (94): w=8, h=8
0x87,0x00,0x79,
0xC0,0xF0,0x3C,0x0F,0x0F,0x3C,0xF0,0xC0,

// underscore (95): w=15, h=2
0x8E,0x12,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,

// grave (96): w=5, h=4
0x84,0x01,0x8B,
0x01,0x03,0x06,0x0C,0x08,

// a (97): w=12, h=11
0x2B,0xB0,
0xC0,0xE6,0x67,0x33,0x33,0x33,0x33,0x37,0xFE,0xFC,
0x00,0x00,
0x03,0x07,0x06,0x06,0x06,0x06,0x06,0x03,0x07,0x07,
0x06,0x06,

// b (98): w=13, h=16
0x2C,0x0F,
0x03,0x03,0xFF,0xFF,0xC0,0xE0,0x60,0x60,0x60,0xE0,
0xC0,0xC0,0x00,
0xC0,0xC0,0xFF,0xFF,0x71,0xE0,0xC0,0xC0,0xC0,0xE0,
0x71,0x7F,0x1F,

// c (99): w=12, h=11
0x2B,0xB0,
0xF8,0xFE,0x8E,0x07,0x03,0x03,0x03,0x03,0x07,0x0E,
0x1F,0x1F,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x06,0x07,
0x03,0x03,

// d (100): w=13, h=16
0x2C,0x0F,
0x00,0xC0,0xC0,0xE0,0x60,0x60,0x60,0xE3,0xC3,0xFF,
0xFF,0x00,0x00,
0x1F,0x7F,0x71,0xE0,0xC0,0xC0,0xC0,0xE0,0x71,0xFF,
0xFF,0xC0,0xC0,

// e (101): w=12, h=11
0x2B,0xB0,
0xF8,0xFE,0xEE,0x67,0x63,0x63,0x63,0x63,0x67,0x6E,
0x7E,0x78,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x06,0x07,
0x03,0x03,

// f (102): w=11, h=16
0x2A,0x16,
0x60,0x60,0x60,0xFC,0xFE,0x67,0x63,0x63,0x63,0x63,
0x03,
0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,
0x00,

// g (103): w=13, h=16
0x2C,0xAF,
0xF8,0xFE,0x8E,0x07,0x03,0x03,0x03,0x07,0x8E,0xFF,
0xFF,0x03,0x03,
0x00,0x03,0xC3,0xC7,0xC6,0xC6,0xC6,0xC7,0xE3,0x7F,
0x3F,0x00,0x00,

// h (104): w=14, h=16
0x2D,0x09,
0x03,0x03,0xFF,0xFF,0xC0,0xE0,0x60,0x60,0x60,0xE0,
0xC0,0x80,0x00,0x00,
0xC0,0xC0,0xFF,0xFF,0xC1,0xC0,0x00,0x00,0xC0,0xC0,
0xFF,0xFF,0xC0,0xC0,

// i (105): w=10, h=16
0x29,0x17,
0x00,0x60,0x60,0x67,0xE7,0xE7,0x00,0x00,0x00,0x00,
0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,

// j (106): w=8, h=21
0xC7,0x00,0x6A,
0x60,0x60,0x60,0x60,0x67,0x67,0xE7,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x18,0x18,0x18,0x18,0x18,0x1C,0x0F,0x07,

// k (107): w=13, h=16
0x2C,0x0F,
0x03,0x03,0xFF,0xFF,0x00,0x00,0x80,0xE0,0xE0,0x60,
0x60,0x00,0x00,
0xC0,0xC0,0xFF,0xFF,0x06,0x0F,0x1F,0xF9,0xF0,0xE0,
0xC0,0xC0,0xC0,

// l (108): w=10, h=16
0x29,0x17,
0x00,0x03,0x03,0x03,0xFF,0xFF,0x00,0x00,0x00,0x00,
0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,

// m (109): w=16, h=11
0x2F,0xA7,
0x03,0x03,0xFF,0xFE,0x07,0x03,0x03,0xFF,0xFE,0x07,
0x03,0x03,0xFF,0xFE,0x00,0x00,
0x06,0x06,0x07,0x07,0x06,0x00,0x00,0x07,0x07,0x06,
0x06,0x00,0x07,0x07,0x06,0x06,

// n (110): w=14, h=11
0x2D,0xA9,
0x03,0x03,0xFF,0xFF,0x0C,0x06,0x03,0x03,0x03,0x07,
0xFE,0xFC,0x00,0x00,
0x06,0x06,0x07,0x07,0x06,0x06,0x00,0x00,0x06,0x06,
0x07,0x07,0x06,0x06,

// o (111): w=12, h=11
0x2B,0xB0,
0xF8,0xFE,0x8E,0x07,0x03,0x03,0x03,0x03,0x07,0x8E,
0xFE,0xF8,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x07,0x03,
0x03,0x00,

// p (112): w=13, h=16
0x2C,0xAA,
0x03,0x03,0xFF,0xFF,0x8E,0x07,0x03,0x03,0x03,0x07,
0x8E,0xFE,0xF8,
0xC0,0xC0,0xFF,0xFF,0xC3,0xC7,0xC6,0x06,0x06,0x07,
0x03,0x03,0x00,

// q (113): w=13, h=16
0x2C,0xAF,
0xF8,0xFE,0x8E,0x07,0x03,0x03,0x03,0x07,0x8E,0xFF,
0xFF,0x03,0x03,
0x00,0x03,0x03,0x07,0x06,0x06,0xC6,0xC7,0xC3,0xFF,
0xFF,0xC0,0xC0,

// r (114): w=12, h=11
0x2B,0xB0,
0x00,0x03,0x03,0xFF,0xFF,0x0E,0x06,0x03,0x03,0x03,
0x07,0x06,
0x06,0x06,0x06,0x07,0x07,0x06,0x06,0x06,0x06,0x06,
0x00,0x00,

// s (115): w=11, h=11
0x2A,0xB6,
0x8C,0x9E,0x1F,0x33,0x33,0x73,0x63,0x66,0xCF,0xCF,
0x80,
0x07,0x07,0x03,0x06,0x06,0x06,0x06,0x06,0x07,0x03,
0x01,

// t (116): w=11, h=15
0x2A,0x31,
0x30,0x30,0xFF,0xFF,0x30,0x30,0x30,0x30,0x30,0x30,
0x00,
0x00,0x00,0x1F,0x3F,0x70,0x60,0x60,0x60,0x70,0x30,
0x30,

// u (117): w=14, h=11
0x2D,0xA9,
0x03,0x03,0xFF,0xFF,0x00,0x00,0x00,0x00,0x03,0x03,
0xFF,0xFF,0x00,0x00,
0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x06,0x03,
0x07,0x07,0x06,0x06,

// v (118): w=14, h=11
0x2D,0xA9,
0x03,0x03,0x0F,0x3F,0xF3,0xC3,0x00,0x00,0xC3,0xF3,
0x3F,0x0F,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x03,0x00,
0x00,0x00,0x00,0x00,

// w (119): w=14, h=11
0x2D,0xA9,
0x03,0x0F,0xFF,0xF3,0x83,0xE0,0x7C,0x7C,0xE0,0x83,
0xF3,0xFF,0x0F,0x03,
0x00,0x00,0x00,0x07,0x07,0x01,0x00,0x00,0x01,0x07,
0x07,0x00,0x00,0x00,

// x (120): w=12, h=11
0x2B,0xB0,
0x03,0x03,0x07,0x8F,0xDB,0x70,0x70,0xDB,0x8F,0x07,
0x03,0x03,
0x06,0x06,0x07,0x07,0x06,0x00,0x00,0x06,0x07,0x07,
0x06,0x06,

// y (121): w=12, h=16
0x2B,0xB0,
0x03,0x0F,0x3F,0xFB,0xE3,0x00,0x80,0xE3,0xFB,0x3F,
0x0F,0x03,
0xC0,0xC0,0xC0,0xE0,0xFB,0xFF,0xCF,0x03,0x00,0x00,
0x00,0x00,

// z (122): w=10, h=11
0x29,0xB7,
0x0F,0x8F,0xC3,0xE3,0x73,0x3B,0x1F,0x0F,0x87,0x83,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x07,0x07,

// braceleft (123): w=7, h=20
0xC6,0x00,0x89,
0x00,0x00,0xFC,0xFE,0x03,0x01,0x01,
0x02,0x07,0xFF,0xFD,0x00,0x00,0x00,
0x00,0x00,0x03,0x07,0x0C,0x08,0x08,

// bar (124): w=2, h=18
0xC1,0x00,0xAC,
0xFF,0xFF,
0xFF,0xFF,
0x03,0x03,

// braceright (125): w=7, h=20
0xC6,0x00,0x7A,
0x01,0x01,0x03,0xFE,0xFC,0x00,0x00,
0x00,0x00,0x00,0xFD,0xFF,0x07,0x02,
0x08,0x08,0x0C,0x07,0x03,0x00,0x00,

// asciitilde (126): w=12, h=4
0x0B,0xF0,
0x0C,0x0E,0x07,0x03,0x03,0x07,0x0E,0x0C,0x0C,0x0E,
0x07,0x03

};
// 2291 bytes
// 2481 bytes with FAST_FONT_INDEX
