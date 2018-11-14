#pragma once
#ifndef FILESELECTION_H
#define FILESELECTION_H
#include "Dialogbox.h"

class FileSelection : public Dialogbox {

public:
	FileSelection(Icon *first, Icon *second, Icon *third) : Dialogbox(100, 100,100)	{
		_icons[0] = first;
		_icons[1] = second;
		_icons[2] = third;
	}
	void draw()	{
		cout << "drawing FileSelection:" << endl;
		for (int i = 0; i < 3; i++)
			(*_icons[i]).draw(_iconsOriginX + (i *_iconsXIncrement), _iconsOriginY);
	}

};

#endif // !FILESELECTION_H
