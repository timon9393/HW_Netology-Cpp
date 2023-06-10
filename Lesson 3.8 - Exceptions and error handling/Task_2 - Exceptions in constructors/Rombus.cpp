#include <iostream>
#include "Rombus.h"
#include "MyException.h"

Rombus::Rombus(int a, int A, int B) : Parallelogram(a, a, A, B)
{
	name = "Ромб";
	check();
}

bool Rombus::check()
{
	if (!(a == b && b == c && c == d)) {
		throw MyException("не все стороны равны!");
		return false;
	}
	else if (A != C || B != D) {
		throw MyException("углы \"А\", \"C\" и \"B\", \"D\" попарно не равны!");
		return false;
	}else return true;
}