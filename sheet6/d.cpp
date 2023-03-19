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
    ll n, m;
    cin >> n >> m;
    ll sum1z = 0, sum2z = 0, cnt = 0;
    vector<pair<ll, ll>> arr(n);    
    vi diffs(n);
    for (int i =0 ; i < n; i ++)
    {
        cin >> arr[i].first >> arr[i].second;
        diffs[i] = (abs(arr[i].first-arr[i].second));
        sum1z += arr[i].first;
        sum2z += arr[i].second;
    }
    sort(diffs.begin(), diffs.end(), greater<>());
    if (sum2z > m)
        cout << -1;
    else {
        for (int i = 0; i < n; i++)
        {
            if (sum1z > m)
            {
                sum1z -= diffs[i];
                cnt++;
            }
        }
        cout << cnt;
    }
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}