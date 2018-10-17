#pragma once
#ifndef RECTANGLESHAPE_H
#define RECTANGLESHAPE_H
#include "ShapeCreator.h"
#include "Rectangle.h"

class RectangleShape :public ShapeCreator {

public:
	
	AbstractPrinter* CreatePrinter() {
		return new Rectangle;
	}

};
#endif // !RECTANGLESHAPE_H