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
#define nl '\n'
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vd vector<double>
#define vii vector<pair<int, int>>
#define vsi vector<pair<stirng, int>>

void solve()
{
    string num;
    cin >> num;
    for (int i = 0; i < num.size(); i++) {
        char n = num[i];
        if(n == '4' || n == '7') cout << n;
        else if (n < '4' && n >= '0') cout << '4';
        else if (n > '4' && n < '7') cout << '7';
        // else {
        // 
        // }
    }
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}