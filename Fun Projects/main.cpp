#include "MorningStar.h"

int main()
{
	char test[6] = {
		0x13,0x66,0x67,0x77,0x77
	};
	most::stringToASCII("Hallo du Depp");
	most::print(test);
	std::cin.get();

	most::print(1 / sqrt(10));
	most::print(most::Q_sqrt(10));
	/*
	int base = 10;
	std::vector<long int> nums = most::getPandigitalNums(base);
	for (auto num : nums)
	{
		std::cout << num << std::endl;
	}*/

}