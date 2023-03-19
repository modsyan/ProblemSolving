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
    pair<int, int> max, min;
    max.first = -1e9; 
    min.first = 1e9;
    For(0, n)
    {
        int tmp; cin >> tmp;
        if (max.first < tmp)
        {
            max.first = tmp;
            max.second = i;
        }
        if (min.first >= tmp)
        {
            min.first = tmp;
            min.second = i;
        }
    }
    cout << (n - min.second) + max.second - (min.second>max.second?1:2) <<  el;

}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}