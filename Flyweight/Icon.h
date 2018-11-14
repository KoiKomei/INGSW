#pragma once
#ifndef ICON_H
#define ICON_H
#include <iostream>
#include <string>
using namespace std;
class Icon {

public:
	Icon(const char *fileName) {
		strcpy_s(_name, fileName);
		if (!strcmp(fileName, "go"))
			{
				_width = 20;
				_height = 20;
		}
		if (!strcmp(fileName, "stop"))
		{
			_width = 40;
			_height = 40;
		}
		if (!strcmp(fileName, "select"))
		{
			_width = 60;
			_height = 60;
		}
		if (!strcmp(fileName, "undo"))
		{
			_width = 30;
			_height = 30;
		}
	}

	 const char *getName() {
		return _name;
	}

	void draw(int x, int y) {
		cout << "   drawing " << _name << ": upper left (" << x << "," << y <<") - lower right (" << x + _width << "," << y + _height << ")" <<	endl;
	}

private:
	char _name[20];
	int _width;
	int _height;
};
#endif // !ICON_H
