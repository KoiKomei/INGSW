#pragma once
#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
using namespace std;
#include "Color.h"
#include "Type.h"

class Car {

public:
	Car() :price(0) {	};
	~Car() {};
	void setType(Brand t) { 
		price += brand.getPrice(t);
		br = brand.getPriceString(t);
	}
	void setColor(Colour c) {
		price += colour.getColor(c);
		col = colour.getColType(c);
	}

	void printCar();

private:
	Type brand;
	Color colour;
	int price;
	string col, br;
};

#endif // !CAR_H
