#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "AbstractPrinter.h"

class Triangle :public AbstractPrinter {

	void print() {
		cout << endl;
		load.open("Triangolo.txt");
		figura.clear();
		figura.resize(4);
		for (int i = 0; i < 4; i++) {
			figura[i].resize(7);
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 7; j++) {
				load >> figura[i][j];
			}
		}
		for (int i = 0; i < 4; i++) {
			cout << " ";
			for (int j = 0; j < 7; j++) {
				if (figura[i][j] == 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
		load.close();
	}

};

#endif // !TRIANGLE_H
