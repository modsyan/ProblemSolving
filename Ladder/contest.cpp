#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTIO                         \
	ios_base::sync_with_stdio(false);  \
	cin.tie(nullptr);                  \
	cout.tie(nullptr); 
#define For(start, end) for(int i = start; i < end; i++)
#define testloop int t;cin >> t;while (t--)
//// --> ... ALIASES ... -->
#define nl '\n'
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vd vector<double>
#define vii vector<pair<int, int>>
#define vsi vector<pair<stirng, int>>

string to_binary(int x, int sysType) {
    string res = "";
    for(int i = sysType-1; i >= 0; i--)
        res += (((x>>i)&1) + '0');
    // while(x > 0) res += ((x /=2) == 0? '0': '1');
    return res;
}

void solve()
{
    cout << to_binary(2, 64) << nl;
}

//---> Main <---//
int main()
{
    // FASTIO
    solve();
    return 0;
}