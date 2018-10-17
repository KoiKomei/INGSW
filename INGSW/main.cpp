#include "TriangleShape.h"
#include "CircleShape.h"
#include "RectangleShape.h"
#include "vld.h"
int main() {
		
	AbstractPrinter *printer;
	ShapeCreator *shape;

	shape = new TriangleShape();
	printer = (*shape).NewPrinter();
	(*printer).print();
	delete shape;

	shape = new CircleShape();
	printer = (*shape).NewPrinter();
	(*printer).print();
	delete shape;

	shape = new RectangleShape();
	printer = (*shape).NewPrinter();
	(*printer).print();

	delete shape;

	return 0;
}