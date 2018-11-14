#pragma once
#ifndef DECORATOR_H
#define DECORATOR_H

#include "Widget.h"
#include "TextField.h"

class Decorator : public Widget{

public:
	Decorator(Widget *w) {
		wid = w;
	}

	void draw() {
		(*wid).draw();
	}


private:
	Widget *wid;
};

#endif // !DECORATOR_H
