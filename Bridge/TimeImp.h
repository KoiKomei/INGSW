#pragma once
#ifndef TIMEIMP_H
#define TIMEIMP_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class TimeImp {

public:
	TimeImp() {};
	TimeImp(int min, int hr) {
		_min = min;
		_hr = hr;
	}

	virtual void print() {
		cout << "Time is " << _hr << ":" << _min << endl;
	}

protected:
	int _min, _hr;

};

#endif // !TIMEIMP_H
