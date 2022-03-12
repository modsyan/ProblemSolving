#include <iostream>

int main()
{
    int sqrN, sqrM, flgstnA, rslt, counter = 0;
    std::cin >> sqrN >> sqrM >> flgstnA;

    rslt = (sqrN * sqrM) / 2;

    for (int i = 0; i < 2; i++)
    {
        int tmp = rslt;
        while (tmp > 0)
        {
            tmp -= flgstnA;
            counter++;
        }
        if (tmp != 0 && tmp )
    }