#include <iostream>
#include <Windows.h>

#define MODE 1

#if MODE == 1
int add(int a, int b) { return a + b; }
#endif // MODE == 1

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#ifndef MODE
#error ���������� ���������� MODE
#endif // !MODE

#if MODE == 0
	std::cout << "������� � ������ ����������" << std::endl;

#elif MODE == 1
	int a, b;
	std::cout << "������� � ������ ������" << std::endl;
	std::cout << "������� ����� 1: ";
	std::cin >> a;
	std::cout << "������ ����� 2: ";
	std::cin >> b;
	std::cout << "��������� ��������: " << add(a, b) << std::endl;
#else
	std::cout << "����������� �����. ���������� ������." << std::endl;
#endif // MODE == 0

}