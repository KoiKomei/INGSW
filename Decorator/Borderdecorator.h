#pragma once
#ifndef BORDERDECORATOR_H
#define BORDERDECORATOR_H

#include "Decorator.h"

class Borderdecorator : public Decorator {

public:
	Borderdecorator(Widget *w) :Decorator(w) {}

	void draw() {
		Decorator::draw();
		cout << " Borderdecorator" << endl;
	}
};

#endif // !BORDERDECORATOR_H
