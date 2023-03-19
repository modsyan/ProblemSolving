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

void swapBoo(int &x, int&y) {
    int tmp = x;
    x = y;
    y = tmp;
}

void solve()
{
    vi cub(4, 0);
    int boo = 0; cin >> boo;
    if (boo < 4) 
        cub[boo] = 1;
    for (int i = 1; i <= 3; i++)
    {
        int x, y; cin >> x >> y;
        swapBoo(cub[x], cub[y]);
    }
    for (int i = 1; i <= 3; i++) if(cub[i] == 1) cout << i << nl;
}

//---> Main <---//:
int main()
{
    // FASTIO
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    // testloop
    solve();
    return 0;
}