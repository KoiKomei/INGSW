#include "Adapter.h"
#include "vld.h"
int main() {
	Rectangle *r = new Adapter(10, 20, 20, 30);
	(*r).draw();
	delete r;
	return 0;
}