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
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dfx = 0, dfy = 0;
    if (x1 == x2) dfx = abs(y1 - y2);
    else if(y1 == y2) dfy = abs(x1 - x2);
    else if (abs(x1-x2) != abs(y1-y2)) {
        cout << -1 << nl; return;
    }
    else swap(y1, y2); 
    cout << x1+dfx << " " << y1+dfy << " " << x2+dfx <<  " " << y2+dfy << nl;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}