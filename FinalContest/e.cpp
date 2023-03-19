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
    
    string str, str2; cin >> str >> str2;
    string r = str.substr(0, str.find('|')), l = str.substr(str.find('|')+1);

    
    for (int i = 0; i < str2.size();i++){
        if (l.size() > r.size()) r.push_back(str2[i]);
        else l.push_back(str2[i]);
    }
    if (l.size() == r.size())
        cout << r << "|" << l << el;
    else
        cout << "Impossible" << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}