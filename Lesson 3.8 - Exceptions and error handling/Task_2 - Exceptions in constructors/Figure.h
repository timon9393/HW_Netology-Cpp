#pragma once
#include <iostream>
class Figure {
public:
	virtual void print();
	virtual bool check();

protected:
	int sides_count = 0;
	std::string name = "Фигура";
};