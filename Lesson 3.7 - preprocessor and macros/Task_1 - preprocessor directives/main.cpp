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
#error Необходимо определить MODE
#endif // !MODE

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1
	int a, b;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Ведите число 2: ";
	std::cin >> b;
	std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif // MODE == 0

}