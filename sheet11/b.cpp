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
    int ps, n; cin >> ps >> n;
    multiset<pair<int,int>> dragons;
    For(0, n) {
        int tmp, bns; cin >> tmp >> bns;
        dragons.insert({tmp, bns});
    }    
    for(auto it = dragons.begin(); it != dragons.end(); it++)
    {
        int drgnw = it->first;
        if (ps-drgnw<=0)
        { ps -= drgnw; break;}
        else
            ps += it->second;
    }
    cout << (ps>0?"YES":"NO") << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}