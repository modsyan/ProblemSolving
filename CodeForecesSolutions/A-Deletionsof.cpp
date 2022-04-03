#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    std::string str;
    char chr;

    for (int i = 0; i < t; i++)
    {
        std::cin >> str >> chr;
        int fnd = str.find(chr);
        std::string copy(str);
        std::reverse(copy.begin(), copy.end());
        int rFnd = copy.find(chr);

        if ((fnd % 2 == 0) || (rFnd % 2 ==0))
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }
}
