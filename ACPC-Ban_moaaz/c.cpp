#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, r; cin >> c >> r;
    char arr[c][r];
    for (int i = 0; i < c; i++)
    {
        cin >> arr[i]; 
    }
    int result = r*c;
    for (int i =0; i< c; i++)
    {
        for (int j = 0; j< r; j++)
        {
            if (arr[i][j] == 'S')
                result-=r;
            if (arr[j][i] == 'S')
                result-=c;
        }
    }
    cout << result;
}