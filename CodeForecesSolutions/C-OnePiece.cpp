#include <iostream>

int main()
{
    bool x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 && y1) || (x2 && y2) || (x1 && y2) || (x2 && y1))
        std::cout << 1;
    else
        std::cout << -1;
    return 0;
}