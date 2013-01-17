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
#ifndef ABSTRACTLCD_H_
#define ABSTRACTLCD_H_

#include "Global.h"
#include "Tools.h"
#include "TextureBuilder.h"


enum operation {
	XOR = 0, OR, AND, REPLACE
};

#define FRAME_STACK_SIZE 10
class AbstractLcd {
private:
	const char *debug_message;
	static AbstractLcd *s_instance;Rect frames[FRAME_STACK_SIZE];
	uint8_t frame_element;
public:
	AbstractLcd() : frame_element(-1) {
		s_instance = this;
	}
	virtual ~AbstractLcd() {
	}
	static AbstractLcd *instance();

//	void setBounds(Bounds bounds_t) {
//		bounds = bounds_t;
//	}

#define PREVIOUS_FRAME (frames[frame_element - 1])
	void setBounds(Rect frame) {
		frame_element += 1;
		if(frame_element == 0)
		{
			frames[frame_element] = frame;
			printf("NEW_FRAME = (%d, %d) x (%d, %d)\n", frame.position.x, frame.position.y, frame.size.width, frame.size.height);
			return;
		}

		Rect new_frame;
		new_frame.position.x = PREVIOUS_FRAME.position.x + frame.position.x;
		new_frame.position.y = PREVIOUS_FRAME.position.y + frame.position.y;

		new_frame.position.x = new_frame.position.x < PREVIOUS_FRAME.position.x ?  PREVIOUS_FRAME.position.x : new_frame.position.x;
		new_frame.position.y = new_frame.position.y < PREVIOUS_FRAME.position.y ?  PREVIOUS_FRAME.position.y : new_frame.position.y;

#define MIN(A, B) ((A) < (B) ? (A) : (B))
		new_frame.size.width = MIN(new_frame.position.x + frame.size.width, PREVIOUS_FRAME.position.x + PREVIOUS_FRAME.size.width) - new_frame.position.x;
		new_frame.size.height = MIN(new_frame.position.y + frame.size.height, PREVIOUS_FRAME.position.y + PREVIOUS_FRAME.size.height) - new_frame.position.y;
#undef MIN

		new_frame.size.width = new_frame.size.width > 30000 / 2 ? 0 : new_frame.size.width;
		new_frame.size.height = new_frame.size.height > 30000 / 2 ? 0 : new_frame.size.height;

		printf("\nPRE_FRAME = (%d, %d) x (%d, %d)\n", PREVIOUS_FRAME.position.x, PREVIOUS_FRAME.position.y, PREVIOUS_FRAME.size.width, PREVIOUS_FRAME.size.height);
		printf("NEW_FRAME = (%d, %d) x (%d, %d)\n", new_frame.position.x, new_frame.position.y, new_frame.size.width, new_frame.size.height);

		frames[frame_element] = new_frame;
//		int16_t x1 = new_frame.position.x + frame.size.width;
//		int16_t y2 = new_frame.position.x + frame.size.width;

//		char *bla = "                                         ";
//		itoa(new_frame.size.width, bla, 10);
////		sprintf(bla, "%d, %d, %d, %d", new_frame.position.x, new_frame.position.y, new_frame.size.width, new_frame.size.height);
//		setDebugMessage(bla);

//		Bounds new_bounds(x, y, w, h);
//		bounds = new_bounds;
	}
#undef PREVIOUS_FRAME
	Rect getBounds() {
		return frames[frame_element];
	}
	void popBounds() {
		frame_element--;
	}

	void setDebugMessage(const char *message) {
		debug_message = message;
	}
	void drawDebugMessage();

	virtual uint16_t width() = 0;
	virtual uint16_t height() = 0;
	virtual void vline_with_pattern(int16_t x, int16_t y, int8_t h,
			uint8_t pattern) = 0;
	virtual void draw_with(int8_t i_x, int8_t i_y, TextureBuilder *builder) = 0;
	virtual void clear() = 0;
	virtual void refresh() = 0;
	virtual uint8_t *getBuffer() = 0;
};

#endif /* ABSTRACTLCD_H_ */
