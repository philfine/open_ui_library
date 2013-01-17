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

// timBI10 = "Times Bold Italic"

const char font_timBI10[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xD0,0x00,
0xD8,0x00,
0xEA,0x00,
0xFA,0x00,
0x14,0x01,
0x2A,0x01,
0x2F,0x01,
0x3B,0x01,
0x47,0x01,
0x4E,0x01,
0x57,0x01,
0x5D,0x01,
0x63,0x01,
0x68,0x01,
0x72,0x01,
0x82,0x01,
0x8E,0x01,
0x9E,0x01,
0xAE,0x01,
0xBE,0x01,
0xCE,0x01,
0xDE,0x01,
0xEC,0x01,
0xFC,0x01,
0x0C,0x02,
0x11,0x02,
0x1B,0x02,
0x23,0x02,
0x2C,0x02,
0x34,0x02,
0x42,0x02,
0x5C,0x02,
0x72,0x02,
0x88,0x02,
0x9C,0x02,
0xB2,0x02,
0xC8,0x02,
0xDE,0x02,
0xF2,0x02,
0x0C,0x03,
0x1E,0x03,
0x30,0x03,
0x48,0x03,
0x5A,0x03,
0x7A,0x03,
0x96,0x03,
0xAA,0x03,
0xC0,0x03,
0xD6,0x03,
0xEC,0x03,
0x00,0x04,
0x16,0x04,
0x2E,0x04,
0x44,0x04,
0x62,0x04,
0x78,0x04,
0x8E,0x04,
0xA2,0x04,
0xB2,0x04,
0xBC,0x04,
0xCC,0x04,
0xD5,0x04,
0xDF,0x04,
0xE5,0x04,
0xEF,0x04,
0xFF,0x04,
0x07,0x05,
0x19,0x05,
0x22,0x05,
0x37,0x05,
0x49,0x05,
0x5B,0x05,
0x67,0x05,
0x78,0x05,
0x8A,0x05,
0x96,0x05,
0xA3,0x05,
0xAD,0x05,
0xB6,0x05,
0xCB,0x05,
0xDB,0x05,
0xE4,0x05,
0xEC,0x05,
0xFA,0x05,
0x03,0x06,
0x0C,0x06,
0x18,0x06,
0x22,0x06,
0x32,0x06,
0x3A,0x06,
0x4C,0x06,
0x50,0x06,
0x62,0x06,

// space (32): w=1, h=1
0x80,0x09,0x47,
0x00,

// exclam (33): w=5, h=10
0x24,0x0F,
0x00,0x40,0x7C,0x1F,0x07,
0x03,0x03,0x00,0x00,0x00,

// quotedbl (34): w=6, h=4
0x05,0x13,
0x0C,0x07,0x03,0x0C,0x07,0x03,

// numbersign (35): w=8, h=10
0x27,0x08,
0x40,0xC8,0x78,0x4F,0xC8,0x78,0x4F,0x08,
0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x00,

// dollar (36): w=7, h=11
0x26,0x08,
0x80,0x0C,0x9E,0x79,0xFF,0xE1,0x06,
0x01,0x0E,0x03,0x02,0x01,0x00,0x00,

// percent (37): w=12, h=10
0x2B,0x0F,
0x1C,0x3E,0x23,0x31,0xDF,0x76,0xBA,0xEE,0x33,0x11,
0xF0,0xE0,
0x00,0x00,0x02,0x03,0x00,0x00,0x01,0x03,0x02,0x03,
0x01,0x00,

// ampersand (38): w=10, h=10
0x29,0x08,
0xC0,0xE0,0x20,0x1E,0x7F,0xF1,0xC9,0x56,0x30,0x90,
0x01,0x03,0x03,0x02,0x03,0x01,0x03,0x03,0x03,0x00,

// quotesingle (39): w=3, h=4
0x02,0x13,
0x0C,0x07,0x03,

// parenleft (40): w=5, h=13
0x24,0x0E,
0xC0,0xF8,0x3E,0x07,0x01,
0x0F,0x1F,0x10,0x00,0x00,

// parenright (41): w=5, h=13
0x24,0x09,
0x00,0x00,0x81,0xFF,0x7E,
0x10,0x1C,0x0F,0x03,0x00,

// asterisk (42): w=5, h=5
0x04,0x0F,
0x0A,0x0E,0x1F,0x0E,0x0A,

// plus (43): w=7, h=7
0x06,0x6A,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// comma (44): w=3, h=4
0x82,0x08,0x46,
0x08,0x0B,0x07,

// hyphen (45): w=4, h=1
0x03,0xC9,
0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x08,0x46,
0x03,0x03,

// slash (47): w=4, h=10
0x23,0x0F,
0x80,0xE0,0x1C,0x07,
0x03,0x00,0x00,0x00,

// zero (48): w=7, h=10
0x26,0x08,
0xE0,0xFC,0x0E,0x03,0xC1,0xFF,0x1E,
0x01,0x03,0x02,0x03,0x01,0x00,0x00,

// one (49): w=5, h=10
0x24,0x0F,
0x00,0xC2,0xFE,0x3F,0x03,
0x02,0x03,0x03,0x02,0x00,

// two (50): w=7, h=10
0x26,0x08,
0x00,0x80,0xC6,0x63,0x33,0x9F,0x0E,
0x03,0x03,0x03,0x03,0x03,0x01,0x00,

// three (51): w=7, h=10
0x26,0x08,
0x80,0x80,0x12,0x31,0xFB,0xEF,0x06,
0x01,0x03,0x02,0x03,0x03,0x01,0x00,

// four (52): w=7, h=10
0x26,0x08,
0x60,0x70,0x68,0xE4,0xFA,0x7F,0x67,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,

// five (53): w=7, h=10
0x26,0x08,
0x00,0x0C,0x0F,0x1B,0xFB,0xF3,0x01,
0x03,0x03,0x02,0x03,0x01,0x00,0x00,

// six (54): w=7, h=10
0x26,0x08,
0xF0,0xFC,0x1E,0x12,0xF3,0xE1,0x01,
0x01,0x03,0x03,0x03,0x01,0x00,0x00,

// seven (55): w=6, h=10
0x25,0x13,
0x07,0x83,0xE3,0x33,0x0F,0x07,
0x03,0x03,0x00,0x00,0x00,0x00,

// eight (56): w=7, h=10
0x26,0x0D,
0xC0,0xE6,0x3F,0x19,0xF1,0xEF,0x06,
0x01,0x03,0x02,0x03,0x01,0x00,0x00,

// nine (57): w=7, h=10
0x26,0x08,
0x00,0x1C,0x3E,0x23,0xE1,0xFF,0x3E,
0x02,0x02,0x03,0x01,0x01,0x00,0x00,

// colon (58): w=3, h=7
0x02,0x6F,
0x60,0x63,0x03,

// semicolon (59): w=4, h=9
0x23,0x68,
0x00,0x60,0xE3,0x03,
0x01,0x01,0x00,0x00,

// less (60): w=6, h=6
0x05,0x8F,
0x0C,0x0C,0x12,0x12,0x21,0x21,

// equal (61): w=7, h=3
0x06,0xB0,
0x05,0x05,0x05,0x05,0x05,0x05,0x05,

// greater (62): w=6, h=6
0x05,0x8F,
0x21,0x21,0x12,0x12,0x0C,0x0C,

// question (63): w=6, h=10
0x25,0x14,
0x06,0x65,0x31,0x1B,0x0F,0x06,
0x03,0x03,0x00,0x00,0x00,0x00,

// at (64): w=12, h=12
0x2B,0x15,
0xE0,0x18,0x04,0xE2,0xF2,0x19,0x89,0xE9,0x11,0x09,
0x82,0x7C,
0x03,0x06,0x04,0x08,0x09,0x09,0x09,0x08,0x09,0x05,
0x00,0x00,

// A (65): w=10, h=10
0x29,0x02,
0x00,0x00,0x80,0x40,0x70,0x58,0x46,0xFF,0xFF,0x00,
0x02,0x03,0x03,0x02,0x00,0x00,0x02,0x03,0x03,0x02,

// B (66): w=10, h=10
0x29,0x07,
0x00,0xC0,0xF9,0x7F,0x17,0x11,0x31,0xF9,0xEF,0x06,
0x02,0x03,0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,

// C (67): w=9, h=10
0x28,0x0D,
0xF0,0xFC,0x0E,0x03,0x03,0x01,0x01,0x87,0x03,
0x01,0x03,0x03,0x02,0x02,0x03,0x01,0x00,0x00,

// D (68): w=10, h=10
0x29,0x08,
0x00,0xC0,0xF9,0x3F,0x07,0x03,0x01,0xC3,0xFE,0x3C,
0x02,0x03,0x03,0x02,0x02,0x03,0x01,0x01,0x00,0x00,

// E (69): w=10, h=10
0x29,0x08,
0x00,0xC0,0xF9,0x7F,0x17,0x11,0x31,0x19,0x83,0x03,
0x02,0x03,0x03,0x02,0x02,0x02,0x02,0x03,0x01,0x00,

// F (70): w=10, h=10
0x29,0x07,
0x00,0xC0,0xF9,0x7F,0x17,0x11,0x31,0x19,0x03,0x03,
0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,

// G (71): w=9, h=10
0x28,0x0E,
0xF0,0xFC,0x0E,0x03,0x03,0x21,0xE1,0xE7,0x23,
0x01,0x03,0x03,0x02,0x02,0x03,0x03,0x00,0x00,

// H (72): w=12, h=10
0x2B,0x07,
0x00,0xC0,0xF9,0x3F,0x17,0x11,0x10,0xD0,0xF9,0x3F,
0x07,0x01,
0x02,0x03,0x03,0x02,0x00,0x00,0x02,0x03,0x03,0x02,
0x00,0x00,

// I (73): w=8, h=10
0x27,0x00,
0x00,0x00,0xC0,0xF9,0x3F,0x07,0x01,0x01,
0x02,0x02,0x03,0x03,0x02,0x00,0x00,0x00,

// J (74): w=8, h=11
0x27,0x07,
0x00,0x00,0x00,0xC0,0xF9,0x3F,0x07,0x01,
0x03,0x07,0x06,0x03,0x01,0x00,0x00,0x00,

// K (75): w=11, h=10
0x2A,0x08,
0x00,0x80,0xF9,0x7F,0x27,0x71,0xC8,0x85,0x03,0x03,
0x01,
0x02,0x03,0x03,0x02,0x00,0x00,0x02,0x03,0x03,0x02,
0x00,

// L (76): w=8, h=10
0x27,0x09,
0x00,0xC0,0xF9,0x3F,0x07,0x01,0x00,0x80,
0x02,0x03,0x03,0x02,0x02,0x02,0x03,0x01,

// M (77): w=15, h=10
0x2E,0x01,
0x00,0x00,0xE0,0x3D,0x07,0xFF,0xFC,0xC0,0x20,0x18,
0xC4,0xFA,0x3F,0x07,0x01,
0x02,0x03,0x03,0x00,0x00,0x03,0x01,0x00,0x00,0x02,
0x03,0x03,0x02,0x00,0x00,

// N (78): w=13, h=10
0x2C,0x06,
0x00,0x80,0xF1,0x1F,0x07,0x3F,0xF8,0xC0,0xC0,0x79,
0x0F,0x03,0x01,
0x02,0x03,0x02,0x00,0x00,0x00,0x00,0x03,0x03,0x00,
0x00,0x00,0x00,

// O (79): w=9, h=10
0x28,0x0E,
0xF0,0xFC,0x0E,0x03,0x01,0x01,0xC3,0xFF,0x3E,
0x01,0x03,0x03,0x02,0x02,0x03,0x01,0x00,0x00,

// P (80): w=10, h=10
0x29,0x07,
0x00,0x80,0xF9,0x7F,0x17,0x11,0x11,0x19,0x1F,0x0E,
0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=10, h=13
0x29,0x08,
0x00,0xF0,0xFC,0x0E,0x03,0x01,0x01,0xC3,0xFF,0x3E,
0x10,0x09,0x0F,0x0F,0x1A,0x1A,0x13,0x11,0x08,0x00,

// R (82): w=10, h=10
0x29,0x08,
0x00,0x80,0xF9,0x7F,0x17,0x31,0xF1,0xD9,0x1F,0x0E,
0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x03,0x03,0x02,

// S (83): w=9, h=10
0x28,0x07,
0x80,0x00,0x0E,0x1F,0x39,0xF1,0xE1,0x07,0x03,
0x03,0x03,0x02,0x02,0x03,0x03,0x01,0x00,0x00,

// T (84): w=10, h=10
0x29,0x12,
0x07,0x03,0xC1,0xF9,0x3F,0x07,0x01,0x01,0x07,0x03,
0x02,0x03,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// U (85): w=11, h=10
0x2A,0x0C,
0xC0,0xF9,0x7F,0x0F,0x01,0x01,0xC0,0x79,0x0F,0x03,
0x01,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,0x00,0x00,
0x00,

// V (86): w=10, h=10
0x29,0x0D,
0x01,0x3F,0xFF,0x81,0xC0,0x70,0x1D,0x07,0x03,0x01,
0x00,0x00,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// W (87): w=14, h=10
0x2D,0x0C,
0x01,0x3F,0xFF,0x81,0xC0,0x31,0x3F,0xFF,0x81,0xE0,
0x39,0x0F,0x03,0x01,
0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x00,
0x00,0x00,0x00,0x00,

// X (88): w=10, h=10
0x29,0x07,
0x00,0x01,0x83,0xCF,0x7D,0xF8,0xCD,0x07,0x03,0x01,
0x02,0x03,0x03,0x02,0x00,0x02,0x03,0x03,0x02,0x00,

// Y (89): w=10, h=10
0x29,0x06,
0x01,0x03,0x8F,0xFD,0x70,0x18,0x0D,0x07,0x03,0x01,
0x00,0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// Z (90): w=9, h=10
0x28,0x07,
0x00,0x80,0xC7,0x63,0x31,0x19,0x0F,0x87,0x03,
0x03,0x03,0x03,0x02,0x02,0x02,0x03,0x03,0x00,

// bracketleft (91): w=7, h=13
0x26,0x07,
0x00,0xC0,0xF8,0x3F,0x07,0x01,0x01,
0x1E,0x1F,0x11,0x10,0x00,0x00,0x00,

// backslash (92): w=4, h=10
0x23,0x0F,
0x07,0x1C,0xE0,0x80,
0x00,0x00,0x00,0x03,

// bracketright (93): w=7, h=13
0x26,0x01,
0x00,0x00,0x00,0xC1,0xF9,0x3F,0x07,
0x10,0x10,0x1E,0x1F,0x01,0x00,0x00,

// asciicircum (94): w=7, h=6
0x06,0x09,
0x30,0x3C,0x0E,0x03,0x0E,0x3C,0x30,

// underscore (95): w=7, h=1
0x86,0x0B,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=4, h=3
0x03,0x14,
0x01,0x03,0x02,0x04,

// a (97): w=8, h=7
0x07,0x68,
0x38,0x7E,0x66,0x23,0x79,0x7E,0x47,0x20,

// b (98): w=7, h=10
0x26,0x08,
0x80,0xF0,0x7D,0x1F,0x8B,0xF8,0x70,
0x01,0x03,0x03,0x01,0x01,0x00,0x00,

// c (99): w=6, h=7
0x05,0x68,
0x38,0x7E,0x66,0x43,0x21,0x03,

// d (100): w=8, h=10
0x27,0x07,
0xE0,0xF0,0x38,0x08,0xC8,0xFD,0x1F,0x03,
0x01,0x03,0x03,0x01,0x03,0x02,0x00,0x00,

// e (101): w=7, h=7
0x06,0x68,
0x38,0x7E,0x6E,0x4B,0x69,0x2F,0x06,

// f (102): w=9, h=13
0xA8,0x00,0x23,
0x00,0x00,0x00,0xC8,0xF8,0x3E,0x0F,0x09,0x03,
0x18,0x10,0x1E,0x0F,0x01,0x00,0x00,0x00,0x00,

// g (103): w=8, h=10
0x27,0x61,
0x80,0xEC,0x7E,0x53,0xD1,0xDF,0x8F,0x01,
0x01,0x03,0x02,0x02,0x02,0x03,0x01,0x00,

// h (104): w=8, h=10
0x27,0x08,
0x00,0xE0,0xFD,0x3F,0x13,0xE8,0xF8,0x30,
0x03,0x03,0x00,0x00,0x03,0x03,0x02,0x00,

// i (105): w=5, h=10
0x24,0x07,
0x80,0xE8,0x78,0x1B,0x03,
0x03,0x03,0x02,0x01,0x00,

// j (106): w=7, h=13
0xA6,0x00,0x24,
0x00,0x00,0x00,0xC8,0xF8,0x1B,0x03,
0x18,0x10,0x1E,0x07,0x01,0x00,0x00,

// k (107): w=8, h=10
0x27,0x07,
0x00,0xE0,0xFD,0x5F,0xE3,0xB0,0x18,0x08,
0x03,0x03,0x00,0x00,0x03,0x03,0x02,0x00,

// l (108): w=5, h=10
0x24,0x07,
0x80,0xE0,0x7D,0x1F,0x03,
0x01,0x03,0x02,0x01,0x00,

// m (109): w=11, h=7
0x0A,0x68,
0x60,0x7D,0x1F,0x03,0x62,0x7F,0x1F,0x02,0x73,0x7F,
0x4E,

// n (110): w=8, h=7
0x07,0x68,
0x60,0x7D,0x1F,0x07,0x62,0x7D,0x5F,0x06,

// o (111): w=7, h=7
0x06,0x68,
0x38,0x7E,0x46,0x63,0x31,0x3F,0x0E,

// p (112): w=9, h=10
0xA8,0x03,0x25,
0x00,0x80,0xF1,0x7F,0x4E,0x43,0x31,0x3F,0x0E,
0x02,0x03,0x03,0x02,0x00,0x00,0x00,0x00,0x00,

// q (113): w=7, h=10
0x26,0x68,
0x30,0x7C,0x4E,0xE3,0xF9,0x3F,0x07,
0x00,0x02,0x03,0x03,0x02,0x00,0x00,

// r (114): w=7, h=7
0x06,0x67,
0x60,0x7D,0x1F,0x06,0x03,0x07,0x02,

// s (115): w=6, h=7
0x05,0x68,
0x60,0x66,0x4F,0x79,0x33,0x03,

// t (116): w=6, h=9
0x25,0x26,
0xC0,0xF4,0x3E,0x87,0x04,0x04,
0x01,0x01,0x01,0x00,0x00,0x00,

// u (117): w=7, h=7
0x06,0x68,
0x39,0x7F,0x67,0x21,0x7C,0x4F,0x23,

// v (118): w=7, h=7
0x06,0x67,
0x01,0x7F,0x3F,0x20,0x19,0x0F,0x03,

// w (119): w=10, h=7
0x09,0x67,
0x01,0x7F,0x3F,0x10,0x7C,0x3F,0x10,0x0D,0x07,0x01,

// x (120): w=8, h=7
0x07,0x61,
0x40,0x61,0x73,0x0F,0x5C,0x75,0x63,0x01,

// y (121): w=7, h=10
0x26,0x62,
0x80,0x81,0x1F,0xFF,0x70,0x1D,0x07,
0x01,0x03,0x03,0x01,0x00,0x00,0x00,

// z (122): w=6, h=7
0x05,0x68,
0x60,0x37,0x7B,0x4D,0x47,0x63,

// braceleft (123): w=8, h=13
0x27,0x07,
0x40,0xC0,0xA0,0x3C,0x1E,0x03,0x01,0x01,
0x0C,0x1F,0x13,0x10,0x00,0x00,0x00,0x00,

// bar (124): w=1, h=10
0x20,0x15,
0xFF,
0x03,

// braceright (125): w=8, h=13
0x27,0x02,
0x00,0x00,0x00,0x00,0x81,0xB9,0x7F,0x46,
0x10,0x10,0x18,0x0F,0x07,0x00,0x00,0x00,

// asciitilde (126): w=8, h=2
0x07,0xAF,
0x02,0x01,0x01,0x03,0x03,0x02,0x02,0x01

};
// 1454 bytes
// 1644 bytes with FAST_FONT_INDEX
