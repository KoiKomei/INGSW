#pragma once
#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
using namespace std;
class Graph {

protected:
	int a[6] = { 36, 10, 24, 7, 18, 5 };

public:
	virtual void print() = 0;

};

#endif // !GRAPH_H
