#include <iostream>
#include "Figure.h"

void Figure::print() {
	std::cout << name << " (�������: " << sides_count << ") �������" << std::endl << std::endl;
}

bool Figure::check() {
	if (sides_count == 0)
		return true;
	else return false;
};

