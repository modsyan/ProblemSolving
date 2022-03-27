#include <iostream>
#include <cctype>

int main()
{
    std::string s;
    std::cin >> s;
    std::cout << (char) std::toupper(s[0]) <<s.substr(1);
}