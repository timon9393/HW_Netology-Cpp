#include <iostream>
#include <Windows.h>
#include "class.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string manual;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� '��' ��� '���': ";
	std::cin >> manual;

	if (manual == "��" || manual == "��")
	{
		int start;
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> start;
		Counter num(start);
		num.count();
	}
	else
	{
		Counter num;
		num.count();
	}

	std::cout << "�� ��������!" << std::endl;
}