#pragma once
#ifndef GRAPHCREATOR_H
#define GRAPHCREATOR_H

#include "Graph.h"
class GraphCreator {
		
private:
	Graph* printer;

public:
	virtual Graph* CreateGraph() = 0;
	~GraphCreator() { delete printer; }
	Graph *newGraph() {
		printer = CreateGraph();
		return printer;
	}

};

#endif // !GRAPHCREATOR_H
