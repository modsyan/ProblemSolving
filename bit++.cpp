#include <iostream>
#include <string>

int main()
{
    int n, count = 0;
    std::cin >> n;
    std::string X[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> X[i];
        if (X[i].find("++") !=  std::string::npos)
            count++;
        else
            count--;
    }
    std::cout << count;
}