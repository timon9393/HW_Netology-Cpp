#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B);
	bool check() override;
};