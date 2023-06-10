#include <iostream>
#include "Triangle.h"
#include "MyException.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	name = "Треугольник";
	sides_count = 3;
	check();
}
void Triangle::print()
{
	std::cout << name << " (Стороны: " << a << ", " << b << ", " << c << "; Углы: " << A << ", " << B << ", " << C << ") создан" << std::endl << std::endl;
}

bool Triangle::check()
{
	if (sides_count != 3) {
		throw MyException("количество сторон не равно 3!");
		return false;
	}
	else if (A + B + C != 180) {
		throw MyException("сумма углов не равна 180 градусов!");
		return false;
	}
	else return true;
}