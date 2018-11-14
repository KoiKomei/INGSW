#pragma once
#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H
#include "Icon.h"
class FlyweightFactory {

public:
	static Icon *getIcon(const char *name) {
		for (int i = 0; i < _numIcons; i++) {
			if (!strcmp(name, (*_icons[i]).getName())) {
				return _icons[i];
			}
		}
		_icons[_numIcons] = new Icon(name);
		return _icons[_numIcons++];
	}

	static void reportTheIcons() {
		cout << "Active Flyweights: ";
		for (int i = 0; i < _numIcons; i++) {
			cout << (*_icons[i]).getName() << " ";
		}
		cout << endl;
			
	}

private:
	enum {
		MAX_ICONS = 5

	};
	static int _numIcons;
	static Icon *_icons[MAX_ICONS];
};

#endif // !FLYWEIGHTFACTORY_H
