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
    int n, tmp;
    cin >> n;
    int evenCnt = 0, oddCnt = 0, evenIndex, oddIndex;
    for (int i = 1; i <= n; i++) 
    {
        int tmp; cin >> tmp;
        if (tmp & 1) { oddCnt++; oddIndex = i; }
        else { evenCnt++; evenIndex = i; }
    }
    cout << (evenCnt > oddCnt ? oddIndex: evenIndex) << nl;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}