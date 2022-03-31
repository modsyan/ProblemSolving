#include <iostream>

int main()
{
    bool x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 && y1) || (x2 && y2))
        std::cout << 1;
    else
        std::cout << -1;
}