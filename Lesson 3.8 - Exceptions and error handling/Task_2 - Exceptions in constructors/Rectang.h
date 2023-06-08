#pragma once
#include "Parallelogram.h"

class Rectang : public Parallelogram
{
public:
	Rectang(int a, int b);
	bool check() override;
};