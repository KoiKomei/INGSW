#include "Singleton.h"
#include <iostream>
using namespace std;
int main() {
	
	cout << Singleton::getInstance()->metodo();

	return 0;
}