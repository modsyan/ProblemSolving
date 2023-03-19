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
    int n; cin >> n;
    string mov; cin >> mov;
    vi par(n); 
    For(0, n) cin >> par[i]; 
    int time = 1e9; 
    for (int i = 0 ; i < n - 1; i ++)
        if (mov[i] == 'R' && mov[i+1] == 'L')
            time = min(time, (par[i+1] - par[i])/2);
    if (time == 1e9) cout << -1 << el;
    else cout << time << el;
}

 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}