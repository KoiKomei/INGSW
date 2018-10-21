#pragma once
#ifndef COLOR_H
#define COLOR_H
#include <vector>
#include <string>
using namespace std;
enum Colour {ROSSO, VERDE, GIALLO};

class Color {

public:
	Color() {
		
		pr[ROSSO] = 5000;
		col.push_back("rosso");
		pr[VERDE]= 7000;
		col.push_back("verde");
		pr[GIALLO]= 6000;
		col.push_back("giallo");

	}

	int getColor(Colour c) { return pr[c]; }
	string getColType(Colour c) { return col[c]; }

private:
	int pr[3];
	vector<string> col;

};


#endif // !COLOR_H
