#pragma once
#ifndef FACILITIESFACADE_H
#define FACILITIESFACADE_H
#include "ElectricianUnion.h"
#include "FacilitiesDepartment.h"
#include "MisDeparment.h"
#include <iostream>
using namespace std;
class FacilitiesFacade {

public:
	FacilitiesFacade() {
		_count = 0;
	}

	void submitNetworkRequest() {
		_state = 0;
	}

	bool checkOnStatus() {
		_count++;
		if (_state == Received) {
			_state++;
			eng.submitNetwork();
			cout << "Submitted to Facilities - " << _count << " phone calls so far" << endl;
		}
		else if (_state == SubmitToEngineer) {
			_state++;
			ele.submitNetwork();
			cout << "Submitted to Electrician - " << _count << " phone calls so far" << endl;
		}
		else if (_state == SubmitToElectrician) {
			_state++;
			tech.submitNetwork();
			cout << "Submitted to Technician - " << _count << " phone calls so far" << endl;
		}
		else if (_state == SubmitToTechnician) {
			if (tech.checkOnStatus()) {
				return 1;
			}
		}
		return 0;
	
	}

	int numberOfCalls() {
		return _count;
	}

private:
	enum States {

		Received, SubmitToEngineer, SubmitToElectrician, SubmitToTechnician
	};

	int _count;
	int _state;
	FacilitiesDepartment eng;
	ElectricianUnion ele;
	MisDepartment tech;
};


#endif // !FACILITIESFACADE_H
