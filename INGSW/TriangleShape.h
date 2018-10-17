#pragma once
#ifndef TRIANGLESHAPE_H
#define TRIANGLESHAPE_H

#include "ShapeCreator.h"
#include "Triangle.h"

class TriangleShape :public ShapeCreator {

public:

	AbstractPrinter* CreatePrinter() {
		return new Triangle;
	}

};

#endif // !TRIANGLESHAPE_H
