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
    int n; cin >> n; vi coin(n);
    int sum = 0, cnt = 0;
    For(i, 0, n) {
        cin >> coin[i]; sum += coin[i];
    }
    sort(coin.begin(), coin.end());
    sum/=2;
    for (int i = n-1; i >= 0 && sum >= 0; i--, cnt++) sum -= coin[i];
    cout << cnt << nl;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}