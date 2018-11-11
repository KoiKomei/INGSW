#pragma once
#include "Room.h"
class MagicRoom : public Room{
public:
	MagicRoom();
	~MagicRoom();
	void print() { cout << "Magic Room" << endl; }
};

