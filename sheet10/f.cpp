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
    vs chat(n);
    map <string, int> history;
    for (int i = 0 ; i < n; i++) cin >> chat[i];
    while (n--) {
        if (history[chat[n]] == 0)
        {
            cout << chat[n] << el;
            history[chat[n]]++;
        }
    }
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}