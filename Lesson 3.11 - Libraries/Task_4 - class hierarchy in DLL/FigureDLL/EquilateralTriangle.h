#pragma once
#include "Triangle.h"
#ifdef FIGUREDLL_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // !FIGUREDLL_EXPORTS

namespace Figures
{
	class FIGURELIBRARY_API EquilateralTriangle : public Triangle
	{
	public:
		EquilateralTriangle(int a);
	};
}