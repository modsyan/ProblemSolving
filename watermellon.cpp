#include <iostream>

int main() {
    int weight;
    bool result = 0;
    std::cin >> weight;
    if (weight % 2 == 0)
        for (int i = 1; i < weight; i++)
            if ((weight - i) % 2 == 0 && i % 2 == 0)
            {
                result = 1;
                break;
            }
    result == true ? std::cout << "YES"
                        : std::cout <<  "NO";
}
