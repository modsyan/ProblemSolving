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
    int n, r, cnt = 0; cin >> n >> r;
    set<int, greater<int>> monsters;
    For(0, n) {
        int tmp;cin >> tmp;
        monsters.insert(tmp);
    }
    for (auto it = monsters.begin(); it != monsters.end(); it++)
    {
        // if (*it-(cnt*r) <= 0) break;
        // cnt++;
        cout << *it;
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