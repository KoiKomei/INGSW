#ifndef PROTOABPRINTER_H
#define PROTOABPRINTER_H

#include "ProtoCircleShape.h"
#include "ProtoRectangleShape.h"
#include "ProtoTriangleShape.h"
enum Shape {CIRCLE, RECTANGLE, TRIANGLE};
class ProtoAbPrinter {

private:
	ProtoShapeCreator *shape[3];
	
public:
	ProtoAbPrinter() {
		shape[CIRCLE] = new ProtoCircleShape();
		shape[RECTANGLE] = new ProtoRectangleShape();
		shape[TRIANGLE] = new ProtoTriangleShape();
	}
	~ProtoAbPrinter() {}
	ProtoShapeCreator *make(Shape type) {
		(*shape[type]).clone();
		return shape[type];
	}

};


#endif // !PROTOABPRINTER_H
