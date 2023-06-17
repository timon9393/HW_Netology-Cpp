#pragma once
#include "Figure.h"
#ifndef CMAKEFIGUREDLL_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif // !FIGUREDLL_EXPORTS

namespace Figures
{
	FIGURELIBRARY_API void print_info(Figure* info);
}
