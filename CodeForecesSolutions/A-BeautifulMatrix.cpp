#include <iostream>

int main()
{
    int tmp;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++){
            std::cin >> tmp;
            if (tmp == 1)
                std::cout << abs(2 - i) + abs(2 - j);
    }
}