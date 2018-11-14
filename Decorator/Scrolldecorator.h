#pragma once
#ifndef SCROLLDECORATOR_H
#define SCROLLDECORATOR_H

#include "Decorator.h"

class Scrolldecorator : public Decorator {

public:
	Scrolldecorator(Widget *w) :Decorator(w) {}
	void draw() {
		Decorator::draw();
		cout << " ScrollDecorator"<<endl;
	}

};

#endif // !SCROLLDECORATOR_H

