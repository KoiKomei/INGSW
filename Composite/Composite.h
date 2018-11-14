#pragma once
#ifndef COMPOSITE_H
#define COMPOSITE_H
#include <vector>
#include "Component.h"

class Composite : public Component {


public:

	void add(Component *element) {
		(child).push_back(element);
	}

	void traverse() {
		for (int i = 0; i < child.size(); i++) {
			(*child[i]).traverse();
		}
	}

private:	
	vector<Component*> child;
};

#endif // !COMPOSITE_H
