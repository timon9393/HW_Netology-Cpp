#pragma once
#include <iostream>
#include "Race.h"

class MyException : public std::domain_error
{
public:
	MyException(const char* msg);
};