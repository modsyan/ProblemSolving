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
    int n, k, x, time = 0;
    cin >> n >> k >> x;
    vi arr(n);
    For(0,n) cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<>());
    For(0,k) arr[i] = x;
    For(0,n) time += arr[i];
    cout << time;
 
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}