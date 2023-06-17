#pragma once
#include <iostream>
#ifndef CMAKEFIGUREDLL_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // !FIGUREDLL_EXPORTS

namespace Figures
{
	class FIGURELIBRARY_API Figure {
	public:
		virtual void print();
		std::string get_name();

	protected:
		std::string name = "Фигура";
	};
}