#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        std::vector<long long> num;
        int temp, size;
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            num.push_back(temp);
        }

        sort(num.begin(), num.end());
        if (size == 1 && num[0] == 1)
            cout << "YES" << '\n';
        else if (size == 1 && num[0] != 1)
            cout << "NO" << '\n';
        else if ((num[size - 1] - num[size - 2]) <= 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}