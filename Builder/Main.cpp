#include "Negozio.h"
#include "vld.h"
int main() {
	cout << endl;
	string a;
	Car *car;
	Negozio *negozio = new Negozio();
	CarBuilder *builder;
	cout << "Scegli il tipo di macchina (toyota/audi/ferrari): ";
	cin >> a;
	while (1) {
		if (a == "toyota") {
			builder = new Toyota();
			break;
		}
		else if (a == "audi") {
			builder = new Audi();
			break;
		}
		else if (a == "ferrari") {
			builder = new Ferrari();
			break;
		}
		else {
			cout << "Macchina scelta inesistente, sceglierne un'altra: ";
			cin >> a;
		}
	}
	(*negozio).setCarBuilder(builder);
	(*negozio).buildCar();

	car = (*negozio).getCar();

	(*car).printCar();
	
	cout << endl;
	delete builder;
	delete negozio;
	

	return 0;
}