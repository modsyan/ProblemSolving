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
    int n, m;
    cin >> n >>m;
    vi arr(m);
    For(0, m) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int mn_dff = arr[n-1] - arr[0];
    for (int i = 0; i < m - n; i++)
    {
        int tmp_dff = arr[n+i] - arr[i]; 
        if (mn_dff > tmp_dff)
            mn_dff = tmp_dff; 
    }
    cout << mn_dff << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}