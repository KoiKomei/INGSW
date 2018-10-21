#pragma once
#ifndef TOYOTA_H
#define TOYOTA_H

#include "CarBuilder.h"

class Toyota :public CarBuilder {
public:
	Toyota() :CarBuilder() {};
	void buildType();
	void buildColor();

};


#endif // !TOYOTA_H
