#pragma once
#ifndef TEXTFIELD_H
#define TEXTFIELD_H
#include "Widget.h"
class TextField :public Widget{
		
public:
	TextField(int w, int h) {
		width = w;
		height = h;
	}

	void draw() {
		cout << "TextField: " << width << ", " << height << endl;
	}

private:
	int width, height;


};

#endif // !TEXTFIELD_H
