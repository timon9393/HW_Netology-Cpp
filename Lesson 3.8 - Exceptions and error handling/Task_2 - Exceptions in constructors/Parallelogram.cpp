#include <iostream>
#include "Parallelogram.h"
#include "MyException.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B)
{
	name = "Параллелограмм";
}
bool Parallelogram::check()
{
	if (a != c || b != d) {
		throw MyException("стороны \"а\", \"c\" и \"b\", \"d\" попарно не равны!");
		return false;
	}
	else if (A != C || B != D) {
		throw MyException("углы \"А\", \"C\" и \"B\", \"D\" попарно не равны!");
		return false;
	}
	else if (!Quadrangle::check())
		return false;
	else return true;
}