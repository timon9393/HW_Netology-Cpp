#include <iostream>
#include "greeter.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	greeter::Greeter hello;
	std::string name;
	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << hello.greet(name) << std::endl;
}