#include "Exception.h"
#include <iostream>

MyException::MyException(const char* msg) : domain_error(msg) {}