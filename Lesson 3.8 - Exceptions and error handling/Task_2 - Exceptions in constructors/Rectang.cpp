#include <iostream>
#include "Rectang.h"
#include "MyException.h"

Rectang::Rectang(int a, int b) : Parallelogram(a, b, 90, 90)
{
	name = "Прямоугольник";
}

bool Rectang::check()
{
	if (a != c || b != d) {
		throw MyException("стороны \"а\", \"c\" и \"b\", \"d\" попарно не равны!");
		return false;
	}
	else if (!(A == B && B == C && C == D && D == 90)) {
		throw MyException("все углы не равны 90 градусов");
		return false;
	}
	else if (!Quadrangle::check())
		return false;
	else return true;
}