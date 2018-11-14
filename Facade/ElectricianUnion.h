#pragma once
#ifndef ELECTRICIANUNION_H
#define ELECTRICIANUNION_H

class ElectricianUnion {

public:

	void submitNetwork() {
		_state = 0;
	}

	bool checkOnStatus() {
		_state++;
		if (_state == Complete)
			return 1;
		return 0;
	}

private:
	enum States {
		Received, DenyAllKnowledge, ReferClientToFacilities,
		FacilitiesHasNotSentPaperwork, ElectricianIsNotDone,
		ElectricianDidItWrong, DispatchTechnician, SignedOff, DoesNotWork,
		FixElectriciansWiring, Complete
	};
	int _state;


};

#endif // !ELECTRICIANUNION_H
