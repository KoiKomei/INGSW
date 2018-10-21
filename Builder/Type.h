#pragma once
#ifndef TYPE_H
#define TYPE_H
#include <vector>
#include <string>
using namespace std;
enum Brand{TOYOTA, AUDI, FERRARI};

class Type {

public:
	Type() {
		
		pr[TOYOTA]= 10000;
		col.push_back("Toyota");
		pr[AUDI]= 15000;
		col.push_back("Audi");
		pr[FERRARI]= 20000;
		col.push_back("Ferrari");
		
	}
	int getPrice(Brand b) { return pr[b]; }
	string getPriceString(Brand b) { return col[b]; }
private:
	int pr[3];
	vector<string> col;
};

#endif // !TYPE_H
