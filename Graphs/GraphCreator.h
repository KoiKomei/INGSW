#pragma once
#ifndef GRAPHCREATOR_H
#define GRAPHCREATOR_H

#include "Graph.h"
class GraphCreator {
		
private:
	Graph* printer;
	//GraphCreator() {};
	//static GraphCreator *instance;

public:
	virtual Graph* CreateGraph()=0;
	~GraphCreator() { delete printer; }
	Graph *newGraph() {
		printer = CreateGraph();
		return printer;
	}
	
	/*static GraphCreator* getInstance() {
		if (instance == NULL) {
			instance = new GraphCreator();
		}
		return instance;
		
	}*/

};

//GraphCreator *GraphCreator::instance = NULL;

#endif // !GRAPHCREATOR_H
