#pragma once
#include "Parallelogram.h"

class Square : public Parallelogram
{
public:
	Square(int a);
	bool check() override;
};