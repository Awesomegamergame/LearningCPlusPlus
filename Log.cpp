#include "Common.h"
#include "Log.h"

#include <iostream>

void InitLog()
{
	Log("Started Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}