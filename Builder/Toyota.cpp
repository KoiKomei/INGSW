#include "Toyota.h"

void Toyota::buildColor() {
	cout << "Scegli un colore (ROSSO/VERDE/GIALLO): ";
	string a;
	cin >> a;
	while (1) {
		if (a == "Rosso" || a == "rosso" || a == "ROSSO") {
			(*car).setColor(ROSSO);
			break;
		}
		else if (a == "Verde" || a == "verde" || a == "VERDE") {
			(*car).setColor(VERDE);
			break;
		}
		else if (a == "Giallo" || a == "giallo" || a == "GIALLO") {
			(*car).setColor(GIALLO);
			break;
		}
		else {
			cout << "Colore inesistente, scegline un altro: ";
			cin >> a;
		}

	}
}

void Toyota::buildType() {
	(*car).setType(TOYOTA);
}