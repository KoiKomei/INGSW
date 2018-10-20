#pragma once
#ifndef PROTOTRIANGLESHAPE_H
#define PROTOTRIANGLESHAPE_H
#include "ProtoShapeCreator.h"
class ProtoTriangleShape : public ProtoShapeCreator {
public:
	ProtoTriangleShape() {};
	~ProtoTriangleShape() {};
	ProtoShapeCreator *clone() { return new ProtoTriangleShape; }
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

#endif // !PROTOTRIANGLESHAPE_H
