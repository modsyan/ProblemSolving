#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define For(start, end) for (int i = start; i < end; i++)
#define testloop \
    int t;       \
    cin >> t;    \
    while (t--)
//// --> ... ALIASES ... -->
#define el '\n'
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vd vector<double>
#define vii vector<pair<int, int>>
#define vsi vector<pair<stirng, int>>

void solve()
{
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0 && str[i] == '9') { cout << str[0]; continue; } 
        if (str[i] >= '5') cout << (char)'9'-str[i]; 
        else cout << str[i]; 
    }
    cout << el;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}