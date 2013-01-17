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

const char font_clR5x6[] PROGMEM = {
0x20,0x5E,   // characters 32 to 126
0xC0,0x00,
0xC4,0x00,
0xC7,0x00,
0xCC,0x00,
0xD3,0x00,
0xDA,0x00,
0xE1,0x00,
0xE7,0x00,
0xEB,0x00,
0xEF,0x00,
0xF3,0x00,
0xF9,0x00,
0x00,0x01,
0x04,0x01,
0x0A,0x01,
0x0D,0x01,
0x14,0x01,
0x1A,0x01,
0x1E,0x01,
0x24,0x01,
0x2A,0x01,
0x30,0x01,
0x36,0x01,
0x3C,0x01,
0x42,0x01,
0x48,0x01,
0x4E,0x01,
0x51,0x01,
0x55,0x01,
0x5A,0x01,
0x60,0x01,
0x65,0x01,
0x6B,0x01,
0x71,0x01,
0x77,0x01,
0x7D,0x01,
0x83,0x01,
0x89,0x01,
0x8F,0x01,
0x95,0x01,
0x9B,0x01,
0xA1,0x01,
0xA6,0x01,
0xAC,0x01,
0xB2,0x01,
0xB8,0x01,
0xBE,0x01,
0xC4,0x01,
0xCA,0x01,
0xD0,0x01,
0xD6,0x01,
0xDC,0x01,
0xE2,0x01,
0xE9,0x01,
0xEF,0x01,
0xF5,0x01,
0xFB,0x01,
0x01,0x02,
0x08,0x02,
0x0E,0x02,
0x12,0x02,
0x19,0x02,
0x1D,0x02,
0x22,0x02,
0x28,0x02,
0x2C,0x02,
0x32,0x02,
0x38,0x02,
0x3E,0x02,
0x44,0x02,
0x4A,0x02,
0x50,0x02,
0x56,0x02,
0x5C,0x02,
0x5F,0x02,
0x65,0x02,
0x6B,0x02,
0x70,0x02,
0x76,0x02,
0x7C,0x02,
0x82,0x02,
0x88,0x02,
0x8E,0x02,
0x94,0x02,
0x9A,0x02,
0xA0,0x02,
0xA6,0x02,
0xAC,0x02,
0xB2,0x02,
0xB8,0x02,
0xBE,0x02,
0xC4,0x02,
0xC9,0x02,
0xCC,0x02,
0xD1,0x02,

// C040 (32): w=1, h=1
0x80,0x05,0x85,
0x00,

// ! (33): w=1, h=5
0x00,0x16,
0x17,

// " (34): w=3, h=2
0x02,0x0F,
0x03,0x00,0x03,

// # (35): w=5, h=5
0x04,0x08,
0x0A,0x1F,0x0A,0x1F,0x0A,

// $ (36): w=5, h=5
0x04,0x08,
0x02,0x15,0x1F,0x15,0x08,

// % (37): w=5, h=5
0x04,0x08,
0x13,0x0B,0x04,0x1A,0x19,

// & (38): w=4, h=5
0x03,0x0E,
0x0A,0x15,0x09,0x14,

// ' (39): w=2, h=2
0x01,0x10,
0x02,0x01,

// ( (40): w=2, h=5
0x01,0x1A,
0x0E,0x11,

// ) (41): w=2, h=5
0x01,0x10,
0x11,0x0E,

// * (42): w=4, h=5
0x03,0x0E,
0x15,0x0E,0x0E,0x15,

// + (43): w=5, h=5
0x04,0x08,
0x04,0x04,0x1F,0x04,0x04,

// , (44): w=2, h=3
0x01,0x70,
0x04,0x03,

// - (45): w=4, h=1
0x03,0x4E,
0x01,0x01,0x01,0x01,

// . (46): w=1, h=2
0x00,0x76,
0x03,

// / (47): w=5, h=5
0x04,0x08,
0x10,0x08,0x04,0x02,0x01,

// 0 (48): w=4, h=5
0x03,0x0E,
0x0E,0x15,0x13,0x0E,

// 1 (49): w=2, h=5
0x01,0x10,
0x02,0x1F,

// 2 (50): w=4, h=5
0x03,0x0E,
0x19,0x15,0x15,0x12,

// 3 (51): w=4, h=5
0x03,0x0E,
0x11,0x15,0x15,0x0A,

// 4 (52): w=4, h=5
0x03,0x0E,
0x08,0x0C,0x0A,0x1F,

// 5 (53): w=4, h=5
0x03,0x0E,
0x17,0x15,0x15,0x09,

// 6 (54): w=4, h=5
0x03,0x0E,
0x0E,0x15,0x15,0x08,

// 7 (55): w=4, h=5
0x03,0x0E,
0x11,0x09,0x05,0x03,

// 8 (56): w=4, h=5
0x03,0x0E,
0x0A,0x15,0x15,0x0A,

// 9 (57): w=4, h=5
0x03,0x0E,
0x02,0x15,0x15,0x0E,

// : (58): w=1, h=5
0x00,0x16,
0x1B,

// ; (59): w=2, h=6
0x01,0x10,
0x20,0x1B,

// < (60): w=3, h=5
0x02,0x0F,
0x04,0x0A,0x11,

// = (61): w=4, h=3
0x03,0x2E,
0x05,0x05,0x05,0x05,

// > (62): w=3, h=5
0x02,0x14,
0x11,0x0A,0x04,

// ? (63): w=4, h=5
0x03,0x0E,
0x01,0x15,0x05,0x02,

// @ (64): w=4, h=5
0x03,0x0E,
0x0E,0x11,0x17,0x06,

// A (65): w=4, h=5
0x03,0x0E,
0x1E,0x09,0x09,0x1E,

// B (66): w=4, h=5
0x03,0x0E,
0x1F,0x15,0x15,0x0A,

// C (67): w=4, h=5
0x03,0x0E,
0x0E,0x11,0x11,0x11,

// D (68): w=4, h=5
0x03,0x0E,
0x1F,0x11,0x11,0x0E,

// E (69): w=4, h=5
0x03,0x0E,
0x1F,0x15,0x15,0x11,

// F (70): w=4, h=5
0x03,0x0E,
0x1F,0x05,0x05,0x01,

// G (71): w=4, h=5
0x03,0x0E,
0x0E,0x11,0x15,0x1D,

// H (72): w=4, h=5
0x03,0x0E,
0x1F,0x04,0x04,0x1F,

// I (73): w=3, h=5
0x02,0x0F,
0x11,0x1F,0x11,

// J (74): w=4, h=5
0x03,0x0E,
0x08,0x10,0x11,0x0F,

// K (75): w=4, h=5
0x03,0x0E,
0x1F,0x04,0x0A,0x11,

// L (76): w=4, h=5
0x03,0x0E,
0x1F,0x10,0x10,0x10,

// M (77): w=4, h=5
0x03,0x0E,
0x1F,0x06,0x06,0x1F,

// N (78): w=4, h=5
0x03,0x0E,
0x1F,0x02,0x04,0x1F,

// O (79): w=4, h=5
0x03,0x0E,
0x0E,0x11,0x11,0x0E,

// P (80): w=4, h=5
0x03,0x0E,
0x1F,0x05,0x05,0x02,

// Q (81): w=4, h=6
0x03,0x0E,
0x0E,0x11,0x31,0x2E,

// R (82): w=4, h=5
0x03,0x0E,
0x1F,0x05,0x0D,0x12,

// S (83): w=4, h=5
0x03,0x0E,
0x12,0x15,0x15,0x09,

// T (84): w=5, h=5
0x04,0x08,
0x01,0x01,0x1F,0x01,0x01,

// U (85): w=4, h=5
0x03,0x0E,
0x0F,0x10,0x10,0x0F,

// V (86): w=4, h=5
0x03,0x0E,
0x07,0x18,0x18,0x07,

// W (87): w=4, h=5
0x03,0x0E,
0x1F,0x0C,0x0C,0x1F,

// X (88): w=4, h=5
0x03,0x0E,
0x1B,0x04,0x04,0x1B,

// Y (89): w=5, h=5
0x04,0x08,
0x01,0x02,0x1C,0x02,0x01,

// Z (90): w=4, h=5
0x03,0x0E,
0x19,0x15,0x13,0x11,

// [ (91): w=2, h=5
0x01,0x1A,
0x1F,0x11,

// \ (92): w=5, h=5
0x04,0x08,
0x01,0x02,0x04,0x08,0x10,

// ] (93): w=2, h=5
0x01,0x10,
0x11,0x1F,

// ^ (94): w=3, h=2
0x02,0x0F,
0x02,0x01,0x02,

// _ (95): w=4, h=1
0x03,0xAE,
0x01,0x01,0x01,0x01,

// ` (96): w=2, h=2
0x01,0x1A,
0x01,0x02,

// a (97): w=4, h=4
0x03,0x2E,
0x06,0x09,0x05,0x0F,

// b (98): w=4, h=5
0x03,0x0E,
0x1F,0x12,0x12,0x0C,

// c (99): w=4, h=4
0x03,0x2E,
0x06,0x09,0x09,0x09,

// d (100): w=4, h=5
0x03,0x0E,
0x0C,0x12,0x12,0x1F,

// e (101): w=4, h=4
0x03,0x2E,
0x06,0x0B,0x0B,0x02,

// f (102): w=4, h=5
0x03,0x0E,
0x04,0x1E,0x05,0x01,

// g (103): w=4, h=5
0x03,0x2E,
0x02,0x15,0x15,0x0F,

// h (104): w=4, h=5
0x03,0x0E,
0x1F,0x02,0x02,0x1C,

// i (105): w=1, h=5
0x00,0x16,
0x1D,

// j (106): w=4, h=6
0x03,0x0E,
0x10,0x20,0x20,0x1D,

// k (107): w=4, h=5
0x03,0x0E,
0x1F,0x04,0x0A,0x12,

// l (108): w=3, h=5
0x02,0x0F,
0x11,0x1F,0x10,

// m (109): w=4, h=4
0x03,0x2E,
0x0F,0x02,0x02,0x0F,

// n (110): w=4, h=4
0x03,0x2E,
0x0F,0x02,0x01,0x0E,

// o (111): w=4, h=4
0x03,0x2E,
0x06,0x09,0x09,0x06,

// p (112): w=4, h=5
0x03,0x2E,
0x1F,0x09,0x09,0x06,

// q (113): w=4, h=5
0x03,0x2E,
0x06,0x09,0x09,0x1F,

// r (114): w=4, h=4
0x03,0x2E,
0x0F,0x02,0x01,0x01,

// s (115): w=4, h=4
0x03,0x2E,
0x0A,0x0B,0x0D,0x05,

// t (116): w=4, h=5
0x03,0x0E,
0x02,0x0F,0x12,0x12,

// u (117): w=4, h=4
0x03,0x2E,
0x07,0x08,0x04,0x0F,

// v (118): w=4, h=4
0x03,0x2E,
0x03,0x0C,0x0C,0x03,

// w (119): w=4, h=4
0x03,0x2E,
0x0F,0x04,0x04,0x0F,

// x (120): w=4, h=4
0x03,0x2E,
0x09,0x06,0x06,0x09,

// y (121): w=4, h=5
0x03,0x2E,
0x03,0x14,0x14,0x0F,

// z (122): w=4, h=4
0x03,0x2E,
0x09,0x0D,0x0B,0x09,

// { (123): w=3, h=5
0x02,0x14,
0x04,0x0E,0x11,

// | (124): w=1, h=5
0x00,0x16,
0x1F,

// } (125): w=3, h=5
0x02,0x0F,
0x11,0x0E,0x04,

// ~ (126): w=4, h=2
0x03,0x0E,
0x02,0x01,0x02,0x01

};
// 537 bytes
// 727 bytes with FAST_FONT_INDEX
