#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTIO                         \
	ios_base::sync_with_stdio(false);  \
	cin.tie(nullptr);                  \
	cout.tie(nullptr); 
#define For(i, start, end) for(int i = start; i < end; i++)
#define testloop int t;cin >> t;while (t--)
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
    int n, k; cin >> n >> k;
    int f, t, ans= -INT_MAX, joy;
    for (int i = 0; i < n; i ++) {
        cin >> f >> t;
        joy = f;
        if (t > k) 
            joy = f - (t-k);
        ans = max(ans, joy);
    }
    cout << ans << nl;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}