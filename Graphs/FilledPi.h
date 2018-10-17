#pragma once
#ifndef FILLEDPI_H
#define FILLEDPI_H
#include "Graph.h"
#include <vector>
class FilledPi :public Graph {
		
	void print() {
		vector<char> d;
		d.push_back('*');
		d.push_back('@');
		d.push_back('+');
		d.push_back('$');
		d.push_back('#');
		d.push_back('%');
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "-";
		}
		
		int b = 100;
		for (int i = 0; i < 6; i++) {
			int c = a[i];
			
			while (c > 0) {
				if (b % 10 == 0) {
					cout << "|";
				}
				b--;
				if (b % 10 == 9) {
					
					cout << endl;
					cout << "|";
				}
				
				
				cout << d[i];
				c--;
			}

		}
		cout << "|";
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "-";
		}
	}

};
#endif // !FILLEDPI_H


