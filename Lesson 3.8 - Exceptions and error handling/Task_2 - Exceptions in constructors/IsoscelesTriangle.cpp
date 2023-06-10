#include <iostream>
#include "IsoscelesTriangle.h"
#include "MyException.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
{
	name = "Равнобедренный треугольник";
	check();
}

bool IsoscelesTriangle::check()
{
	if (a != c) {
		throw MyException("сторона \"а\" не равна стороне \"с\"");
		return false;
	}
	else if (A != C) {
		throw MyException("угол \"А\" не равен углу \"С\"");
		return false;
	}else return true;
}