#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::string username; std::cin >> username;
    std::vector<char> distinctChar;
    std::vector<char>::iterator it;
    int counter = 0;
    for (int i = 0; i < username.length(); i++)
    {
        it = std::find(std::begin(distinctChar), std::end(distinctChar), username[i]);
        if (it == std::end(distinctChar))
        {
            distinctChar.push_back(username[i]);
            counter++;
        }
    }
    counter % 2 == 0 ? std::cout << "CHAT WITH HER!"
                     : std::cout << "IGNORE HIM!";
}