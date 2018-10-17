#pragma once
#ifndef BARGRAPH_H
#define BARGRAPH_H
#include "GraphCreator.h"
#include "Bar.h"
class BarGraph: public GraphCreator {
public:
	Graph *CreateGraph() {
		return new Bar;
	}
};


#endif // !BARGRAPH_H
