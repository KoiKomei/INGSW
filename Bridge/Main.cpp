#include "CivTime.h"

int main() {
	Time* times[2];
	times[0] = new Time(30, 14);
	times[1] = new CivTime(2, 30, 1);

	for (int i = 0; i < 2; i++) {
		(*times[i]).print();
	}


	return 0;
}