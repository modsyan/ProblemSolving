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
    int n, dur;
    cin >> n >> dur;
    ll sum = (n-1) * 10;
    int totalSong = 0;
    while (n--)
    {
        int song; cin >> song;
        sum += song;
        totalSong += song;
    }
    if (sum > dur) cout << -1 << nl;
    else cout << (dur-totalSong)/5 << nl;
    
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}