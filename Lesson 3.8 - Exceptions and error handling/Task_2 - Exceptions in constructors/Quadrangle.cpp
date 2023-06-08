#include <iostream>
#include "Quadrangle.h"
#include "MyException.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	sides_count = 4;
	name = "Четырёхугольник";
}

bool Quadrangle::check()
{
	if (sides_count != 4) {
		throw MyException("количество сторон не равно 4!");
		return false;
	}
	else if (A + B + C + D != 360) {
		throw MyException("сумма углов не равна 360 градусов!");
		return false;
	}
	else return true;
}

void Quadrangle::print()
{
	try
	{
		check();
		std::cout << name << " (Стороны: " << a << ", " << b << ", " << c << ", " << d << "; Углы: " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl << std::endl;
	}
	catch (const MyException& ex)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << std::endl << std::endl;
	}
}