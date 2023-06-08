#include "RightTriangle.h"
#include "MyException.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
{
	name = "Прямоугольный треугольник";
}
bool RightTriangle::check()
{
	if (C != 90) {
		throw MyException("угол С не равен 90 градусов");
		return false;
	}
	else if (!Triangle::check())
		return false;
	else return true;
}