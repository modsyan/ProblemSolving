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
    // vi arr(n);
    set<int> evens , odds;
    For(0, n) {
        int tmp; cin >> tmp;
        if (tmp%2== 0)
            evens.insert(tmp);
        else
            odds.insert(tmp);
    }
    if (evens.size() >= 2 && odds.size() >= 1)
        cout << "Yes" << el;
    else if(odds.size() >= 3)
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