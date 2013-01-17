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

// timR12 = "Times Roman"

const char font_timR12[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xC8,0x00,
0xCE,0x00,
0xE0,0x00,
0xF0,0x00,
0x08,0x01,
0x22,0x01,
0x25,0x01,
0x2F,0x01,
0x39,0x01,
0x40,0x01,
0x49,0x01,
0x4E,0x01,
0x54,0x01,
0x58,0x01,
0x64,0x01,
0x74,0x01,
0x7E,0x01,
0x8E,0x01,
0x9E,0x01,
0xB0,0x01,
0xC0,0x01,
0xD0,0x01,
0xE0,0x01,
0xEE,0x01,
0xFE,0x01,
0x01,0x02,
0x07,0x02,
0x19,0x02,
0x22,0x02,
0x34,0x02,
0x40,0x02,
0x5E,0x02,
0x78,0x02,
0x8A,0x02,
0xA0,0x02,
0xB6,0x02,
0xCA,0x02,
0xDC,0x02,
0xF4,0x02,
0x0A,0x03,
0x12,0x03,
0x1E,0x03,
0x34,0x03,
0x46,0x03,
0x62,0x03,
0x78,0x03,
0x8C,0x03,
0x9E,0x03,
0xB4,0x03,
0xCA,0x03,
0xDC,0x03,
0xF0,0x03,
0x06,0x04,
0x1E,0x04,
0x3E,0x04,
0x56,0x04,
0x6E,0x04,
0x82,0x04,
0x8A,0x04,
0x98,0x04,
0xA0,0x04,
0xA9,0x04,
0xB4,0x04,
0xB9,0x04,
0xC2,0x04,
0xD2,0x04,
0xDA,0x04,
0xEA,0x04,
0xF2,0x04,
0xFE,0x04,
0x0E,0x05,
0x20,0x05,
0x28,0x05,
0x30,0x05,
0x40,0x05,
0x48,0x05,
0x55,0x05,
0x5F,0x05,
0x68,0x05,
0x78,0x05,
0x88,0x05,
0x8F,0x05,
0x96,0x05,
0xA0,0x05,
0xAA,0x05,
0xB4,0x05,
0xC2,0x05,
0xCB,0x05,
0xDD,0x05,
0xE5,0x05,
0xEF,0x05,
0xF3,0x05,
0xFE,0x05,

// space (32): w=1, h=1
0x80,0x0A,0x48,
0x00,

// exclam (33): w=1, h=11
0x20,0x16,
0x7F,
0x06,

// quotedbl (34): w=4, h=3
0x03,0x10,
0x07,0x00,0x00,0x07,

// numbersign (35): w=8, h=11
0x27,0x08,
0x40,0xC8,0x78,0x4F,0xC8,0x78,0x4F,0x08,
0x00,0x07,0x00,0x00,0x07,0x00,0x00,0x00,

// dollar (36): w=7, h=12
0x26,0x09,
0x0E,0x11,0x21,0xFF,0x21,0x41,0x86,
0x03,0x04,0x04,0x1F,0x04,0x04,0x03,

// percent (37): w=11, h=11
0x2A,0x10,
0x1C,0x22,0x21,0x11,0xCF,0x72,0x9E,0x47,0x20,0x20,
0xE0,
0x00,0x00,0x00,0x07,0x01,0x00,0x03,0x04,0x04,0x02,
0x01,

// ampersand (38): w=12, h=11
0x2B,0x09,
0x80,0x40,0x20,0x2E,0x31,0x51,0x8E,0x80,0x50,0x30,
0x10,0x00,
0x01,0x02,0x04,0x04,0x04,0x02,0x01,0x02,0x04,0x04,
0x02,0x01,

// quotesingle (39): w=1, h=3
0x00,0x0F,
0x07,

// parenleft (40): w=4, h=14
0x23,0x09,
0xF0,0x0C,0x02,0x01,
0x03,0x0C,0x10,0x20,

// parenright (41): w=4, h=14
0x23,0x04,
0x01,0x02,0x0C,0xF0,
0x20,0x10,0x0C,0x03,

// asterisk (42): w=5, h=6
0x04,0x10,
0x12,0x0C,0x3F,0x0C,0x12,

// plus (43): w=7, h=7
0x06,0x6F,
0x08,0x08,0x08,0x7F,0x08,0x08,0x08,

// comma (44): w=2, h=3
0x81,0x09,0x56,
0x04,0x03,

// hyphen (45): w=4, h=1
0x03,0xC9,
0x01,0x01,0x01,0x01,

// period (46): w=1, h=2
0x80,0x09,0x57,
0x03,

// slash (47): w=5, h=13
0x24,0x08,
0x00,0x00,0xE0,0x18,0x07,
0x18,0x07,0x00,0x00,0x00,

// zero (48): w=7, h=11
0x26,0x09,
0xF8,0x06,0x01,0x01,0x01,0x06,0xF8,
0x00,0x03,0x04,0x04,0x04,0x03,0x00,

// one (49): w=4, h=11
0x23,0x11,
0x04,0x02,0xFF,0x00,
0x00,0x04,0x07,0x04,

// two (50): w=7, h=11
0x26,0x09,
0x04,0x02,0x01,0x81,0x41,0x22,0x1C,
0x04,0x06,0x05,0x04,0x04,0x04,0x02,

// three (51): w=7, h=11
0x26,0x09,
0x04,0x02,0x21,0x31,0x29,0x46,0x80,
0x02,0x06,0x04,0x04,0x04,0x02,0x01,

// four (52): w=8, h=11
0x27,0x03,
0x00,0x80,0x60,0x10,0x0C,0x02,0xFF,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x07,0x01,

// five (53): w=7, h=11
0x26,0x09,
0x00,0x18,0x17,0x11,0x11,0x21,0xC1,
0x02,0x04,0x04,0x04,0x02,0x02,0x01,

// six (54): w=7, h=11
0x26,0x09,
0xF0,0x2C,0x22,0x12,0x11,0x21,0xC1,
0x01,0x02,0x04,0x04,0x04,0x02,0x01,

// seven (55): w=7, h=11
0x26,0x09,
0x07,0x01,0x01,0xC1,0x31,0x0D,0x03,
0x00,0x00,0x06,0x01,0x00,0x00,0x00,

// eight (56): w=6, h=11
0x25,0x0A,
0x8C,0x52,0x21,0x21,0x52,0x8C,
0x01,0x02,0x04,0x04,0x02,0x01,

// nine (57): w=7, h=11
0x26,0x09,
0x1C,0x22,0x41,0x41,0x41,0xA2,0x7C,
0x04,0x04,0x04,0x02,0x02,0x01,0x00,

// colon (58): w=1, h=8
0x00,0x70,
0xC3,

// semicolon (59): w=2, h=9
0x21,0x6A,
0x00,0xC3,
0x01,0x00,

// less (60): w=8, h=9
0x27,0x49,
0x10,0x28,0x28,0x44,0x82,0x82,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,

// equal (61): w=7, h=4
0x06,0xAA,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,

// greater (62): w=8, h=9
0x27,0x4E,
0x01,0x01,0x82,0x82,0x44,0x28,0x28,0x10,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

// question (63): w=5, h=11
0x24,0x0F,
0x06,0x01,0x61,0x11,0x0E,
0x00,0x00,0x06,0x00,0x00,

// at (64): w=14, h=14
0x2D,0x09,
0xE0,0x18,0x04,0x02,0xC2,0x31,0x11,0x09,0x09,0xF1,
0x1A,0x02,0x0C,0xF0,
0x03,0x04,0x08,0x10,0x13,0x24,0x24,0x22,0x21,0x23,
0x14,0x14,0x03,0x00,

// A (65): w=12, h=11
0x2B,0x08,
0x00,0x00,0xC0,0xB0,0x8C,0x83,0x8E,0xB8,0xE0,0x00,
0x00,0x00,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x05,0x07,
0x04,0x04,

// B (66): w=8, h=11
0x27,0x10,
0x01,0xFF,0x21,0x21,0x21,0x73,0x4E,0x80,
0x04,0x07,0x04,0x04,0x04,0x04,0x06,0x03,

// C (67): w=10, h=11
0x29,0x09,
0xF8,0x06,0x02,0x01,0x01,0x01,0x01,0x01,0x02,0x0F,
0x00,0x03,0x02,0x04,0x04,0x04,0x04,0x02,0x02,0x01,

// D (68): w=10, h=11
0x29,0x0A,
0x01,0xFF,0x01,0x01,0x01,0x01,0x02,0x02,0x04,0xF8,
0x04,0x07,0x04,0x04,0x04,0x04,0x02,0x02,0x01,0x00,

// E (69): w=9, h=11
0x28,0x09,
0x01,0xFF,0x21,0x21,0x21,0x21,0x71,0x03,0x00,
0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x02,

// F (70): w=8, h=11
0x27,0x09,
0x01,0xFF,0x21,0x21,0x21,0x21,0x71,0x03,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x00,

// G (71): w=11, h=11
0x2A,0x09,
0xF8,0x04,0x02,0x02,0x01,0x01,0x01,0x21,0x22,0xE7,
0x20,
0x00,0x01,0x02,0x02,0x04,0x04,0x04,0x04,0x02,0x03,
0x00,

// H (72): w=10, h=11
0x29,0x0A,
0x01,0xFF,0x21,0x20,0x20,0x20,0x20,0x21,0xFF,0x01,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x04,0x07,0x04,

// I (73): w=3, h=11
0x22,0x0A,
0x01,0xFF,0x01,
0x04,0x07,0x04,

// J (74): w=5, h=11
0x24,0x09,
0x00,0x00,0x01,0xFF,0x01,
0x03,0x04,0x04,0x03,0x00,

// K (75): w=10, h=11
0x29,0x0F,
0x01,0xFF,0x21,0x21,0x50,0x88,0x05,0x03,0x01,0x01,
0x04,0x07,0x04,0x04,0x00,0x00,0x05,0x06,0x04,0x04,

// L (76): w=8, h=11
0x27,0x0A,
0x01,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,
0x04,0x07,0x04,0x04,0x04,0x04,0x04,0x02,

// M (77): w=13, h=11
0x2C,0x0A,
0x01,0xFF,0x03,0x0C,0x70,0x80,0x00,0x80,0x70,0x0C,
0x03,0xFF,0x01,
0x04,0x07,0x04,0x00,0x00,0x01,0x06,0x01,0x00,0x00,
0x04,0x07,0x04,

// N (78): w=10, h=11
0x29,0x0A,
0x01,0xFF,0x03,0x0C,0x30,0x40,0x80,0x01,0xFF,0x01,
0x04,0x07,0x04,0x04,0x00,0x00,0x01,0x02,0x07,0x00,

// O (79): w=9, h=11
0x28,0x10,
0xF8,0x06,0x02,0x01,0x01,0x01,0x02,0x06,0xF8,
0x00,0x03,0x02,0x04,0x04,0x04,0x02,0x03,0x00,

// P (80): w=8, h=11
0x27,0x09,
0x01,0xFF,0x21,0x21,0x21,0x21,0x12,0x0C,
0x04,0x07,0x04,0x00,0x00,0x00,0x00,0x00,

// Q (81): w=10, h=14
0x29,0x0F,
0xF8,0x06,0x02,0x01,0x01,0x01,0x02,0x06,0xF8,0x00,
0x00,0x03,0x06,0x04,0x0C,0x1C,0x12,0x23,0x20,0x20,

// R (82): w=10, h=11
0x29,0x09,
0x01,0xFF,0x21,0x21,0x61,0xA1,0x12,0x0C,0x00,0x00,
0x04,0x07,0x04,0x00,0x00,0x00,0x01,0x06,0x04,0x04,

// S (83): w=8, h=11
0x27,0x09,
0x0C,0x12,0x11,0x21,0x21,0x22,0x47,0x80,
0x07,0x02,0x04,0x04,0x04,0x04,0x02,0x01,

// T (84): w=9, h=11
0x28,0x09,
0x07,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x07,
0x00,0x00,0x00,0x04,0x07,0x04,0x00,0x00,0x00,

// U (85): w=10, h=11
0x29,0x0A,
0x01,0xFF,0x01,0x00,0x00,0x00,0x00,0x01,0xFF,0x01,
0x00,0x01,0x02,0x04,0x04,0x04,0x04,0x02,0x01,0x00,

// V (86): w=11, h=11
0x2A,0x09,
0x01,0x03,0x0D,0x70,0x80,0x00,0x80,0x70,0x0D,0x03,
0x01,
0x00,0x00,0x00,0x00,0x01,0x06,0x01,0x00,0x00,0x00,
0x00,

// W (87): w=15, h=11
0x2E,0x09,
0x01,0x03,0x0D,0x70,0x80,0x01,0xE3,0x1D,0x70,0x80,
0x00,0xE0,0x1D,0x03,0x01,
0x00,0x00,0x00,0x00,0x01,0x06,0x01,0x00,0x00,0x01,
0x06,0x01,0x00,0x00,0x00,

// X (88): w=11, h=11
0x2A,0x09,
0x01,0x03,0x05,0x88,0x50,0x20,0x50,0x88,0x05,0x03,
0x01,
0x04,0x06,0x05,0x00,0x00,0x00,0x00,0x00,0x05,0x06,
0x04,

// Y (89): w=11, h=11
0x2A,0x09,
0x01,0x03,0x05,0x18,0x20,0xC0,0x20,0x18,0x05,0x03,
0x01,
0x00,0x00,0x00,0x00,0x04,0x07,0x04,0x00,0x00,0x00,
0x00,

// Z (90): w=9, h=11
0x28,0x09,
0x07,0x01,0x81,0x41,0x21,0x19,0x05,0x03,0x01,
0x04,0x06,0x05,0x04,0x04,0x04,0x04,0x04,0x02,

// bracketleft (91): w=3, h=14
0x22,0x0F,
0xFF,0x01,0x01,
0x3F,0x20,0x20,

// backslash (92): w=6, h=11
0x25,0x02,
0x01,0x06,0x18,0x60,0x80,0x00,
0x00,0x00,0x00,0x00,0x01,0x06,

// bracketright (93): w=3, h=14
0x22,0x0A,
0x01,0x01,0xFF,
0x20,0x20,0x3F,

// asciicircum (94): w=7, h=7
0x06,0x09,
0x60,0x18,0x06,0x01,0x06,0x18,0x60,

// underscore (95): w=8, h=1
0x87,0x0C,0x45,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

// grave (96): w=3, h=3
0x02,0x10,
0x01,0x02,0x04,

// a (97): w=7, h=8
0x06,0x6D,
0x76,0x91,0x89,0x49,0xFE,0x80,0x40,

// b (98): w=7, h=11
0x26,0x09,
0x02,0xFF,0x10,0x08,0x08,0x18,0xE0,
0x00,0x03,0x06,0x04,0x04,0x02,0x01,

// c (99): w=6, h=8
0x05,0x69,
0x3C,0x42,0x81,0x81,0x81,0x46,

// d (100): w=7, h=11
0x26,0x09,
0xE0,0x10,0x08,0x08,0x12,0xFF,0x00,
0x01,0x02,0x04,0x04,0x02,0x07,0x02,

// e (101): w=6, h=8
0x05,0x69,
0x3C,0x4A,0x89,0x89,0x89,0x4E,

// f (102): w=5, h=11
0x24,0x0E,
0x10,0xFE,0x11,0x11,0x02,
0x04,0x07,0x04,0x04,0x00,

// g (103): w=7, h=12
0x26,0x69,
0x4C,0xB2,0xA1,0xA1,0x92,0x8F,0x01,
0x07,0x0C,0x08,0x08,0x08,0x04,0x03,

// h (104): w=8, h=11
0x27,0x08,
0x02,0xFF,0x10,0x08,0x08,0x18,0xF0,0x00,
0x04,0x07,0x04,0x00,0x00,0x04,0x07,0x04,

// i (105): w=3, h=11
0x22,0x0F,
0x10,0xFB,0x00,
0x04,0x07,0x04,

// j (106): w=3, h=15
0x22,0x09,
0x00,0x10,0xFB,
0x60,0x40,0x3F,

// k (107): w=7, h=11
0x26,0x0E,
0x02,0xFF,0x40,0xA8,0x18,0x08,0x00,
0x04,0x07,0x04,0x00,0x05,0x06,0x04,

// l (108): w=3, h=11
0x22,0x0F,
0x02,0xFF,0x00,
0x04,0x07,0x04,

// m (109): w=11, h=8
0x0A,0x6F,
0x82,0xFF,0x82,0x01,0x81,0xFE,0x82,0x01,0x81,0xFE,
0x80,

// n (110): w=8, h=8
0x07,0x68,
0x82,0xFF,0x82,0x01,0x01,0x83,0xFE,0x80,

// o (111): w=7, h=8
0x06,0x69,
0x3C,0x42,0x81,0x81,0x81,0x42,0x3C,

// p (112): w=7, h=12
0x26,0x69,
0x02,0xFF,0x42,0x81,0x81,0x83,0x7E,
0x08,0x0F,0x08,0x00,0x00,0x00,0x00,

// q (113): w=7, h=12
0x26,0x6E,
0x7E,0xC3,0x81,0x81,0x42,0xFF,0x00,
0x00,0x00,0x00,0x00,0x08,0x0F,0x08,

// r (114): w=5, h=8
0x04,0x69,
0x82,0xFF,0x82,0x01,0x03,

// s (115): w=5, h=8
0x04,0x69,
0xE6,0x49,0x89,0x89,0x73,

// t (116): w=4, h=10
0x23,0x29,
0x04,0xFF,0x04,0x04,
0x00,0x01,0x02,0x01,

// u (117): w=8, h=8
0x07,0x68,
0x01,0x7F,0x80,0x80,0x80,0x41,0xFF,0x40,

// v (118): w=8, h=8
0x07,0x68,
0x01,0x07,0x19,0x60,0xC0,0x39,0x07,0x01,

// w (119): w=12, h=8
0x0B,0x68,
0x01,0x07,0x19,0x20,0xC1,0x27,0x19,0x20,0xC0,0x39,
0x07,0x01,

// x (120): w=7, h=8
0x06,0x69,
0x81,0xC3,0xB5,0x08,0xB5,0xC3,0x81,

// y (121): w=8, h=12
0x27,0x68,
0x01,0x07,0x19,0x21,0xC0,0x39,0x07,0x01,
0x0C,0x08,0x04,0x03,0x00,0x00,0x00,0x00,

// z (122): w=6, h=8
0x05,0x69,
0xC3,0xA1,0x91,0x89,0x85,0xC3,

// braceleft (123): w=4, h=14
0x23,0x16,
0x40,0xBE,0x01,0x01,
0x00,0x1F,0x20,0x20,

// bar (124): w=1, h=11
0x20,0x0A,
0xFF,
0x07,

// braceright (125): w=4, h=14
0xA3,0x00,0x49,
0x01,0x01,0xBE,0x40,
0x20,0x20,0x1F,0x00,

// asciitilde (126): w=8, h=3
0x07,0xA9,
0x06,0x01,0x01,0x03,0x06,0x04,0x04,0x03

};
// 1354 bytes
// 1544 bytes with FAST_FONT_INDEX
