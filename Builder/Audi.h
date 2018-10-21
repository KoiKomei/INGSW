#pragma once
#ifndef AUDI_H
#define AUDI_H

#include "CarBuilder.h"

class Audi :public CarBuilder {

public:
	Audi() :CarBuilder() {};
	void buildType();
	void buildColor();

};

#endif // !AUDI_H
