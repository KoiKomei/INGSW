#pragma once
#ifndef ADAPTER_H
#define ADAPTER_H
#include "OldRect.h"
#include "Rectangle.h"

class Adapter : public Rectangle, private OldRect {

public:
	Adapter(int x1, int y1, int x2, int y2):OldRect(x1, y1, x1+x2, y1+y2) {
		cout << "Adapter: create.  (" << x1 << "," << y1 <<"), width = " << x2 << ", height = " << y2 << endl;
	}

	void draw() {
		cout << "Adapter draw."<<endl;
		oldDraw();
	}

private:

};


#endif // !ADAPTER_H
