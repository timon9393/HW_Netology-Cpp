#include <iostream>
#include "Quadrangle.h"

namespace Figures
{
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
		name = "��������������";
	}

	void Quadrangle::print()
	{
		std::cout << get_name() << ":" << std::endl;
		std::cout << "�������: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
		std::cout << "����: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl << std::endl;
	}

	int Quadrangle::get_a() { return a; }
	int Quadrangle::get_b() { return b; }
	int Quadrangle::get_c() { return c; }
	int Quadrangle::get_d() { return d; }
	int Quadrangle::get_A() { return A; }
	int Quadrangle::get_B() { return B; }
	int Quadrangle::get_C() { return C; }
	int Quadrangle::get_D() { return D; }
}
