#include <iostream>
#define ll long long int
int main()
{
    int t;
    std::cin >> t;
    int cost[t];
    for (int i = 0; i < t; i++)
    {
        cost[i] = 0;
        ll n;
        std::cin >> n;
        bool space[n];
        for (int j = 0; j < n; j++)
            std::cin >> space[j];
        for (int j = 0; j < n - 1; j++)
            if (space[j] == 0 && space[j + 1] == 0)
                cost[i] ++;
    }
    std::cout << std::endl;
    for (int i = 0; i < t; i++)
        std::cout << cost[i] << std::endl;
}