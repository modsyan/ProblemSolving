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
    int n, tmp; cin >> n;
    vi f1, f2, f3;
    For(1, n+1) {
        cin >> tmp;
        if (tmp == 1){
            f1.push_back(i);
        }
        else if (tmp == 2) {
            f2.push_back(i);
        }
        else {
            f3.push_back(i);
        }
    }
    int min_teams = min({f1.size(), f2.size(), f3.size()});
    cout << min_teams << el;
    if (!min_teams)
        return;
    for (int i = min_teams-1; i >= 0; i--) {
//        cout << f1[i] << " " << f2[i] << " " << f3[i] << el;
        cout << f1.back() << " " << f2.back() << " " << f3.back() << el;
        f1.pop_back(); f2.pop_back(); f3.pop_back();
    }
}

 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}