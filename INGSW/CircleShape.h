#pragma once
#ifndef CIRCLESHAPE_H
#define CIRCLESHAPE_H
#include "ShapeCreator.h"
#include "Circle.h"

class CircleShape :public ShapeCreator {

public:
	
	AbstractPrinter* CreatePrinter() {
		return new Circle;
	}

};



#endif // !CIRCLESHAPE_H
