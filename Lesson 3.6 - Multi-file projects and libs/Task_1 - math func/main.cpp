#include <iostream>
#include <Windows.h>
#include "math.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, action;
	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;
	

	do
	{
		std::cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
		std::cin >> action;
		switch (action)
		{
		case 1:
			std::cout << a << " ���� " << b << " = " << summ(a, b) << std::endl;
			break;
		case 2:
			std::cout << a << " ����� " << b << " = " << sub(a, b) << std::endl;
			break;
		case 3:
			std::cout << a << " �������� �� " << b << " = " << mult(a, b) << std::endl;
			break;
		case 4:
			std::cout << a << " ��������� �� " << b << " = " << divide(a, b) << std::endl;
			break;
		case 5:
			std::cout << a << " � ������� " << b << " = " << exp(a, b) << std::endl;
			break;
		default:
			std::cout << "������! ������� ���������� ��������." << std::endl;
			break;
		}
	} while (!(action < 6 && action > 0));
	

}