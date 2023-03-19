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
    // vi out(n), out(n);
    int in_now = 0, max = 0;
    For(0, n)
    {
        int a, b;
        cin >> a >> b;
        in_now += b;
        in_now -= a;
        if (in_now > max)
            max = in_now;
    }
    cout << max << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}