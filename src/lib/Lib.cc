#include <iostream>

#include "Lib.hh"

void Lib::foo() {
	std::cout << "Lib::foo() called\n";
}

int Lib::goo() {
	return 42;
}
