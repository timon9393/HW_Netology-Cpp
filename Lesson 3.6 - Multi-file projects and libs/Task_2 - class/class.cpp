#include <iostream>
#include "class.h"

Counter::Counter(int start) { n = start; }

Counter::Counter() { n = 1; }

void Counter::setN(int n) { this->n = n; }

void Counter::plus() { this->n++; }

void Counter::minus() { this->n--; }

void Counter::current() { std::cout << n << std::endl; }

void Counter::count()
{
	char symbol;
	while (true)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'х'): ";
		std::cin >> symbol;
		if (symbol == 'х') break;
		switch (symbol)
		{
		case '+':
			plus();
			break;
		case '-':
			minus();
			break;
		case '=':
			current();
			break;
		default:
			std::cout << "Некорректное дейстивие! ";
			break;
		}
	}
}

