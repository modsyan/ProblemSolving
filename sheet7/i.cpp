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
#define el '\n'
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vd vector<double>
#define vii vector<pair<int, int>>
#define vsi vector<pair<stirng, int>>
 
int arr[110];
void solve()
{
    int n, d; cin >> n >> d;
    For(i, 0, n) cin >> arr[i];
    sort(arr, arr+n);
    if (arr[n-1] <= d)
        cout << "Yes" << el;
    else if ((arr[0] + arr[1]) <= d)
        cout << "Yes" << el;
    else
        cout << "No" << el; 
}
 
//---> Main <---//
int main()
{
    FASTIO
    testloop
    solve();
    return 0;
}