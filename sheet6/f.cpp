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
    int n, min_now, max_now, cnt = 0;
    cin >> n;
    vi lp(n);
    For(0, n) cin >> lp[i];
    min_now = max_now = lp[0];
    For(0, n)
    {
        if(min_now > lp[i])
        {
            cnt++;
            min_now = lp[i];
        }
        if (max_now < lp[i])
        {
            cnt++; 
            max_now = lp[i];
        }
    }
    cout << cnt;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}