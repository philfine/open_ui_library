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

// charB18 = "Bitstream Charter Black"

const char font_charB18[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD5,0x00,
0xDD,0x00,
0x0F,0x01,
0x3B,0x01,
0x7F,0x01,
0xB7,0x01,
0xBF,0x01,
0xD9,0x01,
0xF3,0x01,
0x07,0x02,
0x26,0x02,
0x33,0x02,
0x3D,0x02,
0x45,0x02,
0x6E,0x02,
0x9A,0x02,
0xBB,0x02,
0xE7,0x02,
0x13,0x03,
0x42,0x03,
0x6E,0x03,
0x9A,0x03,
0xC3,0x03,
0xEF,0x03,
0x1B,0x04,
0x27,0x04,
0x3B,0x04,
0x5A,0x04,
0x6B,0x04,
0x8A,0x04,
0xB0,0x04,
0xEB,0x04,
0x23,0x05,
0x52,0x05,
0x81,0x05,
0xB6,0x05,
0xE2,0x05,
0x0B,0x06,
0x40,0x06,
0x7B,0x06,
0x95,0x06,
0xBB,0x06,
0xF3,0x06,
0x1F,0x07,
0x63,0x07,
0x98,0x07,
0xD0,0x07,
0xFC,0x07,
0x34,0x08,
0x6C,0x08,
0x95,0x08,
0xC7,0x08,
0xFC,0x08,
0x37,0x09,
0x84,0x09,
0xBC,0x09,
0xF1,0x09,
0x1D,0x0A,
0x37,0x0A,
0x60,0x0A,
0x7A,0x0A,
0x8C,0x0A,
0x9B,0x0A,
0xA3,0x0A,
0xC1,0x0A,
0xF0,0x0A,
0x08,0x0B,
0x37,0x0B,
0x53,0x0B,
0x76,0x0B,
0xA2,0x0B,
0xD1,0x0B,
0xE8,0x0B,
0x06,0x0C,
0x35,0x0C,
0x4C,0x0C,
0x7A,0x0C,
0x9A,0x0C,
0xB8,0x0C,
0xE7,0x0C,
0x16,0x0D,
0x2E,0x0D,
0x46,0x0D,
0x5A,0x0D,
0x7A,0x0D,
0x9A,0x0D,
0xC8,0x0D,
0xE8,0x0D,
0x17,0x0E,
0x31,0x0E,
0x51,0x0E,
0x5A,0x0E,
0x7A,0x0E,

// space (32): w=1, h=1
0x80,0x11,0x4C,
0x00,

// exclam (33): w=5, h=17
0x44,0x36,
0x1E,0xFF,0xFF,0xFF,0x1E,
0xE0,0xF3,0xF7,0xF3,0xE0,
0x00,0x01,0x01,0x01,0x00,

// quotedbl (34): w=6, h=7
0x05,0x0F,
0x1F,0x7F,0x00,0x00,0x1F,0x7F,

// numbersign (35): w=16, h=19
0x4F,0x10,
0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xF8,0xFF,0xCF,0xC0,
0xC0,0xF8,0xFF,0xCF,0xC0,0xC0,
0x18,0x18,0x18,0xF8,0xFE,0x1F,0x1B,0x98,0xF8,0xFE,
0x1F,0x1B,0x18,0x18,0x18,0x00,
0x00,0x04,0x07,0x07,0x00,0x00,0x04,0x07,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,

// dollar (36): w=14, h=21
0x4D,0x0F,
0xF0,0xF8,0xFC,0xFC,0xCE,0x86,0xFF,0xFF,0x06,0x06,
0x1E,0x3C,0x3C,0x00,
0xE0,0xE1,0xE3,0x03,0x07,0x07,0xFF,0xFF,0x0F,0x8F,
0xFF,0xFE,0xFC,0x78,
0x01,0x01,0x03,0x03,0x03,0x03,0x3F,0x3F,0x03,0x03,
0x01,0x01,0x00,0x00,

// percent (37): w=22, h=17
0x55,0x2F,
0xFC,0xFE,0xFF,0x03,0x01,0x03,0xFF,0xFE,0xFC,0x00,
0x00,0xC0,0xE0,0x38,0x1C,0x87,0x83,0x80,0x80,0x80,
0x00,0x00,
0x00,0x01,0x03,0x03,0x02,0x83,0xC3,0x71,0x38,0x0E,
0x07,0x01,0x00,0x7E,0xFF,0xFF,0x81,0x00,0x81,0xFF,
0xFF,0x7E,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,

// ampersand (38): w=18, h=17
0x51,0x2F,
0x00,0x38,0x7C,0xFE,0xFF,0xE7,0xC3,0x83,0xC7,0xFF,
0x7E,0x7E,0x38,0x80,0x80,0x80,0x80,0x80,
0x7C,0xFE,0xFE,0xFF,0xE1,0xC3,0x87,0x8F,0x9F,0xBF,
0xFE,0xFC,0xF8,0xF8,0xCF,0x83,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,

// quoteright (39): w=6, h=8
0x05,0x2F,
0xC0,0xC7,0x67,0x7F,0x3F,0x0E,

// parenleft (40): w=8, h=22
0x47,0x15,
0x80,0xF0,0xF8,0xFC,0x1E,0x07,0x03,0x03,
0x7F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x03,0x07,0x0F,0x1F,0x38,0x30,0x30,

// parenright (41): w=8, h=22
0x47,0x10,
0x03,0x03,0x07,0x1E,0xFC,0xFC,0xF0,0xC0,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0x30,0x30,0x38,0x1E,0x0F,0x0F,0x03,0x00,

// asterisk (42): w=9, h=10
0x28,0x10,
0x10,0x38,0xB0,0xE6,0x1F,0xE6,0xB0,0x38,0x10,
0x00,0x01,0x03,0x01,0x00,0x03,0x03,0x01,0x00,

// plus (43): w=14, h=14
0xAD,0x04,0x88,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,
0xC0,0xC0,0xC0,0xC0,
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,
0x00,0x00,0x00,0x00,

// comma (44): w=5, h=9
0xA4,0x0E,0x57,
0x8E,0xCF,0xFF,0x7F,0x1E,
0x01,0x00,0x00,0x00,0x00,

// hyphen (45): w=7, h=3
0x86,0x0B,0x55,
0x07,0x07,0x07,0x07,0x07,0x07,0x07,

// period (46): w=5, h=5
0x84,0x0D,0x66,
0x0E,0x1F,0x1F,0x1F,0x0E,

// slash (47): w=13, h=19
0x4C,0x22,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0x3C,
0x0F,0x07,0x01,
0x00,0x00,0x80,0xE0,0x78,0x1E,0x0F,0x03,0x00,0x00,
0x00,0x00,0x00,
0x04,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// zero (48): w=14, h=17
0x4D,0x2F,
0xE0,0xF8,0xFC,0xFE,0xFE,0x0F,0x03,0x03,0x0F,0xFE,
0xFE,0xFC,0xF8,0xE0,
0x0F,0x3F,0x7F,0xFF,0xFF,0xE0,0x80,0x80,0xC0,0xFF,
0xFF,0x7F,0x3F,0x0F,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,

// one (49): w=10, h=17
0xC9,0x01,0x87,
0x04,0x06,0x06,0x06,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// two (50): w=14, h=17
0x4D,0x2F,
0x18,0x3C,0x3E,0x3E,0x3F,0x03,0x03,0x03,0x87,0xFF,
0xFE,0xFE,0xFC,0x78,
0xC0,0xC0,0xE0,0xF0,0xF0,0xD8,0xDC,0xCE,0xCF,0xC7,
0xC3,0xC3,0xF1,0xF0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,

// three (51): w=14, h=17
0x4D,0x2F,
0x00,0x3C,0x3E,0x3E,0x3F,0x03,0x03,0x87,0xFF,0xFF,
0xFE,0x7E,0x7C,0x00,
0x60,0xF0,0xF0,0xF0,0xC3,0x83,0x83,0x83,0xC7,0xFE,
0xFE,0xFE,0x7C,0x38,
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,

// four (52): w=15, h=18
0x4E,0x2E,
0x00,0x00,0x00,0xC0,0xE0,0xF0,0x38,0x1E,0xFF,0xFF,
0xFF,0xFF,0x00,0x00,0x00,
0x1C,0x1E,0x1F,0x1B,0x19,0x18,0x18,0x18,0xFF,0xFF,
0xFF,0xFF,0x18,0x18,0x18,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,
0x03,0x03,0x00,0x00,0x00,

// five (53): w=14, h=17
0x4D,0x2F,
0x00,0xFF,0xFF,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,
0xC7,0x87,0x87,0x00,
0x70,0xF9,0xF8,0xF0,0x80,0x80,0x80,0xC1,0xE3,0xFF,
0xFF,0x7F,0x3F,0x1E,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,

// six (54): w=14, h=17
0x4D,0x2F,
0x80,0xE0,0xF0,0xF8,0xFC,0xBE,0xCE,0xC7,0xC3,0xC3,
0xC3,0x80,0x00,0x00,
0x0F,0x3F,0x7F,0xFF,0xFF,0xE0,0x80,0x80,0xC1,0xFF,
0xFF,0x7F,0x7F,0x1E,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,

// seven (55): w=13, h=18
0x4C,0x35,
0x3F,0x3F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xCF,0xFF,
0x7F,0x1F,0x07,
0x00,0x00,0x00,0xC0,0xE0,0xF8,0x3E,0x0F,0x03,0x01,
0x00,0x00,0x00,
0x00,0x02,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,

// eight (56): w=14, h=17
0x4D,0x2F,
0x00,0x78,0xFC,0xFE,0xFF,0xC3,0xC3,0x83,0xCF,0xFF,
0x7E,0x7C,0x38,0x00,
0x3C,0x7E,0xFE,0xFF,0xE3,0x83,0x83,0x87,0xCF,0xFF,
0xFF,0xFE,0x7E,0x3C,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,

// nine (57): w=14, h=17
0x4D,0x2F,
0xF0,0xF8,0xFC,0xFE,0xFE,0x07,0x03,0x03,0x07,0xFE,
0xFE,0xFC,0xF8,0xF0,
0x00,0x01,0x83,0x87,0x87,0xC7,0xE6,0x76,0x7E,0x3F,
0x1F,0x0F,0x07,0x01,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// colon (58): w=5, h=12
0x24,0xDC,
0x0E,0x9F,0x9F,0x9F,0x0E,
0x07,0x0F,0x0F,0x0F,0x07,

// semicolon (59): w=6, h=17
0x45,0xD6,
0x00,0x0E,0x1F,0x1F,0x1F,0x0E,
0x80,0x8E,0xCF,0xFF,0x7F,0x1E,
0x01,0x01,0x00,0x00,0x00,0x00,

// less (60): w=14, h=14
0xAD,0x04,0x79,
0xC0,0xE0,0xE0,0xE0,0x30,0x30,0x18,0x18,0x1C,0x0C,
0x0C,0x06,0x06,0x07,
0x00,0x01,0x01,0x01,0x03,0x03,0x06,0x06,0x0E,0x0C,
0x0C,0x18,0x18,0x30,

// equal (61): w=15, h=7
0x0E,0xFD,
0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,
0x63,0x63,0x63,0x63,0x63,

// greater (62): w=14, h=14
0xAD,0x04,0x88,
0x03,0x06,0x06,0x0E,0x0C,0x1C,0x18,0x18,0x30,0x30,
0xF0,0xE0,0xE0,0xC0,
0x30,0x18,0x18,0x1C,0x0C,0x0E,0x06,0x06,0x03,0x03,
0x01,0x01,0x01,0x00,

// question (63): w=12, h=17
0x4B,0x29,
0x0E,0x0F,0x0F,0x03,0x81,0x81,0xC3,0xFF,0xFF,0xFE,
0x7E,0x3C,
0x00,0x00,0xE0,0xF7,0xF7,0xF1,0xE1,0x01,0x00,0x00,
0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,

// at (64): w=19, h=21
0x52,0x36,
0x80,0xE0,0xF0,0x38,0x1C,0x0E,0x86,0xC2,0xC3,0x61,
0x21,0x21,0xE1,0xE1,0xE3,0x22,0x06,0x1C,0xF0,
0x3F,0xFF,0xE0,0x80,0x00,0x1E,0x3F,0x7F,0x70,0x60,
0x20,0x30,0x7F,0x7F,0x61,0x20,0x30,0x1C,0x07,
0x00,0x00,0x01,0x03,0x07,0x06,0x0C,0x1C,0x18,0x18,
0x18,0x18,0x18,0x08,0x0C,0x04,0x06,0x00,0x00,

// A (65): w=18, h=17
0x51,0x27,
0x00,0x00,0x00,0x00,0x80,0xF0,0xFE,0x1F,0x3F,0xFF,
0xFF,0xFE,0xF0,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0xE0,0xFC,0x3F,0x07,0x04,0x04,0x04,0x05,
0x07,0x1F,0xFF,0xFF,0xFC,0xE0,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// B (66): w=15, h=17
0x4E,0x2F,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x83,0xFF,
0xFF,0xFF,0x7E,0x3C,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x81,0x83,
0xFF,0xFF,0xFE,0xFE,0x7C,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,

// C (67): w=15, h=17
0x4E,0x2F,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x0F,0x07,0x03,0x03,
0x03,0x03,0x07,0x1F,0x1E,
0x07,0x1F,0x3F,0x7F,0xFF,0xF8,0xE0,0xC0,0x80,0x80,
0x80,0x80,0xC0,0xF8,0xF8,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,

// D (68): w=17, h=17
0x50,0x2F,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x03,
0x07,0x1F,0xFE,0xFE,0xFC,0xF8,0xE0,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x80,
0xC0,0xF0,0xFF,0xFF,0x7F,0x3F,0x0F,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// E (69): w=14, h=17
0x4D,0x2F,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0xE1,
0xE1,0x0F,0x0F,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x07,
0x07,0x00,0xF0,0xF0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,

// F (70): w=13, h=17
0x4C,0x2F,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0xE1,
0xE3,0x0F,0x0F,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x0F,
0x0F,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,

// G (71): w=17, h=17
0x50,0x2F,
0xC0,0xF0,0xF8,0xFC,0xFE,0x3E,0x0F,0x07,0x03,0x03,
0x03,0x03,0x0F,0x3E,0x3E,0x00,0x00,
0x07,0x1F,0x3F,0x7F,0xFF,0xF0,0xE0,0xC0,0x80,0x82,
0x82,0xFE,0xFE,0xFE,0xFE,0x02,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// H (72): w=19, h=17
0x52,0x2F,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,
0x00,0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// I (73): w=8, h=17
0x47,0x2F,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// J (74): w=12, h=17
0x4B,0x29,
0x00,0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0xFF,0xFF,
0x01,0x01,
0xF8,0xF8,0xC0,0x80,0x80,0xE0,0xFF,0xFF,0x7F,0x1F,
0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,
0x00,0x00,

// K (75): w=18, h=17
0x51,0x2E,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x81,0xC0,0xE0,
0xF0,0x39,0x0F,0x07,0x03,0x01,0x01,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x03,0x03,0x0F,0x1F,
0x7F,0xFF,0xFC,0xF0,0xE0,0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// L (76): w=14, h=17
0x4D,0x2E,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0xF0,0xF0,0xF0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,

// M (77): w=22, h=17
0x55,0x2F,
0x01,0x01,0xFF,0xFF,0x07,0x3F,0xFF,0xFF,0xF8,0x80,
0x00,0x00,0x80,0xF8,0x3F,0x07,0xFF,0xFF,0xFF,0xFF,
0x01,0x01,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x03,0x1F,0xFF,0xFF,
0xFC,0xFC,0x1F,0x03,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,
0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,

// N (78): w=17, h=17
0x50,0x2F,
0x01,0x01,0xFF,0xFF,0x1F,0x3F,0xFF,0xFC,0xF0,0xC0,
0x00,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x03,0x0F,0x1F,
0x7F,0xFE,0xF8,0xFF,0xFF,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x00,0x00,

// O (79): w=18, h=17
0x51,0x2F,
0xE0,0xF0,0xF8,0xFC,0xFE,0x1E,0x07,0x03,0x03,0x03,
0x03,0x07,0x1E,0xFE,0xFC,0xF8,0xF0,0xC0,
0x07,0x1F,0x3F,0x7F,0xFF,0xF0,0xC0,0x80,0x80,0x80,
0x80,0xC0,0xF0,0xFF,0x7F,0x3F,0x1F,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// P (80): w=14, h=17
0x4D,0x2F,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x03,0xFF,
0xFF,0xFE,0xFE,0x78,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x02,0x02,0x03,0x03,
0x03,0x01,0x01,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,

// Q (81): w=18, h=22
0x51,0x2F,
0xE0,0xF0,0xF8,0xFC,0xFE,0x1E,0x07,0x03,0x03,0x03,
0x03,0x07,0x1E,0xFE,0xFC,0xF8,0xF0,0xC0,
0x07,0x1F,0x3F,0x7F,0xFF,0xF0,0xC0,0x80,0x80,0x80,
0x80,0xC0,0xF0,0xFF,0x7F,0x3F,0x1F,0x07,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x0F,0x1F,0x3F,
0x3F,0x3F,0x38,0x30,0x30,0x30,0x10,0x00,

// R (82): w=18, h=17
0x51,0x2E,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x03,0x87,
0xFF,0xFF,0xFF,0x7E,0x3C,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x03,0x1F,
0xFF,0xFE,0xFE,0xFC,0xE0,0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// S (83): w=13, h=17
0x4C,0x2F,
0x78,0xFC,0xFE,0xFF,0xE7,0xC3,0xC3,0x83,0x83,0x83,
0x1F,0x1E,0x1E,
0xF0,0xF0,0xC1,0x83,0x83,0x83,0x87,0x87,0xCF,0xFF,
0xFF,0x7F,0x3C,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,

// T (84): w=16, h=17
0x4F,0x28,
0x1F,0x1F,0x0F,0x01,0x01,0x01,0xFF,0xFF,0xFF,0xFF,
0x01,0x01,0x01,0x07,0x1F,0x1F,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,

// U (85): w=17, h=17
0x50,0x2F,
0x01,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,
0x00,0x01,0x01,0xFF,0xFF,0x01,0x01,
0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xE0,0xC0,0x80,0x80,
0x80,0x80,0xE0,0xFF,0x3F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,

// V (86): w=19, h=17
0x52,0x22,
0x01,0x01,0x07,0x1F,0xFF,0xFF,0xFF,0xF1,0x81,0x00,
0x00,0x00,0x81,0xF1,0xFF,0x1F,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0xFF,0xFF,0xFC,
0xF0,0xFE,0x1F,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// W (87): w=25, h=17
0x58,0x28,
0x01,0x01,0x0F,0xFF,0xFF,0xFF,0xF9,0x81,0x00,0x00,
0xF0,0xFE,0x1F,0xFF,0xFF,0xFC,0xC0,0x00,0x00,0xC1,
0xFF,0x7F,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x07,0x7F,0xFF,0xFF,0xF8,0x7F,
0x0F,0x00,0x00,0x00,0x0F,0x7F,0xFF,0xFE,0xFC,0x7F,
0x07,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,

// X (88): w=18, h=17
0x51,0x28,
0x01,0x01,0x03,0x0F,0x1F,0x7F,0xFF,0xFD,0xF1,0xC0,
0xE0,0x71,0x3D,0x1F,0x07,0x03,0x01,0x01,
0x00,0x00,0x80,0xC0,0xF0,0x78,0x1F,0x0F,0x07,0x1F,
0x7F,0xFF,0xFC,0xF0,0xE0,0x80,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// Y (89): w=17, h=17
0x50,0x28,
0x01,0x01,0x07,0x0F,0x3F,0xFF,0xFF,0xF9,0xE0,0x80,
0xC0,0xF1,0x7D,0x1F,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,
0xFF,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x00,0x00,

// Z (90): w=14, h=17
0x4D,0x2F,
0x1F,0x1F,0x1F,0x01,0x01,0x81,0xE1,0xF9,0xFF,0xFF,
0x7F,0x1F,0x07,0x03,
0x80,0xE0,0xF0,0xFC,0xFF,0x7F,0x3F,0x0F,0x03,0x00,
0x00,0xE0,0xF0,0xF0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,

// bracketleft (91): w=8, h=21
0x47,0x1B,
0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x1F,0x1F,0x1F,0x1F,0x10,0x10,0x10,0x10,

// backslash (92): w=13, h=19
0x4C,0x22,
0x01,0x07,0x1E,0x3C,0xF0,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x3C,0x78,0xE0,
0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x07,0x06,0x04,

// bracketright (93): w=8, h=21
0x47,0x11,
0x01,0x01,0x01,0x01,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0x10,0x10,0x10,0x10,0x1F,0x1F,0x1F,0x1F,

// asciicircum (94): w=15, h=7
0x8E,0x00,0x9A,
0x40,0x60,0x30,0x18,0x0C,0x0E,0x07,0x03,0x07,0x0E,
0x0C,0x18,0x30,0x60,0x40,

// underscore (95): w=12, h=2
0x8B,0x16,0x45,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,

// quoteleft (96): w=6, h=8
0x05,0x2F,
0x70,0xFC,0xFE,0xE6,0x63,0x03,

// a (97): w=14, h=12
0x2D,0xCE,
0x80,0xCE,0xCE,0xCF,0x6F,0x61,0x21,0x23,0xFF,0xFF,
0xFE,0xFC,0x00,0x00,
0x07,0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x04,0x0F,0x0F,
0x0F,0x0F,0x08,0x08,

// b (98): w=15, h=18
0x4E,0x0F,
0x04,0xFE,0xFE,0xFF,0xFF,0x80,0x80,0xC0,0xC0,0xC0,
0xC0,0xC0,0xC0,0x80,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x01,
0x83,0xFF,0xFF,0xFF,0x3E,
0x00,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x03,
0x03,0x03,0x01,0x00,0x00,

// c (99): w=11, h=12
0x2A,0xCF,
0xF0,0xFC,0xFE,0xFE,0x07,0x03,0x01,0x1F,0x1F,0x1E,
0x0E,
0x01,0x03,0x07,0x0F,0x0F,0x0E,0x0C,0x0C,0x0C,0x04,
0x06,

// d (100): w=15, h=18
0x4E,0x0F,
0x00,0x80,0x80,0xC0,0xC0,0xC0,0x40,0x40,0x44,0x46,
0xFE,0xFF,0xFF,0xFF,0x00,
0x7E,0xFF,0xFF,0xFF,0xC1,0x80,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x01,
0x03,0x03,0x03,0x03,0x02,

// e (101): w=13, h=12
0x2C,0xCF,
0xF0,0xFC,0xFE,0xFF,0x27,0x21,0x21,0x21,0x23,0x3F,
0x3F,0x3E,0x38,
0x01,0x03,0x07,0x0F,0x0F,0x0E,0x0C,0x0C,0x0C,0x0C,
0x0C,0x06,0x06,

// f (102): w=11, h=18
0x4A,0x0C,
0x40,0xF8,0xFC,0xFE,0xFE,0x41,0x43,0x47,0x4F,0x07,
0x06,
0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,
0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x00,0x00,
0x00,

// g (103): w=14, h=18
0x4D,0xCE,
0x00,0x3C,0x7E,0xFF,0xFF,0xC3,0x81,0xC3,0xFF,0xFF,
0x7E,0x3E,0x02,0x02,
0xC0,0xE0,0xE0,0xFF,0x1F,0x1C,0x1C,0x3C,0x3C,0xF8,
0xF8,0xF0,0xF0,0x00,
0x00,0x01,0x03,0x03,0x03,0x02,0x02,0x02,0x03,0x03,
0x01,0x01,0x00,0x00,

// h (104): w=15, h=18
0x4E,0x0F,
0x04,0xFE,0xFE,0xFF,0xFF,0x00,0x80,0x80,0xC0,0xC0,
0xC0,0xC0,0x80,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0x03,
0xFF,0xFF,0xFF,0xFF,0x00,
0x02,0x03,0x03,0x03,0x03,0x02,0x00,0x00,0x02,0x02,
0x03,0x03,0x03,0x03,0x02,

// i (105): w=7, h=18
0x46,0x0F,
0x00,0x8E,0x9F,0xDF,0xCE,0x00,0x00,
0x01,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x02,0x03,0x03,0x03,0x03,0x02,0x02,

// j (106): w=9, h=24
0xC8,0x00,0x17,
0x00,0x00,0x00,0x00,0x00,0x8E,0x9F,0xDF,0xCE,
0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,
0x70,0xF0,0xF8,0xE0,0x80,0xFF,0x7F,0x3F,0x0F,

// k (107): w=15, h=18
0x4E,0x0E,
0x04,0xFE,0xFE,0xFF,0xFF,0x00,0x00,0x40,0xC0,0xC0,
0xC0,0x40,0x40,0x40,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0x08,0x3C,0xFE,0xFF,0xF9,
0xE0,0xC0,0x00,0x00,0x00,
0x02,0x03,0x03,0x03,0x03,0x02,0x00,0x00,0x03,0x03,
0x03,0x03,0x03,0x02,0x02,

// l (108): w=7, h=18
0x46,0x0F,
0x04,0xFE,0xFE,0xFF,0xFF,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x02,0x03,0x03,0x03,0x03,0x02,0x02,

// m (109): w=22, h=12
0x35,0xCF,
0x04,0xFE,0xFE,0xFF,0xFF,0x04,0x06,0x07,0x0F,0xFF,
0xFF,0xFE,0xFC,0x04,0x06,0x07,0x0F,0xFF,0xFF,0xFE,
0xFC,0x00,
0x08,0x0F,0x0F,0x0F,0x0F,0x08,0x00,0x08,0x08,0x0F,
0x0F,0x0F,0x0F,0x08,0x00,0x08,0x08,0x0F,0x0F,0x0F,
0x0F,0x08,

// n (110): w=15, h=12
0x2E,0xCF,
0x04,0xFE,0xFE,0xFF,0xFF,0x04,0x06,0x06,0x07,0x0F,
0xFF,0xFF,0xFE,0xFC,0x00,
0x08,0x0F,0x0F,0x0F,0x0F,0x08,0x00,0x00,0x08,0x08,
0x0F,0x0F,0x0F,0x0F,0x08,

// o (111): w=14, h=12
0x2D,0xCF,
0xF8,0xFE,0xFE,0xFF,0x07,0x03,0x01,0x01,0x01,0x07,
0xFF,0xFE,0xFE,0xF8,
0x01,0x07,0x07,0x0F,0x0E,0x0C,0x08,0x08,0x08,0x0E,
0x0F,0x07,0x07,0x01,

// p (112): w=15, h=18
0x4E,0xCF,
0x04,0xFE,0xFE,0xFF,0xFF,0x04,0x06,0x06,0x07,0x0F,
0x1F,0xFF,0xFE,0xFC,0xF8,
0x00,0xFF,0xFF,0xFF,0xFF,0x08,0x08,0x08,0x08,0x0C,
0x0E,0x0F,0x07,0x03,0x01,
0x02,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// q (113): w=15, h=18
0x4E,0xCF,
0xF0,0xFC,0xFE,0xFF,0x07,0x03,0x01,0x01,0x01,0x01,
0xFF,0xFF,0xFF,0xFF,0x00,
0x01,0x07,0x0F,0x0F,0x0F,0x0E,0x0C,0x0C,0x04,0x04,
0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x02,
0x03,0x03,0x03,0x03,0x02,

// r (114): w=11, h=12
0x2A,0xCE,
0x04,0xFE,0xFE,0xFF,0xFF,0x08,0x0C,0x1E,0x1F,0x1F,
0x07,
0x08,0x0F,0x0F,0x0F,0x0F,0x08,0x08,0x00,0x00,0x00,
0x00,

// s (115): w=11, h=12
0x2A,0xCF,
0x1E,0x3E,0x7F,0x7F,0xFB,0xF1,0xF1,0xE1,0xE3,0xCF,
0x80,
0x0F,0x0F,0x08,0x08,0x08,0x08,0x09,0x0F,0x0F,0x07,
0x03,

// t (116): w=9, h=16
0x28,0x4E,
0x10,0xF8,0xFE,0xFF,0xFF,0x10,0x10,0x10,0x10,
0x00,0x7F,0xFF,0xFF,0xFF,0xE0,0xC0,0x40,0x40,

// u (117): w=15, h=12
0x2E,0xCF,
0x04,0xFE,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x04,0x06,
0xFE,0xFE,0xFF,0xFF,0x00,
0x00,0x07,0x0F,0x0F,0x0F,0x0E,0x0C,0x0C,0x04,0x04,
0x0F,0x0F,0x0F,0x0F,0x08,

// v (118): w=15, h=12
0x2E,0xC7,
0x01,0x01,0x07,0x3F,0xFF,0xFF,0xFD,0xE1,0x00,0xC0,
0xF9,0x3F,0x07,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x0F,0x0F,0x07,
0x00,0x00,0x00,0x00,0x00,

// w (119): w=22, h=12
0x35,0xC8,
0x01,0x01,0x0F,0x7F,0xFF,0xFF,0xF1,0x00,0xF0,0x7E,
0x07,0x7F,0xFF,0xFE,0xF0,0xC0,0x80,0xF1,0x7F,0x0F,
0x01,0x01,
0x00,0x00,0x00,0x00,0x03,0x0F,0x0F,0x0F,0x03,0x00,
0x00,0x00,0x03,0x0F,0x0F,0x0F,0x0F,0x03,0x00,0x00,
0x00,0x00,

// x (120): w=15, h=12
0x2E,0xC8,
0x01,0x01,0x07,0x0F,0x9F,0xFF,0xFD,0xF8,0xF0,0xF9,
0xCF,0x07,0x03,0x01,0x00,
0x08,0x08,0x0C,0x0E,0x0F,0x01,0x00,0x01,0x0B,0x0F,
0x0F,0x0F,0x0E,0x0C,0x08,

// y (121): w=15, h=18
0x4E,0xC7,
0x01,0x01,0x07,0x3F,0xFF,0xFF,0xFD,0xE1,0x80,0xC0,
0xF9,0x3F,0x0F,0x03,0x01,
0xC0,0xE0,0xE0,0xC0,0x80,0xC3,0xFF,0x3F,0x1F,0x07,
0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,

// z (122): w=12, h=12
0x2B,0xCF,
0x0F,0x0F,0x83,0xC1,0xF1,0xF9,0xFF,0x7F,0x3F,0x0F,
0x07,0x01,
0x0C,0x0E,0x0F,0x0F,0x0F,0x0B,0x09,0x08,0x08,0x08,
0x0F,0x0F,

// braceleft (123): w=10, h=21
0x49,0x0F,
0x00,0x00,0x00,0xFC,0xFE,0xFE,0xFF,0x07,0x03,0x03,
0x06,0x06,0x0F,0xFF,0xF9,0xF9,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x0F,0x0F,0x1F,0x1C,0x18,0x18,

// bar (124): w=2, h=24
0xC1,0x00,0x9A,
0xFF,0xFF,
0xFF,0xFF,
0xFF,0xFF,

// braceright (125): w=10, h=21
0x49,0x0F,
0x03,0x03,0x07,0xFF,0xFE,0xFE,0xFC,0x00,0x00,0x00,
0x00,0x00,0x00,0xF0,0xF9,0xF9,0xFF,0x0F,0x06,0x06,
0x18,0x18,0x1C,0x1F,0x0F,0x0F,0x07,0x00,0x00,0x00,

// c0126 (126): w=15, h=4
0x8E,0x02,0x9A,
0x08,0x06,0x02,0x03,0x03,0x03,0x07,0x06,0x0E,0x0C,
0x0C,0x0C,0x0C,0x06,0x03

};
// 3534 bytes
// 3724 bytes with FAST_FONT_INDEX
