#pragma once
#ifndef PROTORECTANGLESHAPE_H
#define PROTORECTANGLESHAPE_H

#include "ProtoShapeCreator.h"

class ProtoRectangleShape : public ProtoShapeCreator {

public:
	ProtoRectangleShape() {};
	~ProtoRectangleShape() {};
	ProtoShapeCreator *clone() { return new ProtoRectangleShape; }
	void print() {
		cout << endl;
		load.open("Rettangolo.txt");
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
	
	};

};

#endif // !PROTORECTANGLESHAPE_H
