#include "ProtoAbPrinter.h"
#include "ProtoCircleShape.h"
#include "vld.h"

int main() {
	ProtoShapeCreator *shape;
	ProtoAbPrinter *printer = new ProtoAbPrinter();
	shape = (*printer).make(CIRCLE);
	(*shape).print();

	shape = (*printer).make(RECTANGLE);
	(*shape).print();

	shape = (*printer).make(TRIANGLE);
	(*shape).print();

	delete shape;

	delete printer;
	

	return 0;
}