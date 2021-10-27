#include "MorningStar.h"

auto most::getPandigitalNums(int base) -> std::vector<long int>
{
    std::vector<long int> res;
    
    for (long int b = 1; b <= base; b++)
    {
        int d = b + 2;

        long int temp0 = pow(b, b - 1) + d * pow(b, b - 1 - d);

        long int temp1 = ((pow(b, b) - b) / pow(b - 1, 2) + (b - 1) * pow(b, b - 2) - 1);

        long int temp2 = temp1 - temp0;

        temp2 < 0 
            ? res.push_back(0)
            : res.push_back(temp2);
    }

    return res;
}