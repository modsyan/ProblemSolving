#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string Words[n], tempWord;

    for (int i = 0; i < n; i++)
    {
        std::cin >> tempWord;
        if (tempWord.size() <= 10)
            Words[i] = tempWord;
        else
        {
            int counter = 0;
            for (int j = 1; j < tempWord.size() - 1; j++)
                counter++;
            Words[i] = tempWord[0] + std::to_string(counter) + tempWord[tempWord.size() - 1];
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << Words[i] << std::endl;

}