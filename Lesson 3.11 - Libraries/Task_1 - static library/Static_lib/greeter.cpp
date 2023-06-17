#include "greeter.h"
#include <iostream>
#include <string>

std::string greeter::Greeter::greet(std::string& name)
{
	return "Здравствуйте, " + name + "!";
}