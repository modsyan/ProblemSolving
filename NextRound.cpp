#include <iostream>

int main()
{
    // the code here is so so bad but im lazy now
    bool scoresAreEqual = 1;
    int n, minScore, counter = 0;

    std::cin >> n >> minScore;
    int contestants[n];
    for (int i = 0; i < n; i++)
        std::cin >> contestants[i];

            // if (contestants[i] != contestants[j] || contestants[i] == 0)
    for (int i = 0; i <= n - 1; i++)
    {
        if (n == minScore){
            counter = n;
            break;
        }

        if (contestants[i] > minScore && contestants[i] > contestants[i+1])
                counter++;
    }
    std::cout << counter;
}