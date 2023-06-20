#pragma once
#include <iostream>

namespace Figures
{
	class Figure {
	public:
		virtual void print();
		std::string get_name();

	protected:
		std::string name = "Фигура";
	};
}