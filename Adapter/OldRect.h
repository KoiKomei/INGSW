#pragma once
#ifndef OLDRECT_H
#define OLDRECT_H
#include <iostream>
using namespace std;

class OldRect {

public:
	OldRect(int x1, int x2, int y1, int y2) {
		_x1 = x1;
		_x2 = x2;
		_y1 = y1;
		_y2 = y2;
		cout << "Old Create: " << "(" << _x1 << ", " << _y1 << ")" << "=>" << "(" << _x2 << ", " << _y2 << ")"<<endl;
	}

	void oldDraw() {
		cout << "Old Rectangle:  oldDraw.  (" << _x1 << "," << _y1 <<") => (" << _x2 << "," << _y2 << ")" << endl;
	}

private:
	int _x1, _x2, _y1, _y2;

};

#endif // !OLDRECT_H
