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
    int k = sqrt(n);
    while((k*(k+1)/2) < n) k++;
    
    for (int i = 0; i < k; i++) {
        for (int j = k/2; j < k; j++)
        {
            if ((i*(i+1)/2) + (j*(j+1)/2) == n)
            {
                cout << "YES" << nl;
                return;
            }
        }
    }
    cout << "NO" << nl;
    return;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}