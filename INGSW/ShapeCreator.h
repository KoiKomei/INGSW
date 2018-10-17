#pragma once
#ifndef SHAPECREATOR_H
#define SHAPECREATOR_H
#include "AbstractPrinter.h"
class ShapeCreator {
private:
	AbstractPrinter *printer;

public:
	virtual AbstractPrinter* CreatePrinter() = 0;
	~ShapeCreator() { delete printer; }
	AbstractPrinter *NewPrinter() {
		printer = CreatePrinter();
		return printer;
	}
		

};

#endif // !SHAPECREATOR_H
