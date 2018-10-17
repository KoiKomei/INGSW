#pragma once
#ifndef  ABSTRACTPRINTER_H
#define ABSTRACTPRINTER_H
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class AbstractPrinter{
protected:
	vector<vector<int>> figura;
	ifstream load;
public:
	
	virtual void print() = 0;

};


#endif // ! ABSTRACTPRINTER_H
