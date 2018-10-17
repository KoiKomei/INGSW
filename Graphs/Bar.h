#pragma once
#ifndef BAR_H
#define BAR_H
#include "Graph.h"

class Bar :public Graph {

	void print() {
		cout << endl;
		for (int i = 0; i < 6; i++) {
			if (a[i] < 10) {
				cout <<" "<<a[i] << "|";
			}
			else {
				cout << a[i] << "|";
			}
			int b = a[i];
			while (b != 0) {
				cout << "*";
				b--;
			}
			
			cout << endl;
		}
	
	}

};

#endif // !BAR_H
