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
    ll num; cin >> num;
    string n = to_string(num);
    if(num < 0) {
        char lD = n[n.size()-1], lLD = n[n.size()-2];
        if(lD < lLD) {
            n[n.size()-1] = lLD;
            n[n.size()-2] = lD;
        }
        n.pop_back();
    }
    
    cout << stoi(n) << nl;
    
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}