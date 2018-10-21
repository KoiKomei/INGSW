#pragma once

#ifndef NEGOZIO_H
#define NEGOZIO_H

#include "Toyota.h"
#include "Ferrari.h"
#include "Audi.h"

class Negozio {
	
public:
	Negozio():builder(NULL) {};
	void setCarBuilder(CarBuilder *b) { builder = b; }
	Car* getCar() { return (*builder).getCar(); }
	void buildCar();

private:
	CarBuilder *builder;
};

#endif // !NEGOZIO_H
