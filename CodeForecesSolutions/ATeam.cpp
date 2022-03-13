#include <iostream>

int main() {
    int n, counter = 0;
    bool player1, player2, player3;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> player1 >> player2 >> player3;
        if ((player1 && player2 )|| (player1 && player3 ) || (player2 && player3))
            counter++;
    }
    std::cout << counter;
}