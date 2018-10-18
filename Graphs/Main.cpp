#include "BarGraph.h"
#include "PiGraph.h"
#include "HistogramGraph.h"

int main() {
	Graph *graph;
	GraphCreator *creator;


	creator = new PiGraph();
	graph = (*creator).newGraph();
	(*graph).print();
	delete creator;

	//GraphCreator *create
	
	return 0;
}