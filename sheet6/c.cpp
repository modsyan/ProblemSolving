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
    string s1, s2;
    bool flag = 1;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size() && flag; i++)    
       if (s1[i] != s2[s2.size()-i-1]) 
            flag = 0;

    flag ? cout << "YES": cout << "NO"; 
    
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}