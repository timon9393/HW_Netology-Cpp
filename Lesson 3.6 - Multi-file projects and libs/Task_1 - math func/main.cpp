#include <iostream>
#include <Windows.h>
#include "math.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, action;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	

	do
	{
		std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
		std::cin >> action;
		switch (action)
		{
		case 1:
			std::cout << a << " плюс " << b << " = " << summ(a, b) << std::endl;
			break;
		case 2:
			std::cout << a << " минус " << b << " = " << sub(a, b) << std::endl;
			break;
		case 3:
			std::cout << a << " умножить на " << b << " = " << mult(a, b) << std::endl;
			break;
		case 4:
			std::cout << a << " разделить на " << b << " = " << divide(a, b) << std::endl;
			break;
		case 5:
			std::cout << a << " в степени " << b << " = " << exp(a, b) << std::endl;
			break;
		default:
			std::cout << "Ошибка! Укажите корректную операцию." << std::endl;
			break;
		}
	} while (!(action < 6 && action > 0));
	

}