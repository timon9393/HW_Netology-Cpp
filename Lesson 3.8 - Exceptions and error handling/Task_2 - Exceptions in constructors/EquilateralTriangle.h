#pragma once
#include "Triangle.h"

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(int a);
	bool check() override;
};