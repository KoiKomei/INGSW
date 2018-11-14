#pragma once
#ifndef CIVTIME_H
#define CIVTIME_H
#include "CivTimeImp.h"
#include "Time.h"

class CivTime : public Time {

	
public:
	CivTime(int min, int hr, int pm) {
		imp = new CivTimeImp(min, hr, pm);
	}


};

#endif // !CIVTIME_H
