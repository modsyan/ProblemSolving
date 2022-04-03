#include <iostream>

int main()
{
    int t, a, b, result;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b;
        result = a + b * 2;
        if (a == 0)
            std::cout << 1 << std::endl;
        else
            std::cout << result + 1 << std::endl;
    }
}