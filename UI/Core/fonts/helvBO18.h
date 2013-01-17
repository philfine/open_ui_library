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

// helvBO18 = "Helvetica Bold Oblique"

const char font_helvBO18[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xDE,0x00,
0xE8,0x00,
0x14,0x01,
0x47,0x01,
0x7F,0x01,
0xAE,0x01,
0xB4,0x01,
0xD5,0x01,
0xF5,0x01,
0x00,0x02,
0x1A,0x02,
0x21,0x02,
0x2A,0x02,
0x30,0x02,
0x54,0x02,
0x80,0x02,
0x98,0x02,
0xC7,0x02,
0xF0,0x02,
0x19,0x03,
0x45,0x03,
0x71,0x03,
0x9E,0x03,
0xC7,0x03,
0xF3,0x03,
0x01,0x04,
0x18,0x04,
0x36,0x04,
0x44,0x04,
0x62,0x04,
0x89,0x04,
0xD0,0x04,
0x02,0x05,
0x37,0x05,
0x69,0x05,
0xA1,0x05,
0xD3,0x05,
0x06,0x06,
0x3B,0x06,
0x76,0x06,
0x8D,0x06,
0xB9,0x06,
0xF1,0x06,
0x17,0x07,
0x5E,0x07,
0x99,0x07,
0xCE,0x07,
0x03,0x08,
0x38,0x08,
0x6D,0x08,
0x9C,0x08,
0xCC,0x08,
0x04,0x09,
0x37,0x09,
0x79,0x09,
0xB8,0x09,
0xE8,0x09,
0x21,0x0A,
0x41,0x0A,
0x4D,0x0A,
0x6E,0x0A,
0x88,0x0A,
0x99,0x0A,
0xA2,0x0A,
0xBC,0x0A,
0xE8,0x0A,
0x02,0x0B,
0x31,0x0B,
0x4D,0x0B,
0x6B,0x0B,
0x9D,0x0B,
0xC6,0x0B,
0xDD,0x0B,
0xFD,0x0B,
0x26,0x0C,
0x3D,0x0C,
0x65,0x0C,
0x81,0x0C,
0x9D,0x0C,
0xCC,0x0C,
0xF8,0x0C,
0x0E,0x0D,
0x26,0x0D,
0x40,0x0D,
0x5C,0x0D,
0x77,0x0D,
0xA0,0x0D,
0xBE,0x0D,
0xEA,0x0D,
0x06,0x0E,
0x27,0x0E,
0x3E,0x0E,
0x5E,0x0E,

// space (32): w=1, h=1
0x80,0x12,0x4A,
0x00,

// exclam (33): w=8, h=19
0x47,0x12,
0x00,0x00,0x00,0xC0,0xF8,0xFF,0x3F,0x07,
0x00,0x00,0x38,0x3F,0x0F,0x01,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,

// quotedbl (34): w=7, h=5
0x86,0x00,0x92,
0x1E,0x0F,0x07,0x00,0x1E,0x0F,0x07,

// numbersign (35): w=14, h=18
0x4D,0x2D,
0x00,0x00,0x00,0x60,0x60,0xE0,0xF8,0x7F,0x67,0xE0,
0xF8,0x7F,0x67,0x60,
0x18,0x98,0xF8,0x7C,0x1F,0x9B,0xF8,0x7C,0x1F,0x1B,
0x18,0x00,0x00,0x00,
0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// dollar (36): w=16, h=22
0xCF,0x00,0x42,
0x00,0x00,0x00,0xF0,0xFC,0xFC,0x8E,0x06,0x86,0xF6,
0x3E,0x07,0x07,0x3C,0x3C,0x38,
0xC0,0xC0,0xC0,0x00,0x01,0x81,0xE3,0x3F,0x07,0x07,
0x8E,0xFC,0xFC,0x78,0x00,0x00,
0x01,0x03,0x07,0x37,0x1E,0x07,0x06,0x06,0x06,0x07,
0x03,0x03,0x01,0x00,0x00,0x00,

// percent (37): w=18, h=18
0x51,0x3B,
0x00,0xF0,0xF8,0x8C,0x86,0x86,0xC6,0x7E,0x3C,0x80,
0xE0,0xF0,0x38,0x1C,0x0E,0x07,0x03,0x01,
0x00,0x00,0x81,0xC1,0xE1,0x71,0x3C,0x1E,0x0F,0xE3,
0xF1,0x18,0x0C,0x0C,0x8C,0xFC,0x78,0x00,
0x02,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x01,
0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,

// ampersand (38): w=15, h=18
0x4E,0x35,
0x00,0x00,0x00,0x00,0x38,0xFE,0xFE,0xC7,0xC3,0xE3,
0x7F,0x3E,0x1C,0x00,0x00,
0xF0,0xF8,0xFC,0x8E,0x07,0x03,0x03,0x87,0xCF,0xFC,
0xF8,0xFE,0x8E,0x06,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x01,
0x00,0x01,0x03,0x03,0x02,

// quotesingle (39): w=3, h=5
0x82,0x00,0x93,
0x1C,0x0F,0x07,

// parenleft (40): w=10, h=24
0xC9,0x00,0x61,
0x00,0x00,0xC0,0xF0,0x78,0x1C,0x0E,0x07,0x03,0x01,
0xFC,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x3F,0x7F,0xF0,0xC0,0x80,0x00,0x00,0x00,0x00,

// parenright (41): w=10, h=24
0x49,0x06,
0x00,0x00,0x00,0x00,0x01,0x03,0x0F,0xFE,0xFC,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0xFF,0x3F,
0x80,0xC0,0xE0,0x70,0x38,0x1E,0x0F,0x03,0x00,0x00,

// asterisk (42): w=8, h=7
0x87,0x00,0x92,
0x66,0x76,0x3C,0x1F,0x7F,0x6C,0x06,0x06,

// plus (43): w=12, h=12
0x2B,0xDA,
0x60,0x60,0x60,0x60,0xE0,0xF8,0xFF,0x7F,0x63,0x60,
0x60,0x60,
0x00,0x00,0x00,0x0C,0x0F,0x0F,0x01,0x00,0x00,0x00,
0x00,0x00,

// comma (44): w=4, h=6
0x83,0x10,0x57,
0x20,0x37,0x1F,0x0F,

// hyphen (45): w=6, h=3
0x85,0x0B,0x65,
0x07,0x07,0x07,0x07,0x07,0x07,

// period (46): w=3, h=3
0x82,0x10,0x67,
0x07,0x07,0x07,

// slash (47): w=11, h=19
0xCA,0x00,0x51,
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x70,0x3C,0x0F,
0x03,
0x00,0x80,0xE0,0x78,0x1E,0x07,0x01,0x00,0x00,0x00,
0x00,
0x06,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// zero (48): w=14, h=18
0x4D,0x2C,
0x00,0x80,0xE0,0xF8,0x7C,0x1E,0x07,0x07,0x03,0x03,
0x87,0xFF,0xFE,0x7C,
0x7C,0xFF,0xFF,0x83,0x00,0x00,0x80,0x80,0xE0,0xF8,
0x7F,0x1F,0x07,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,

// one (49): w=7, h=18
0xC6,0x01,0xA5,
0x18,0x18,0x98,0xFC,0xFF,0x7F,0x07,
0x80,0xF8,0xFF,0x7F,0x07,0x00,0x00,
0x03,0x03,0x03,0x00,0x00,0x00,0x00,

// two (50): w=15, h=18
0x4E,0x26,
0x00,0x00,0x00,0x18,0x1C,0x1E,0x0E,0x07,0x03,0x03,
0x83,0xC7,0xFF,0xFE,0x3C,
0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x0E,0x07,0x03,
0x03,0x01,0x01,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x00,0x00,0x00,

// three (51): w=13, h=18
0x4C,0x2D,
0x00,0x00,0x38,0x3C,0x3E,0x07,0x03,0x03,0x83,0xC7,
0xFF,0x7E,0x3C,
0xC0,0xC0,0xC0,0x80,0x00,0x00,0x03,0x83,0xC7,0xFF,
0xFE,0x78,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,

// four (52): w=13, h=18
0x4C,0x2D,
0x00,0x00,0x00,0x80,0xC0,0xE0,0x70,0x38,0x1C,0xFE,
0xFF,0x7F,0x07,
0x38,0x3C,0x3F,0x37,0x31,0x30,0xB0,0xF8,0xFF,0x7F,
0x37,0x30,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,
0x00,0x00,0x00,

// five (53): w=14, h=18
0x4D,0x2C,
0x00,0x00,0xC0,0xF8,0xFF,0xFF,0xC7,0xC3,0xC3,0xC3,
0x83,0x03,0x03,0x03,
0xE0,0xE0,0xE1,0x81,0x01,0x00,0x80,0x80,0xE1,0xFF,
0x7F,0x3F,0x00,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,

// six (54): w=14, h=18
0x4D,0x2C,
0x00,0xC0,0xF0,0xF8,0x3C,0x8E,0x86,0x87,0x83,0x83,
0x07,0x0F,0x0E,0x0C,
0x7C,0xFF,0xFF,0x87,0x03,0x01,0x81,0xC1,0xE3,0xFF,
0x7F,0x1E,0x00,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,

// seven (55): w=14, h=18
0xCD,0x01,0x62,
0x00,0x00,0x03,0x03,0x03,0x03,0x83,0xE3,0xF3,0x7B,
0x1F,0x0F,0x07,0x03,
0x00,0xC0,0xE0,0xF8,0x3C,0x1F,0x07,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// eight (56): w=13, h=18
0x4C,0x2D,
0x00,0x00,0x00,0x78,0xFC,0xFE,0xC7,0x83,0x83,0xC7,
0xFF,0x7E,0x3C,
0x70,0xFC,0xFE,0x8E,0x07,0x03,0x03,0x83,0xC7,0xFF,
0xFE,0x3C,0x00,
0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,
0x00,0x00,0x00,

// nine (57): w=14, h=18
0x4D,0x2C,
0x00,0x00,0xE0,0xF8,0xFC,0x1E,0x07,0x07,0x03,0x03,
0xC7,0xFF,0xFE,0x7C,
0xC0,0xC0,0xC3,0x87,0x0F,0x0E,0x8C,0x8C,0xEE,0xFF,
0x7F,0x1F,0x07,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,

// colon (58): w=6, h=14
0x25,0xB9,
0x00,0x00,0x00,0x07,0x07,0x07,
0x38,0x38,0x38,0x00,0x00,0x00,

// semicolon (59): w=7, h=17
0x46,0xB3,
0x00,0x00,0x00,0x00,0x07,0x07,0x07,
0x00,0xB8,0xF8,0x78,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// less (60): w=14, h=11
0x2D,0xD8,
0x40,0xE0,0xE0,0xB0,0xB0,0x18,0x18,0x0C,0x0C,0x06,
0x06,0x03,0x03,0x01,
0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x06,0x06,0x04,
0x00,0x00,0x00,0x00,

// equal (61): w=11, h=5
0x8A,0x09,0x75,
0x18,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,
0x03,

// greater (62): w=14, h=11
0x2D,0xCE,
0x00,0x00,0x00,0x00,0x01,0x83,0x83,0xC6,0xC6,0x6C,
0x6C,0x38,0x38,0x10,
0x04,0x06,0x06,0x03,0x03,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// question (63): w=12, h=19
0xCB,0x00,0x93,
0x30,0x3C,0x3E,0x0E,0x07,0x83,0x83,0xC3,0xE7,0xFF,
0x7E,0x3C,
0x00,0x38,0x3C,0x3E,0x07,0x03,0x01,0x01,0x00,0x00,
0x00,0x00,
0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,

// at (64): w=23, h=23
0x56,0x13,
0x00,0x00,0x80,0xE0,0xF0,0x78,0x3C,0x1C,0x8E,0xC6,
0xC7,0x63,0x63,0xE3,0xC3,0xC3,0xE3,0x67,0x06,0x0E,
0xFC,0xF8,0xE0,
0xFC,0xFF,0xFF,0x03,0x00,0x78,0xFE,0xFF,0x87,0x01,
0x00,0xC0,0xF0,0xFC,0x9F,0x07,0x01,0x80,0xE0,0xF8,
0x7F,0x1F,0x07,
0x01,0x0F,0x1F,0x1E,0x38,0x30,0x71,0x63,0x63,0x63,
0x63,0x71,0x31,0x31,0x03,0x03,0x03,0x03,0x01,0x00,
0x00,0x00,0x00,

// A (65): w=16, h=19
0x4F,0x0F,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0x7C,
0x1E,0x0F,0xFF,0xFF,0xF0,0x00,
0x00,0x80,0xE0,0xF0,0x7C,0x3F,0x3F,0x33,0x30,0x30,
0x30,0x30,0x3F,0xFF,0xFF,0xE0,
0x06,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x07,0x07,

// B (66): w=17, h=19
0x50,0x13,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,
0x03,0x03,0x83,0xC7,0xFF,0xFE,0x7C,
0x80,0xF0,0xFF,0x7F,0x0F,0x03,0x03,0x03,0x03,0x03,
0x03,0x83,0xC3,0xFF,0xFF,0x7C,0x00,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x07,
0x07,0x03,0x03,0x01,0x00,0x00,0x00,

// C (67): w=16, h=19
0x4F,0x19,
0x80,0xE0,0xF0,0xF8,0x3C,0x0E,0x0E,0x07,0x07,0x03,
0x03,0x03,0x07,0x1F,0x1E,0x1C,
0x7F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xC0,0xE0,0xE0,0x60,0x00,
0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x06,0x07,0x07,
0x03,0x03,0x01,0x00,0x00,0x00,

// D (68): w=18, h=19
0x51,0x13,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,
0x03,0x03,0x07,0x07,0x0E,0xFE,0xFC,0xF0,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xE0,0xF8,0x7F,0x3F,0x07,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x07,
0x07,0x03,0x03,0x01,0x00,0x00,0x00,0x00,

// E (69): w=16, h=19
0x4F,0x12,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,
0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x00,0x00,0x00,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x06,0x06,0x00,0x00,0x00,

// F (70): w=16, h=19
0xCF,0x00,0x62,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,
0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x00,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=17, h=19
0x50,0x19,
0x80,0xE0,0xF0,0xF8,0x3C,0x0E,0x0E,0x07,0x07,0x03,
0x03,0x03,0x03,0x07,0x1E,0x1E,0x18,
0x7F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x0E,0x8E,0xEE,0xFE,0xFE,0x3E,0x06,
0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x06,0x06,0x07,
0x03,0x01,0x07,0x07,0x01,0x00,0x00,

// H (72): w=19, h=19
0x52,0x12,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,
0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0xF3,0xFF,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// I (73): w=7, h=19
0x46,0x12,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// J (74): w=14, h=19
0x4D,0x12,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xF0,0xFF,0xFF,0x0F,
0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x80,0xF0,0xFF,
0x7F,0x0F,0x00,0x00,
0x01,0x03,0x07,0x07,0x06,0x06,0x07,0x03,0x03,0x01,
0x00,0x00,0x00,0x00,

// K (75): w=18, h=19
0x51,0x12,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x80,0xC0,0xE0,
0xF0,0x78,0x3C,0x1E,0x0F,0x07,0x03,0x01,
0x00,0xF0,0xFF,0xFF,0x1F,0x0F,0x07,0x07,0x0F,0x3F,
0x78,0xF0,0xC0,0x80,0x00,0x00,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x07,0x07,0x06,0x00,0x00,0x00,

// L (76): w=12, h=19
0x4B,0x15,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,
0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x06,

// M (77): w=23, h=19
0x56,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x7F,0x3F,0xFE,0xF0,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xF0,0x3C,0xFE,
0xFF,0xFF,0x0F,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x3F,0xFF,0xFE,
0xC0,0xF0,0x78,0x3E,0x0F,0x07,0x01,0xF0,0xFF,0xFF,
0x0F,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x07,0x01,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,
0x00,0x00,0x00,

// N (78): w=19, h=19
0x52,0x12,
0x00,0x00,0x00,0xF0,0xFF,0x7F,0x1F,0xFC,0xF0,0xC0,
0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x01,0x07,0x3F,
0xFE,0xF0,0x80,0xE0,0xFF,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// O (79): w=17, h=19
0x50,0x19,
0x80,0xE0,0xF0,0xF8,0x3C,0x0E,0x0E,0x07,0x07,0x03,
0x03,0x03,0x07,0x1F,0xFE,0xFC,0xF0,
0x7F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xC0,0xE0,0xF8,0x7F,0x3F,0x0F,
0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x06,0x07,0x07,
0x03,0x03,0x01,0x00,0x00,0x00,0x00,

// P (80): w=17, h=19
0x50,0x12,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,
0x03,0x03,0x83,0xC7,0xFF,0xFE,0x3C,
0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x01,0x01,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=17, h=19
0x50,0x19,
0x80,0xE0,0xF0,0xF8,0x3C,0x0E,0x0E,0x07,0x07,0x03,
0x03,0x03,0x07,0x1F,0xFE,0xFC,0xF0,
0x7F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x40,0xC0,0xC0,
0xC0,0x80,0xE0,0xF8,0x7F,0x3F,0x0F,
0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x06,0x06,0x07,
0x03,0x07,0x07,0x06,0x04,0x00,0x00,

// R (82): w=17, h=19
0x50,0x12,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,
0x03,0x03,0x83,0xC7,0xFF,0xFE,0x3C,
0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,0x03,0x03,0x03,
0x03,0x07,0xFF,0xFF,0xFD,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x07,0x00,0x00,0x00,

// S (83): w=15, h=19
0x4E,0x19,
0x00,0x00,0x70,0xFC,0xFE,0x8E,0x07,0x03,0x03,0x03,
0x03,0x07,0x1E,0x1E,0x1C,
0xE0,0xE0,0xE0,0x01,0x01,0x03,0x03,0x03,0x07,0x07,
0x8E,0xFE,0xFC,0x78,0x00,
0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x06,0x07,
0x03,0x03,0x01,0x00,0x00,

// T (84): w=15, h=19
0xCE,0x00,0x81,
0x03,0x03,0x03,0x03,0x03,0xF3,0xFF,0xFF,0x0F,0x03,
0x03,0x03,0x03,0x03,0x03,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// U (85): w=18, h=19
0x51,0x18,
0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,
0xF0,0xFF,0xFF,0x8F,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xE0,0xF8,0xFF,0x3F,0x0F,0x00,0x00,
0x00,0x03,0x03,0x07,0x07,0x06,0x06,0x06,0x07,0x07,
0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// V (86): w=16, h=19
0xCF,0x00,0x92,
0x1F,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x80,
0xC0,0xF0,0x7C,0x3F,0x0F,0x03,
0x00,0x1F,0xFF,0xFF,0x80,0xC0,0xE0,0xF8,0x3E,0x0F,
0x07,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x07,0x07,0x07,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=21, h=19
0xD4,0x00,0x92,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xC0,0xF8,0xFF,
0xFF,0xFF,0x00,0x00,0x00,0x80,0xF0,0xFC,0x7F,0x0F,
0x03,
0x1F,0xFF,0xFF,0xE0,0xF0,0x7C,0x1F,0x07,0x01,0x1F,
0xFF,0xFF,0xC0,0xF0,0xFE,0x3F,0x0F,0x01,0x00,0x00,
0x00,
0x00,0x07,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x07,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,

// X (88): w=20, h=19
0xD3,0x00,0x52,
0x00,0x00,0x00,0x00,0x03,0x0F,0x1F,0x7E,0xF8,0xE0,
0xC0,0xC0,0xE0,0x70,0x38,0x3C,0x1E,0x0F,0x07,0x03,
0x00,0x00,0x80,0xC0,0xE0,0xF0,0x78,0x1C,0x0F,0x07,
0x1F,0x7F,0xFC,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,
0x06,0x07,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// Y (89): w=15, h=19
0xCE,0x00,0x92,
0x07,0x3F,0xFF,0xF8,0xC0,0x00,0x00,0xC0,0xE0,0xF8,
0x3C,0x1E,0x0F,0x07,0x03,
0x00,0x00,0x83,0xFF,0xFF,0x7E,0x0F,0x07,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// Z (90): w=18, h=19
0xD1,0x00,0x52,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x83,0xC3,
0xE3,0xF3,0x7B,0x3F,0x1F,0x0F,0x07,0x03,
0x00,0x80,0xC0,0xE0,0xF0,0x78,0x3C,0x1F,0x0F,0x07,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,
0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,

// bracketleft (91): w=10, h=24
0x49,0x06,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x03,0x03,
0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,
0xF0,0xFF,0xFF,0xCF,0xC0,0x00,0x00,0x00,0x00,0x00,

// backslash (92): w=3, h=19
0xC2,0x00,0x95,
0xFF,0xFF,0x00,
0x03,0xFF,0xFC,
0x00,0x07,0x07,

// bracketright (93): w=10, h=24
0xC9,0x00,0x52,
0x00,0x00,0x00,0x00,0x00,0x03,0xF3,0xFF,0xFF,0x0F,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,
0xC0,0xC0,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,

// asciicircum (94): w=12, h=9
0x2B,0x19,
0x00,0x80,0xC0,0xF0,0x78,0x1C,0x0E,0x07,0x1F,0x7C,
0xF0,0xC0,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,

// underscore (95): w=14, h=2
0x8D,0x16,0x36,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,

// grave (96): w=6, h=4
0x85,0x00,0x92,
0x01,0x03,0x07,0x0E,0x0C,0x08,

// a (97): w=12, h=14
0x2B,0xB4,
0x00,0x00,0x8C,0xCE,0xCE,0xE7,0x63,0x63,0xF3,0xFF,
0xFF,0x1E,
0x1E,0x3F,0x3F,0x31,0x30,0x38,0x18,0x3C,0x3F,0x3F,
0x03,0x00,

// b (98): w=14, h=19
0x4D,0x13,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0xCF,0xE0,0x60,0x60,
0xE0,0xE0,0xC0,0x00,
0x00,0xF0,0xFF,0xFF,0x0F,0x01,0x00,0x00,0x00,0xC0,
0xF0,0xFF,0x3F,0x0F,
0x07,0x07,0x07,0x03,0x07,0x06,0x06,0x07,0x07,0x03,
0x01,0x00,0x00,0x00,

// c (99): w=12, h=14
0x2B,0xB3,
0xC0,0xF0,0xF8,0x3C,0x0E,0x06,0x07,0x03,0x03,0x07,
0x0E,0x0C,
0x07,0x1F,0x1F,0x38,0x30,0x30,0x38,0x18,0x1C,0x0C,
0x04,0x00,

// d (100): w=15, h=19
0x4E,0x12,
0x00,0x00,0x00,0x80,0xC0,0xC0,0xE0,0x60,0x60,0xE0,
0xC0,0xF0,0xFF,0xFF,0x0F,
0xF8,0xFE,0xFF,0x07,0x01,0x00,0x00,0x00,0x80,0xE0,
0xFF,0xFF,0x1F,0x00,0x00,
0x00,0x03,0x03,0x07,0x06,0x06,0x07,0x03,0x07,0x07,
0x07,0x00,0x00,0x00,0x00,

// e (101): w=13, h=14
0x2C,0xB3,
0xC0,0xF0,0xF8,0xFC,0xCE,0xC6,0xC7,0xC3,0xC3,0xC7,
0xFF,0xFE,0x78,
0x07,0x1F,0x1F,0x38,0x30,0x30,0x38,0x18,0x1C,0x0C,
0x04,0x00,0x00,

// f (102): w=9, h=19
0xC8,0x00,0x72,
0x00,0x60,0x60,0xF8,0xFE,0xFF,0x67,0x63,0x03,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

// g (103): w=16, h=19
0x4F,0xA7,
0x00,0x00,0xC0,0xF0,0xF8,0x3C,0x0E,0x06,0x07,0x03,
0x03,0x87,0xFE,0xFF,0x7F,0x07,
0x80,0x80,0x87,0x1F,0x1F,0x38,0x30,0x30,0x38,0x98,
0xFC,0xFF,0x7F,0x07,0x00,0x00,
0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x07,0x03,
0x03,0x00,0x00,0x00,0x00,0x00,

// h (104): w=13, h=19
0x4C,0x14,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0xCF,0x60,0x60,0x60,
0xE0,0xC0,0x80,
0x00,0xF0,0xFF,0xFF,0x0F,0x01,0x00,0x00,0x00,0xF0,
0xFF,0xFF,0x0F,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x07,0x00,0x00,

// i (105): w=7, h=19
0x46,0x12,
0x00,0x00,0x00,0xE0,0xE7,0xE7,0x07,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// j (106): w=10, h=24
0x49,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE7,0xE7,0x07,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,
0xC0,0xC0,0xF8,0xFF,0x3F,0x07,0x00,0x00,0x00,0x00,

// k (107): w=13, h=19
0x4C,0x13,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x80,0xC0,
0xE0,0x60,0x20,
0x00,0xF0,0xFF,0xFF,0x0F,0x0E,0x1E,0x7F,0xFB,0xE1,
0x80,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x07,
0x07,0x06,0x00,

// l (108): w=7, h=19
0x46,0x12,
0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,
0x00,0xF0,0xFF,0xFF,0x0F,0x00,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,

// m (109): w=19, h=14
0x32,0xB4,
0x00,0x80,0xF8,0xFF,0x7F,0x0F,0x06,0x03,0x83,0xFF,
0xFF,0x7E,0x0E,0x07,0x03,0x83,0xFF,0xFF,0x7E,
0x38,0x3F,0x3F,0x07,0x00,0x00,0x00,0x38,0x3F,0x3F,
0x07,0x00,0x00,0x00,0x38,0x3F,0x3F,0x07,0x00,

// n (110): w=13, h=14
0x2C,0xB4,
0x00,0x80,0xF8,0xFF,0x7F,0x0F,0x06,0x03,0x03,0x83,
0xFF,0xFE,0x7C,
0x38,0x3F,0x3F,0x07,0x00,0x00,0x00,0x00,0x38,0x3F,
0x3F,0x07,0x00,

// o (111): w=13, h=14
0x2C,0xB3,
0xC0,0xF0,0xF8,0x3C,0x0E,0x06,0x07,0x03,0x03,0x07,
0xFE,0xFE,0xF8,
0x07,0x1F,0x1F,0x38,0x30,0x30,0x38,0x18,0x1C,0x0F,
0x07,0x03,0x00,

// p (112): w=15, h=19
0x4E,0xAD,
0x00,0x00,0xC0,0xF8,0xFF,0x3F,0x0F,0x06,0x07,0x03,
0x03,0x07,0xFE,0xFE,0xF8,
0x80,0xF8,0xFF,0x7F,0x1F,0x38,0x30,0x30,0x38,0x18,
0x1C,0x0F,0x07,0x03,0x00,
0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// q (113): w=14, h=19
0x4D,0xB3,
0xC0,0xF0,0xF8,0x3C,0x0E,0x06,0x07,0x03,0x03,0x07,
0xFE,0xFF,0xFF,0x07,
0x07,0x1F,0x1F,0x38,0x30,0x30,0x38,0x98,0xFC,0xFF,
0x7F,0x07,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,
0x00,0x00,0x00,0x00,

// r (114): w=10, h=14
0x29,0xB2,
0x00,0x80,0xF8,0xFF,0x7F,0x0F,0x06,0x07,0x07,0x07,
0x38,0x3F,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,

// s (115): w=11, h=14
0x2A,0xB4,
0x00,0x38,0x7C,0x7E,0xE6,0xE7,0xC3,0xC3,0x8F,0x8F,
0x0E,
0x0E,0x1E,0x3E,0x38,0x30,0x30,0x30,0x39,0x1F,0x1F,
0x0F,

// t (116): w=8, h=18
0x47,0x38,
0x00,0x30,0xB0,0xF8,0xFF,0x7F,0x37,0x30,
0xC0,0xF8,0xFF,0x3F,0x07,0x00,0x00,0x00,
0x01,0x03,0x03,0x03,0x03,0x00,0x00,0x00,

// u (117): w=13, h=14
0x2C,0xB9,
0x80,0xF8,0xFF,0x7F,0x07,0x00,0x00,0x00,0x80,0xF8,
0xFF,0x7F,0x07,
0x0F,0x1F,0x3F,0x30,0x30,0x38,0x1C,0x3E,0x3F,0x3F,
0x07,0x00,0x00,

// v (118): w=12, h=14
0xAB,0x05,0x83,
0xFF,0xFF,0xFF,0x00,0x00,0x80,0xE0,0xF8,0x7E,0x1F,
0x07,0x03,
0x03,0x3F,0x3F,0x3C,0x1E,0x0F,0x03,0x01,0x00,0x00,
0x00,0x00,

// w (119): w=19, h=14
0xB2,0x05,0x72,
0xFF,0xFF,0xFF,0x00,0x80,0xE0,0xF8,0x3E,0x0F,0xFF,
0xFF,0x00,0x80,0xE0,0xF8,0x7C,0x1F,0x07,0x03,
0x01,0x3F,0x3F,0x3E,0x0F,0x03,0x00,0x00,0x00,0x3F,
0x3F,0x3E,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,

// x (120): w=14, h=14
0x2D,0xAC,
0x00,0x00,0x00,0x03,0x0F,0xBF,0xFC,0xF0,0xF8,0x1C,
0x0E,0x07,0x03,0x01,
0x30,0x38,0x1C,0x0E,0x07,0x03,0x01,0x01,0x0F,0x3F,
0x3C,0x30,0x00,0x00,

// y (121): w=14, h=19
0x4D,0xB2,
0x00,0x0F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0xC0,0xF0,
0xFC,0x3F,0x0F,0x03,
0x00,0x00,0x00,0x87,0xFF,0xFF,0x7C,0x1F,0x07,0x03,
0x00,0x00,0x00,0x00,
0x06,0x06,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// z (122): w=13, h=14
0x2C,0xAD,
0x00,0x00,0x00,0x03,0x83,0xC3,0xE3,0x73,0x3B,0x1F,
0x0F,0x07,0x03,
0x38,0x3C,0x3E,0x37,0x33,0x31,0x30,0x30,0x30,0x30,
0x30,0x00,0x00,

// braceleft (123): w=10, h=24
0xC9,0x00,0x72,
0x00,0x00,0x00,0xF0,0xFC,0x3E,0x07,0x03,0x03,0x03,
0x0C,0x0C,0xFF,0xF7,0x03,0x00,0x00,0x00,0x00,0x00,
0x78,0xFF,0xCF,0xC1,0xC0,0x00,0x00,0x00,0x00,0x00,

// bar (124): w=7, h=24
0x46,0x12,
0x00,0x00,0x00,0x00,0xF0,0xFF,0x0F,
0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,
0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,

// braceright (125): w=10, h=24
0x49,0x0D,
0x00,0x00,0x00,0x00,0x00,0x03,0x83,0xF3,0xFF,0x1E,
0x00,0x00,0x00,0x00,0x00,0xC0,0xF7,0xFF,0x0D,0x0C,
0xC0,0xC0,0xC0,0xE0,0x7C,0x3F,0x0F,0x00,0x00,0x00,

// asciitilde (126): w=12, h=4
0x8B,0x0A,0x65,
0x0C,0x0E,0x07,0x03,0x03,0x07,0x0E,0x0C,0x0C,0x0E,
0x07,0x03

};
// 3503 bytes
// 3693 bytes with FAST_FONT_INDEX
