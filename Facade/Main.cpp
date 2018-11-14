#include "FacilitiesFacade.h"

int main() {
	FacilitiesFacade facilities;
	facilities.submitNetworkRequest();

	while (!facilities.checkOnStatus());

	cout << "Job completed after only " << facilities.numberOfCalls() << " phone calls" << endl;

	return 0;
}