#include "MyException.h"
#include <iostream>

MyException::MyException(const char* msg):domain_error(msg){}
