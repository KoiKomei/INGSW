#ifndef PROTOSHAPECREATOR_H
#define PROTOSHAPECREATOR_H
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
class ProtoShapeCreator {
protected:
	vector<vector<int>> figura;
	ifstream load;

public:
	ProtoShapeCreator() {};
	~ProtoShapeCreator() {};
	virtual ProtoShapeCreator*clone() = 0;
	virtual void print() = 0;

};

#endif // !PROTOSHAPECREATOR_H
