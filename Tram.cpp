#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() 
{
    int n, tempIn, tempOut, min_cap = 0, inside_now = 0;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> tempOut >> tempIn;
        inside_now += tempIn - tempOut;
        if (inside_now > min_cap)
            min_cap = inside_now;
    }
    cout << min_cap;
}


