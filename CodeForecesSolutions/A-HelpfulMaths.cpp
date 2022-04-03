#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::sort;
using std::stoi;
using std::string;
using std::vector;

int main()
{
    string strNumbers;
    cin >> strNumbers;
    vector<int> numbers;
    for (int i = 0; i < strNumbers.size(); i += 2)
        numbers.push_back(stoi(strNumbers[i]));
    sort(numbers.begin(), numbers.end());
    cout << numbers.at(0);
    for (int i = 1; i < numbers.size(); i++)
        cout << "+" << numbers.at(i);
    cout << std::endl;
}