#pragma once
#include <iostream>


#ifdef DYNLIB_EXPORTS
#define BYELIBRARY_API __declspec(dllexport)
#else
#define BYELIBRARY_API __declspec(dllimport)
#endif // !DYN_LIB_EXPORTS

namespace DynamicBye
{
	class Leaver
	{
	public:
		BYELIBRARY_API std::string leave(std::string& name);
	};
}
