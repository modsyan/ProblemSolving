#include <iostream>
#include <cctype>

int main()
{
    const char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.length(); i++)
    {

        bool valid = true;
        for (int j = 0; j < 6; j++)
            if ((char)std::tolower(s[i]) == vowels[j])
                valid = false;
        if (valid)
            std::cout << "." << (char)std::tolower(s[i]);
    }
    return 0;
}