#pragma once
#ifndef HISTOGRAMGRAPH_H
#define HISTOGRAMGRAPH_H

#include "GraphCreator.h"
#include "Histogram.h"

class HistogramGraph :public GraphCreator {


public:
	Graph *CreateGraph() {
		return new Histogram;
	}



};


#endif // !HISTOGRAMGRAPH_H
