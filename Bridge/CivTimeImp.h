#pragma once
#ifndef CIVTIMEIMP_H
#define CIVTIMEIMP_H

#include "TimeImp.h"

class CivTimeImp :public TimeImp {

public:
	CivTimeImp(int hr, int min, int pm):TimeImp(min, hr){
		if (pm == 1) {
			strcpy_s(_M, " PM");
		}
		else {
			strcpy_s(_M, " AM");
		}
	}

	void print() {
		if (_hr > 12) {
			_hr = _hr - 12;
		}
		cout << "Time is " << _hr << ":" << _min <<" "<<_M<< endl;
	}
protected:
	char _M[4];
};

#endif // !CIVTIMEIMP_H
