#pragma once
#ifndef LEAF_H
#define LEAF_H

#include "Component.h"

class Leaf :public Component {

public: 
	Leaf(int val) {
		value = val;
	}

	void traverse() {
		cout << value << ' ';
	}

private:
	int value;

};

#endif // !LEAF_H
