#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() {
    int num, tests;
    cin >> num >> tests;

    while (tests--) {
        if(num%10 != 0)
            num--;
        else
            num = num/10;
    }
        cout << num;
}