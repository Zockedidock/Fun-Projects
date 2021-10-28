#include "MorningStar.h"

auto most::getPandigitalNums(int base) -> std::vector<long int>
{
    std::vector<long int> res;
    
    for (long int b = 1; b <= base; b++)
    {
        int d = b + 2;

        long int term0 = pow(b, b - 1) + d * pow(b, b - 1 - d);

        long int term1 = ((pow(b, b) - b) / pow(b - 1, 2) + (b - 1.0) * pow(b, b - 2) - 1);

        term1 < 0 
            ? res.push_back(0)
            : res.push_back(term1);
    }

    return res;
}