#include <iostream>
#include <Windows.h>

class Calculator
{
public:

	bool set_num1(double num1)
	{
		this->num1 = num1;
		return num1 == 0 ? false : true;
	}

	bool set_num2(double num2)
	{
		this->num2 = num2;
		return num2 == 0 ? false : true;
	}

	double add()
	{
		return num1 + num2;
	}

	double multiply()
	{
		return num1 * num2;
	}

	double subtract_1_2()
	{
		return num1 - num2;
	}
	
	double subtract_2_1()
	{
		return num2 - num1;
	}

	double divide_1_2()
	{
		return num1 / num2;
	}

	double divide_2_1()
	{
		return num2 / num1;
	}
	
	void output()
	{
		std::cout << "num1 + num2 = " << add() << std::endl;
		std::cout << "num1 - num2 = " << subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << multiply() << std::endl;
		std::cout << "num1 / num2 = " << divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << divide_2_1() << std::endl << std::endl;
	}


private:
	double num1;
	double num2;
};




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double n1, n2;
	Calculator calc;
	
	while (true)
	{
		std::cout << "Введите num1: ";
		std::cin >> n1;

		while (!calc.set_num1(n1))
		{
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num1: ";
			std::cin >> n1;
		}

		std::cout << "Введите num2: ";
		std::cin >> n2;

		while (!calc.set_num2(n2))
		{
			std::cout << "Неверный ввод!" << std::endl;
			std::cout << "Введите num2: ";
			std::cin >> n2;
		}

		calc.output();
	}
}