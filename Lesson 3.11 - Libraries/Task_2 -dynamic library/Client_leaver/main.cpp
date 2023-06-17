#include "dyn_bye.h"
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	DynamicBye::Leaver hello;
	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << hello.leave(name) << std::endl;
}