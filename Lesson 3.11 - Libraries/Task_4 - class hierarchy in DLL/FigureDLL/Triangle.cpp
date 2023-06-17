#include <iostream>
#include "Triangle.h"

namespace Figures
{
	Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		name = "Треугольник";
	}
	void Triangle::print()
	{
		std::cout << get_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
		std::cout << "Углы: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl << std::endl;
	}
	int Triangle::get_a() { return a; }
	int Triangle::get_b() { return b; }
	int Triangle::get_c() { return c; }
	int Triangle::get_A() { return A; }
	int Triangle::get_B() { return B; }
	int Triangle::get_C() { return C; }
}
