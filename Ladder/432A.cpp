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
    int n, k, tmp; cin >> n >> k;
    vi st;
    For(i, 0, n) {
        cin >> tmp;
        if (5-tmp >= k) st.push_back(tmp);
    }
    cout << st.size()/3 << nl;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}