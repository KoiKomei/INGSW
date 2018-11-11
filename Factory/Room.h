#pragma once
#include <iostream>
using namespace std;
class Room
{
public:
	Room();
	~Room();
	virtual void print() { cout << "Default room"; };
};

