#pragma once
#include "Parallelogram.h"
#ifdef FIGUREDLL_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // !FIGUREDLL_EXPORTS

namespace Figures
{
	class FIGURELIBRARY_API Rombus : public Parallelogram
	{
	public:
		Rombus(int a, int A, int B);
	};
}