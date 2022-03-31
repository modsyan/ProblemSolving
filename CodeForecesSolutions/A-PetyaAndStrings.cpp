#include <iostream>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    int result =  s1.compare(s2);
    if (result > 0)
        std::cout << 0;
    else if (result > 0)
        std::cout << -1;
    else
        std::cout << 0;
}