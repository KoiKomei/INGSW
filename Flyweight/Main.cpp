#include "CommitTransiction.h"
#include "FileSelection.h"
#include "FlyweightFactory.h"

int main() {

	Dialogbox *dialogs[2];

	dialogs[0] = new FileSelection(FlyweightFactory::getIcon("go"), FlyweightFactory::getIcon("stop"), FlyweightFactory::getIcon("select"));
	//dialogs[1] = new CommitTransiction(FlyweightFactory::getIcon("select"),	FlyweightFactory::getIcon("stop"), FlyweightFactory::getIcon("undo"));
	(*dialogs[0]).draw();
	//(*dialogs[1]).draw();
	FlyweightFactory::reportTheIcons();

	return 0;
}

