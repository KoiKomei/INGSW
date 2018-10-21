#pragma once
#ifndef FERRARI_H
#define FERRARI_H

#include "CarBuilder.h"

class Ferrari :public CarBuilder {
public:
	Ferrari() :CarBuilder() {};
	void buildType();
	void buildColor();

};

#endif // !FERRARI_H
