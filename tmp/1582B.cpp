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
#define el '\n'
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vd vector<double>
#define vii vector<pair<int, int>>
#define vsi vector<pair<stirng, int>>
 
void solve()
{
    ll n; cin >> n;
    ll ones = 0, zeros = 0;
    for (ll i = 0; i < n; i ++)
    {
        ll tmp;
        cin >> tmp;
        if (tmp == 1)
            ones ++;
        else if (tmp == 0)
            zeros++;
    }
    if (ones != 0)
        cout << ones * ((ll)pow(2, zeros)) << el;
    else
        cout << 0 << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    testloop
    solve();
    return 0;
}