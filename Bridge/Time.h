#pragma once
#ifndef TIME_H
#define TIME_H
#include "TimeImp.h"
class Time : public TimeImp {
	
public:
	Time() {};
	Time(int min, int hr) {
		imp = new TimeImp(min, hr);
	}

	virtual void print() {
		(*imp).print();
	}

protected:
	TimeImp *imp;

};

#endif // !TIME_H
