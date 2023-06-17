#include "EquilateralTriangle.h"
#include <iostream>

namespace Figures
{
	EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60)
	{
		name = "Равносторонний треугольник";
	}
}
