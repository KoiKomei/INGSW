#pragma once
#ifndef TIMEIMP_H
#define TIMEIMP_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class TimeImp {

public:
	TimeImp(int min, int hr) {
		_min = min;
		_hr = hr;
	}

	virtual void print() {
		cout << "Time is " << setw(2) << setfill(48) << _hr << ":" << _min << endl;
	}

protected:
	int _min, _hr;

};

#endif // !TIMEIMP_H
