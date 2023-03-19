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
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char mv; cin >> mv;
    int idx_mv = (mv=='R'? -1: 1); 
    string msg; cin >> msg;
    for (char c: msg)
        cout << keyboard[keyboard.find(c)+idx_mv];
    cout << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}
