#pragma once
#ifndef COMMITTRANSICTION_H
#define COMMITTRANSICTION_H

#include "Dialogbox.h"

class CommitTransiction : public Dialogbox {
public:
	CommitTransiction(Icon *first, Icon *second, Icon *third) : Dialogbox(150,150, 150)	{
		_icons[0] = first;
		_icons[1] = second;
		_icons[2] = third;
	}
	void draw()	{
		cout << "drawing CommitTransiction:" << endl;
		for (int i = 0; i < 3; i++)
			_icons[i]->draw(_iconsOriginX + (i *_iconsXIncrement), _iconsOriginY);
	}



};

#endif // !COMMITTRANSICTION_H
