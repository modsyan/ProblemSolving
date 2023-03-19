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
    int n; cin >> n;
    set<int, greater<int>> st;
    int p; cin >> p;
    For(i, 0, p) {
        int tmp; cin >> tmp;
        st.insert(tmp);
    }
    int q; cin >> q;
    For(i, 0, q) {
        int tmp; cin >> tmp;
        st.insert(tmp);
    }
    // for (auto c: st) if (n-- != c) flag = 0;
    
    cout << (st.size() == n?"I become the guy.": "Oh, my keyboard!") << nl;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}