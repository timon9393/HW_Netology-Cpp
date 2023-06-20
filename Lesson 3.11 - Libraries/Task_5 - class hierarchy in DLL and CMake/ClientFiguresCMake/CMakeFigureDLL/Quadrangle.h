#pragma once
#include "Figure.h"

namespace Figures
{
	class Quadrangle : public Figure
	{
	public:
		Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
		void print() override;
		int get_a();
		int get_b();
		int get_c();
		int get_d();
		int get_A();
		int get_B();
		int get_C();
		int get_D();

	protected:
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		int A = 0;
		int B = 0;
		int C = 0;
		int D = 0;
	};
}

