#pragma once
#include <iostream>


#ifndef DYNLIB_EXPORTS
#define BYELIBRARY_API __declspec(dllexport)
#else
#define BYELIBRARY_API __declspec(dllimport)
#endif // !DYN_LIB_EXPORTS

namespace DynamicBye
{
	class BYELIBRARY_API Leaver
	{
	public:
		std::string leave(std::string& name);
	};
}
