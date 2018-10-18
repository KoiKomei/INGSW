#pragma once
#ifndef PIGRAPH_H
#define PIGRAPH_H

#include "GraphCreator.h"
#include "FilledPi.h"


class PiGraph :public GraphCreator {

public:
	Graph *CreateGraph() {
		return new FilledPi;
	}

};

#endif // !PIGRAPH_H
