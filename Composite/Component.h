#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>
using namespace std;
//interfaccia

class Component {

public:
	virtual void traverse() = 0;

};

#endif // !COMPONENT_H
