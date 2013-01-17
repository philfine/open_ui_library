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

// courR14 = "Courier"

const char font_courR14[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xCB,0x00,
0xD3,0x00,
0xE5,0x00,
0xF3,0x00,
0x07,0x01,
0x17,0x01,
0x1C,0x01,
0x25,0x01,
0x2E,0x01,
0x37,0x01,
0x4B,0x01,
0x52,0x01,
0x5C,0x01,
0x61,0x01,
0x73,0x01,
0x83,0x01,
0x93,0x01,
0xA5,0x01,
0xB5,0x01,
0xC5,0x01,
0xD7,0x01,
0xE7,0x01,
0xF7,0x01,
0x07,0x02,
0x17,0x02,
0x1C,0x02,
0x27,0x02,
0x3D,0x02,
0x48,0x02,
0x5E,0x02,
0x6E,0x02,
0x80,0x02,
0x98,0x02,
0xAC,0x02,
0xC0,0x02,
0xD4,0x02,
0xE6,0x02,
0xF8,0x02,
0x0E,0x03,
0x22,0x03,
0x32,0x03,
0x46,0x03,
0x5C,0x03,
0x70,0x03,
0x88,0x03,
0x9C,0x03,
0xB0,0x03,
0xC4,0x03,
0xD8,0x03,
0xEE,0x03,
0x00,0x04,
0x14,0x04,
0x2A,0x04,
0x42,0x04,
0x5A,0x04,
0x6E,0x04,
0x82,0x04,
0x92,0x04,
0x9B,0x04,
0xAD,0x04,
0xB6,0x04,
0xBF,0x04,
0xCD,0x04,
0xD3,0x04,
0xDE,0x04,
0xF2,0x04,
0xFC,0x04,
0x10,0x05,
0x1A,0x05,
0x2C,0x05,
0x40,0x05,
0x54,0x05,
0x64,0x05,
0x72,0x05,
0x86,0x05,
0x96,0x05,
0xA3,0x05,
0xAE,0x05,
0xB8,0x05,
0xCC,0x05,
0xE0,0x05,
0xEA,0x05,
0xF3,0x05,
0x05,0x06,
0x10,0x06,
0x1B,0x06,
0x26,0x06,
0x30,0x06,
0x44,0x06,
0x4D,0x06,
0x59,0x06,
0x5E,0x06,
0x6A,0x06,

// space (32): w=1, h=1
0x80,0x0B,0x4F,
0x00,

// exclam (33): w=2, h=12
0xA1,0x00,0x8A,
0x3F,0xFF,
0x0C,0x0C,

// quotedbl (34): w=6, h=5
0x05,0x1C,
0x07,0x1F,0x00,0x00,0x07,0x1F,

// numbersign (35): w=8, h=14
0x27,0x10,
0x00,0x10,0xF0,0x1F,0x10,0xF0,0x1F,0x10,
0x01,0x01,0x7F,0x01,0x01,0x7F,0x01,0x00,

// dollar (36): w=6, h=14
0x25,0x17,
0x1C,0x22,0x22,0x43,0x44,0x8E,
0x07,0x02,0x04,0x7C,0x04,0x03,

// percent (37): w=9, h=12
0x28,0x0F,
0x80,0x8E,0x51,0x51,0xB1,0xAE,0xA0,0x10,0x10,
0x00,0x00,0x00,0x07,0x08,0x08,0x08,0x07,0x00,

// ampersand (38): w=7, h=10
0x26,0x56,
0xC0,0x2E,0x31,0x21,0xC1,0x20,0x00,
0x01,0x02,0x02,0x01,0x01,0x02,0x02,

// quotesingle (39): w=2, h=5
0x81,0x00,0x8A,
0x07,0x1F,

// parenleft (40): w=3, h=14
0xA2,0x00,0x98,
0xF8,0x06,0x01,
0x07,0x18,0x20,

// parenright (41): w=3, h=14
0xA2,0x00,0x7A,
0x01,0x06,0xF8,
0x20,0x18,0x07,

// asterisk (42): w=7, h=8
0x06,0x16,
0x08,0xC8,0x28,0x1F,0x28,0xC8,0x08,

// plus (43): w=9, h=9
0x28,0x4F,
0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,

// comma (44): w=4, h=5
0x83,0x0A,0x79,
0x10,0x0C,0x07,0x03,

// hyphen (45): w=8, h=1
0x07,0xD0,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// period (46): w=2, h=2
0x81,0x0A,0x8A,
0x03,0x03,

// slash (47): w=8, h=15
0x27,0x10,
0x00,0x00,0x00,0x80,0x60,0x18,0x06,0x01,
0xE0,0x18,0x06,0x01,0x00,0x00,0x00,0x00,

// zero (48): w=7, h=12
0x26,0x16,
0xFC,0x02,0x01,0x01,0x01,0x02,0xFC,
0x03,0x04,0x08,0x08,0x08,0x04,0x03,

// one (49): w=7, h=12
0x26,0x16,
0x02,0x02,0x01,0xFF,0x00,0x00,0x00,
0x08,0x08,0x08,0x0F,0x08,0x08,0x08,

// two (50): w=8, h=12
0x27,0x10,
0x00,0x0C,0x02,0x01,0x81,0x41,0x22,0x1C,
0x08,0x0C,0x0A,0x09,0x08,0x08,0x08,0x0E,

// three (51): w=7, h=12
0x26,0x16,
0x02,0x01,0x21,0x21,0x21,0x52,0x8C,
0x04,0x08,0x08,0x08,0x08,0x04,0x03,

// four (52): w=7, h=12
0x26,0x16,
0x80,0x60,0x18,0x06,0x01,0xFF,0x00,
0x01,0x01,0x01,0x09,0x09,0x0F,0x09,

// five (53): w=8, h=12
0x27,0x10,
0x00,0x3F,0x21,0x11,0x11,0x11,0x21,0xC0,
0x04,0x04,0x08,0x08,0x08,0x08,0x04,0x03,

// six (54): w=7, h=12
0x26,0x16,
0xF8,0x46,0x22,0x21,0x21,0x41,0x80,
0x03,0x04,0x08,0x08,0x08,0x04,0x03,

// seven (55): w=7, h=12
0x26,0x16,
0x03,0x01,0x01,0x01,0x01,0xF1,0x0F,
0x00,0x00,0x00,0x00,0x0F,0x00,0x00,

// eight (56): w=7, h=12
0x26,0x16,
0x8C,0x52,0x21,0x21,0x21,0x52,0x8C,
0x03,0x04,0x08,0x08,0x08,0x04,0x03,

// nine (57): w=7, h=12
0x26,0x16,
0x1C,0x22,0x41,0x41,0x41,0x22,0xFC,
0x00,0x08,0x08,0x08,0x04,0x06,0x01,

// colon (58): w=2, h=8
0x81,0x04,0x8A,
0xC3,0xC3,

// semicolon (59): w=4, h=11
0xA3,0x04,0x6A,
0x00,0x00,0xC3,0xC3,
0x04,0x03,0x01,0x00,

// less (60): w=10, h=9
0x29,0x49,
0x10,0x10,0x28,0x28,0x44,0x44,0x82,0x82,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=9, h=4
0x08,0xAF,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=10, h=9
0x29,0x49,
0x01,0x01,0x82,0x82,0x44,0x44,0x28,0x28,0x10,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=7, h=11
0x26,0x36,
0x06,0x01,0x01,0xE1,0x21,0x21,0x1E,
0x00,0x00,0x00,0x06,0x06,0x00,0x00,

// at (64): w=8, h=13
0x27,0x15,
0xFC,0x02,0x01,0xE1,0x11,0x12,0xFC,0x00,
0x07,0x08,0x10,0x10,0x11,0x11,0x09,0x09,

// A (65): w=11, h=11
0x2A,0x28,
0x00,0x00,0xC1,0xB1,0x8D,0x83,0x8C,0xB0,0xC0,0x00,
0x00,
0x04,0x07,0x04,0x04,0x00,0x00,0x00,0x04,0x04,0x07,
0x04,

// B (66): w=9, h=11
0x28,0x2F,
0x01,0xFF,0x21,0x21,0x21,0x21,0x32,0x4C,0x80,
0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x02,0x01,

// C (67): w=9, h=11
0x28,0x2F,
0xF8,0x06,0x02,0x01,0x01,0x01,0x01,0x02,0x07,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x02,0x01,

// D (68): w=9, h=11
0x28,0x2F,
0x01,0xFF,0x01,0x01,0x01,0x01,0x02,0x06,0xF8,
0x04,0x07,0x04,0x04,0x04,0x04,0x02,0x03,0x00,

// E (69): w=8, h=11
0x27,0x30,
0x01,0xFF,0x21,0x21,0x71,0x01,0x01,0x8F,
0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x07,

// F (70): w=8, h=11
0x27,0x30,
0x01,0xFF,0x21,0x21,0x71,0x01,0x01,0x0F,
0x04,0x07,0x04,0x04,0x00,0x00,0x00,0x00,

// G (71): w=10, h=11
0x29,0x2E,
0xF8,0x06,0x02,0x01,0x01,0x01,0x41,0x42,0xC7,0x40,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x02,0x01,0x00,

// H (72): w=9, h=11
0x28,0x2F,
0x01,0xFF,0x21,0x20,0x20,0x20,0x21,0xFF,0x01,
0x04,0x07,0x04,0x00,0x00,0x00,0x04,0x07,0x04,

// I (73): w=7, h=11
0x26,0x36,
0x01,0x01,0x01,0xFF,0x01,0x01,0x01,
0x04,0x04,0x04,0x07,0x04,0x04,0x04,

// J (74): w=9, h=11
0x28,0x2F,
0xC0,0x00,0x00,0x01,0x01,0x01,0xFF,0x01,0x01,
0x01,0x02,0x04,0x04,0x04,0x02,0x01,0x00,0x00,

// K (75): w=10, h=11
0x29,0x2E,
0x01,0xFF,0x41,0x21,0x30,0x48,0x85,0x03,0x01,0x01,
0x04,0x07,0x04,0x04,0x00,0x00,0x01,0x06,0x04,0x04,

// L (76): w=9, h=11
0x28,0x2F,
0x01,0x01,0xFF,0x01,0x01,0x00,0x00,0x00,0x80,
0x04,0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x07,

// M (77): w=11, h=11
0x2A,0x28,
0x01,0xFF,0x03,0x0C,0x30,0xC0,0x30,0x0C,0x03,0xFF,
0x01,
0x04,0x07,0x04,0x04,0x00,0x00,0x00,0x04,0x04,0x07,
0x04,

// N (78): w=9, h=11
0x28,0x2F,
0x01,0xFF,0x03,0x0C,0x30,0xC1,0x01,0xFF,0x01,
0x04,0x07,0x04,0x04,0x00,0x00,0x03,0x07,0x00,

// O (79): w=9, h=11
0x28,0x2F,
0xF8,0x06,0x02,0x01,0x01,0x01,0x02,0x06,0xF8,
0x00,0x03,0x02,0x04,0x04,0x04,0x02,0x03,0x00,

// P (80): w=9, h=11
0x28,0x2F,
0x01,0xFF,0x21,0x21,0x21,0x21,0x21,0x12,0x0C,
0x04,0x07,0x04,0x04,0x04,0x00,0x00,0x00,0x00,

// Q (81): w=9, h=13
0x28,0x2F,
0xF8,0x06,0x02,0x01,0x01,0x01,0x02,0x06,0xF8,
0x00,0x13,0x0A,0x0C,0x0C,0x14,0x12,0x13,0x08,

// R (82): w=10, h=11
0x29,0x2E,
0x01,0xFF,0x21,0x21,0x21,0x61,0xA1,0x12,0x0C,0x00,
0x04,0x07,0x04,0x04,0x00,0x00,0x01,0x02,0x04,0x04,

// S (83): w=8, h=11
0x27,0x30,
0x0C,0x12,0x21,0x21,0x21,0x21,0x42,0x87,
0x07,0x02,0x04,0x04,0x04,0x04,0x02,0x01,

// T (84): w=9, h=11
0x28,0x2F,
0x0F,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x0F,
0x00,0x00,0x04,0x04,0x07,0x04,0x04,0x00,0x00,

// U (85): w=10, h=11
0x29,0x29,
0x01,0xFF,0x01,0x01,0x00,0x00,0x01,0x01,0xFF,0x01,
0x00,0x01,0x02,0x04,0x04,0x04,0x04,0x02,0x01,0x00,

// V (86): w=11, h=11
0x2A,0x28,
0x01,0x07,0x19,0x61,0x80,0x00,0x80,0x61,0x19,0x07,
0x01,
0x00,0x00,0x00,0x00,0x01,0x06,0x01,0x00,0x00,0x00,
0x00,

// W (87): w=11, h=11
0x2A,0x28,
0x01,0x1F,0xE1,0x01,0xE0,0x1C,0xE0,0x01,0xE1,0x1F,
0x01,
0x00,0x00,0x01,0x06,0x01,0x00,0x01,0x06,0x01,0x00,
0x00,

// X (88): w=9, h=11
0x28,0x2F,
0x01,0x03,0x8D,0x50,0x20,0x50,0x8D,0x03,0x01,
0x04,0x06,0x05,0x00,0x00,0x00,0x05,0x06,0x04,

// Y (89): w=9, h=11
0x28,0x2F,
0x01,0x03,0x0D,0x30,0xC0,0x30,0x0D,0x03,0x01,
0x00,0x00,0x04,0x04,0x07,0x04,0x04,0x00,0x00,

// Z (90): w=7, h=11
0x26,0x36,
0x07,0x81,0x41,0x21,0x11,0x09,0x07,
0x07,0x04,0x04,0x04,0x04,0x04,0x07,

// bracketleft (91): w=3, h=15
0xA2,0x00,0x98,
0xFF,0x01,0x01,
0x7F,0x40,0x40,

// backslash (92): w=8, h=15
0x27,0x15,
0x01,0x06,0x18,0x60,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x06,0x18,0xE0,

// bracketright (93): w=3, h=15
0xA2,0x00,0x7A,
0x01,0x01,0xFF,
0x40,0x40,0x7F,

// asciicircum (94): w=7, h=4
0x06,0x16,
0x08,0x04,0x02,0x01,0x02,0x04,0x08,

// underscore (95): w=11, h=1
0x8A,0x0F,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,

// grave (96): w=3, h=3
0x82,0x00,0x89,
0x01,0x02,0x04,

// a (97): w=9, h=8
0x08,0x8F,
0x70,0x8A,0x89,0x89,0x89,0x49,0xFE,0x80,0x80,

// b (98): w=9, h=12
0x28,0x0F,
0x01,0xFF,0x20,0x10,0x10,0x10,0x10,0x20,0xC0,
0x08,0x0F,0x04,0x08,0x08,0x08,0x08,0x04,0x03,

// c (99): w=8, h=8
0x07,0x90,
0x3C,0x42,0x81,0x81,0x81,0x81,0x42,0x47,

// d (100): w=9, h=12
0x28,0x0F,
0xC0,0x20,0x10,0x10,0x10,0x10,0x21,0xFF,0x00,
0x03,0x04,0x08,0x08,0x08,0x08,0x04,0x0F,0x08,

// e (101): w=8, h=8
0x07,0x90,
0x3C,0x4A,0x89,0x89,0x89,0x89,0x4A,0x4C,

// f (102): w=8, h=12
0x27,0x15,
0x10,0x10,0xFC,0x12,0x11,0x11,0x11,0x01,
0x08,0x08,0x0F,0x08,0x08,0x08,0x08,0x00,

// g (103): w=9, h=12
0x28,0x8F,
0x3C,0x42,0x81,0x81,0x81,0x81,0x42,0xFF,0x01,
0x00,0x08,0x08,0x08,0x08,0x08,0x04,0x03,0x00,

// h (104): w=9, h=12
0x28,0x0F,
0x01,0xFF,0x20,0x10,0x10,0x10,0x10,0xE0,0x00,
0x08,0x0F,0x08,0x00,0x00,0x00,0x08,0x0F,0x08,

// i (105): w=7, h=11
0x26,0x36,
0x00,0x08,0x08,0xFB,0x00,0x00,0x00,
0x04,0x04,0x04,0x07,0x04,0x04,0x04,

// j (106): w=6, h=15
0x25,0x37,
0x08,0x08,0x08,0x08,0x0B,0xF8,
0x40,0x40,0x40,0x40,0x20,0x1F,

// k (107): w=9, h=12
0x28,0x0F,
0x01,0xFF,0x80,0x80,0x50,0x30,0x10,0x10,0x00,
0x08,0x0F,0x00,0x00,0x01,0x0A,0x0C,0x08,0x08,

// l (108): w=7, h=12
0x26,0x16,
0x01,0x01,0x01,0xFF,0x00,0x00,0x00,
0x08,0x08,0x08,0x0F,0x08,0x08,0x08,

// m (109): w=11, h=8
0x0A,0x88,
0x81,0xFF,0x82,0x01,0x01,0xFE,0x82,0x01,0x01,0xFE,
0x80,

// n (110): w=9, h=8
0x08,0x8F,
0x81,0xFF,0x82,0x01,0x01,0x01,0x81,0xFE,0x80,

// o (111): w=8, h=8
0x07,0x90,
0x3C,0x42,0x81,0x81,0x81,0x81,0x42,0x3C,

// p (112): w=9, h=12
0x28,0x8F,
0x01,0xFF,0x42,0x81,0x81,0x81,0x81,0x42,0x3C,
0x08,0x0F,0x08,0x08,0x00,0x00,0x00,0x00,0x00,

// q (113): w=9, h=12
0x28,0x8F,
0x3C,0x42,0x81,0x81,0x81,0x81,0x42,0xFF,0x01,
0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x0F,0x08,

// r (114): w=8, h=8
0x07,0x90,
0x81,0x81,0xFF,0x82,0x81,0x81,0x81,0x02,

// s (115): w=7, h=8
0x06,0x96,
0xE6,0x49,0x89,0x89,0x91,0x92,0x67,

// t (116): w=8, h=11
0x27,0x35,
0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0x00,
0x00,0x00,0x03,0x04,0x04,0x04,0x04,0x02,

// u (117): w=9, h=8
0x08,0x8F,
0x01,0x7F,0x80,0x80,0x80,0x80,0x41,0xFF,0x80,

// v (118): w=9, h=8
0x08,0x8F,
0x01,0x03,0x0D,0x30,0xC0,0x30,0x0D,0x03,0x01,

// w (119): w=9, h=8
0x08,0x8F,
0x01,0x3F,0xC1,0x30,0x0C,0x30,0xC1,0x3F,0x01,

// x (120): w=8, h=8
0x07,0x90,
0x81,0xC3,0xA5,0x18,0x18,0xA5,0xC3,0x81,

// y (121): w=9, h=12
0x28,0x8F,
0x01,0x07,0x19,0x60,0x80,0x60,0x19,0x07,0x01,
0x08,0x08,0x08,0x0E,0x09,0x00,0x00,0x00,0x00,

// z (122): w=7, h=8
0x06,0x96,
0x87,0xC1,0xA1,0x91,0x89,0x85,0xE3,

// braceleft (123): w=5, h=15
0x24,0x1D,
0x80,0x80,0x7E,0x01,0x01,
0x00,0x00,0x3F,0x40,0x40,

// bar (124): w=1, h=15
0xA0,0x00,0x9A,
0xFF,
0x7F,

// braceright (125): w=5, h=15
0x24,0x1D,
0x01,0x01,0x7E,0x80,0x80,
0x40,0x40,0x3F,0x00,0x00,

// asciitilde (126): w=8, h=3
0x07,0xB0,
0x02,0x01,0x01,0x02,0x02,0x04,0x04,0x02

};
// 1462 bytes
// 1652 bytes with FAST_FONT_INDEX