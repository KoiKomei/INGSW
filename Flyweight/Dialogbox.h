#pragma once
#ifndef DIALOGBOX_H
#define DIALOGBOX_H
#include "Icon.h"
class Dialogbox {
public:
	Dialogbox(int x, int y, int incr) : _iconsOriginX(x), _iconsOriginY(y),
		_iconsXIncrement(incr) {}
	virtual void draw() = 0;
protected:
	Icon *_icons[3];
	int _iconsOriginX;
	int _iconsOriginY;
	int _iconsXIncrement;


};

#endif // !DIALOGBOX_H
