#pragma once
#ifndef CARBUILDER_H
#define CARBUILDER_H
#include "Car.h"

class CarBuilder {
public:
	CarBuilder() {};
	~CarBuilder() { delete car; }
	Car* getCar() { return car; }
	void makeNewCar() { car = new Car; }
	virtual void buildType() = 0;
	virtual void buildColor() = 0;

protected:
	Car* car;

};

#endif // !CARBUILDER_H
