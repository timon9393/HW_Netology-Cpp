#include <iostream>
#include <Windows.h>
#include "class.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string manual;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите 'да' или 'нет': ";
	std::cin >> manual;

	if (manual == "да" || manual == "Да")
	{
		int start;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> start;
		Counter num(start);
		num.count();
	}
	else
	{
		Counter num;
		num.count();
	}

	std::cout << "До свидания!" << std::endl;
}