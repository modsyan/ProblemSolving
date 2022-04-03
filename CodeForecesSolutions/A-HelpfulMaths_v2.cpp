#include <iostream>
#include <string>
#include <sstream>


using std::cin;
using std::cout;
using std::istringstream;
using std::string;
using std::stringstream;
int main()
{
    string inputString;
    cin >> inputString;
    stringstream obj;
    int numbers[3];
    obj << inputString;
    obj >> *numbers;
    // vector<int> result;
    // for(int i = 0; i < inputString; i++) {
    //     int ascii = (int) inputString[i];
    //     if (ascii >= 48 && ascii <= 57)
    //         result.push_back(inputString[i]);
    // }
    // sort(result.begin(), result.end());
    // for (int i: result)
    //     cout << i;
    cout << *numbers;
}