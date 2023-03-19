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
    int x, y, cnt = 0; cin >> x >> y;
    map<int, int> mp;
    For(0, x+y)
    {
        int tmp; cin >> tmp;
        if (mp[tmp]!=0)
            cnt++; 
        mp[tmp]++;
    }
    cout << cnt << el;
}

//---> Main <---//
int main()
{
    FASTIO
    testloop
    solve();
    return 0;
}