#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define For(i, start, end) for (int i = start; i < end; i++)
#define testloop \
    int t;       \
    cin >> t;    \
    while (t--)
//// --> ... ALIASES ... -->
#define nl '\n'
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vd vector<double>
#define vii vector<pair<int, int>>
#define vsi vector<pair<stirng, int>>

void solve()
{
    // string c; cin >> c;
    // for (int i = 0; i < (c.size()/2)+1; i++) {
    //     cout << c[i] << " " << c[c.size()-i-1] << nl;
    // }
    map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    cout << roman['C'];
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}