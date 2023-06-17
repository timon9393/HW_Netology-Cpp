#include "dyn_bye.h"
#include <iostream>
#include <string>

std::string DynamicBye::Leaver::leave(std::string& name)
{
	return "До свидания, " + name + "!";
}
