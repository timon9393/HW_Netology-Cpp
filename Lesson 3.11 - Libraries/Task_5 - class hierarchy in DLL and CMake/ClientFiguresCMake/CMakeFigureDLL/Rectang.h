#pragma once
#include "Parallelogram.h"
#ifndef CMAKEFIGUREDLL_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // !FIGUREDLL_EXPORTS

namespace Figures
{
	class FIGURELIBRARY_API Rectang : public Parallelogram
	{
	public:
		Rectang(int a, int b);
	};
}