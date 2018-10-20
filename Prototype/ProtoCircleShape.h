#pragma once
#ifndef PROTOCIRCLESHAPE_H
#define PROTOCIRCLESHAPE_H
#include "ProtoShapeCreator.h"

class ProtoCircleShape : public ProtoShapeCreator {

	

public:
	ProtoCircleShape() {};
	~ProtoCircleShape() {};
	ProtoShapeCreator* clone(){ return new ProtoCircleShape; }
	void print() {
		cout << endl;
		load.open("Cerchio.txt");
		figura.clear();
		figura.resize(7);
		for (int i = 0; i < 7; i++) {
			figura[i].resize(7);
		}
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 7; j++) {
				load >> figura[i][j];
			}
		}
		for (int i = 0; i < 7; i++) {
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

#endif // !PROTOCIRCLESHAPE_H
