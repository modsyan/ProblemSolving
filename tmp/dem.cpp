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

string superDigit(string num) 
{
    if (num.size() <= 1)
        return num;
    ll sum = 0;
    for(auto c: num) 
        sum+= c-'0';  
    return superDigit(to_string(sum)); 
}


void solve()
{
    string s, sf; cin >> s;
    int k; cin >> k;
    For(0, k) sf += s;
    cout << superDigit(sf) << el;
}
 
//---> Main <---// 
int main()
{
    FASTIO
    solve();
    return 0;
}