#include "Borderdecorator.h"
#include "Scrolldecorator.h"
int main() {
	Widget *widget = new Borderdecorator(new Borderdecorator(new Scrolldecorator(new TextField(80, 24))));
	(*widget).draw();
	return 0;
}