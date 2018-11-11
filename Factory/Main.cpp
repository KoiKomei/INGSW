#include "MagicMazeGame.h"
#include "vld.h"
int main() {

	MazeGame* magic = new MagicMazeGame();
	(*magic).print();
	delete magic;
	

	return 0;
}