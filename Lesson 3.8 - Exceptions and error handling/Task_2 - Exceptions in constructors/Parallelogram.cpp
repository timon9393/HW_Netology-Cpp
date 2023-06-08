#include <iostream>
#include "Parallelogram.h"
#include "MyException.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B)
{
	name = "��������������";
}
bool Parallelogram::check()
{
	if (a != c || b != d) {
		throw MyException("������� \"�\", \"c\" � \"b\", \"d\" ������� �� �����!");
		return false;
	}
	else if (A != C || B != D) {
		throw MyException("���� \"�\", \"C\" � \"B\", \"D\" ������� �� �����!");
		return false;
	}
	else if (!Quadrangle::check())
		return false;
	else return true;
}