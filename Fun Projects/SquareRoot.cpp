#include "MorningStar.h"

auto most::Q_sqrt(float number) -> float
{
    long i;
    float x2, y;

    x2 = number * 0.5F;
    y = number;
    i = *(long*)&y;
    i = 0x5F3759DF - (i >> 1);
    y = *(float*)&i;
    y = y * (1.5F - (x2 * y * y));

    return std::pow(y, (-1));
}