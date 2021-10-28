#include "MorningStar.h"

void most::stringToASCII(const char* string)
{
	long int temp[sizeof(string) + 1];
	for (int i = 0; i < sizeof(string); i++)
	{
		temp[i] = string[i];
		std::cout << std::hex << temp[i];
	}
	temp[sizeof(string)] = 0;
	std::cout << std::hex << temp[sizeof(string)] << std::endl;
}