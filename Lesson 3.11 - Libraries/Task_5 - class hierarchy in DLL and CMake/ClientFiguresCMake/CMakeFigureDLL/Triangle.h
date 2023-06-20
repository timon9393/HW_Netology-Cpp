#pragma once
#include <iostream>
#include "Figure.h"

namespace Figures
{
	class Triangle : public Figure {
	public:
		Triangle(int a, int b, int c, int A, int B, int C);
		void print() override;
		int get_a();
		int get_b();
		int get_c();
		int get_A();
		int get_B();
		int get_C();

	protected:
		int a = 0;
		int b = 0;
		int c = 0;
		int A = 0;
		int B = 0;
		int C = 0;
	};
}
