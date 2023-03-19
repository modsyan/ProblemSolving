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

bool isNumber(string s) {
    for (int i = 0; i < s.size(); i++) if (isdigit(s[i]) == false) return false;
    return true; 
}
const string alc[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
void solve()
{
    int n; cin >> n; int cnt = 0;
    while (n--) {
        string s; cin >> s; 
        if (isNumber(s) && stoi(s) < 18) { cnt++; continue; }
        if(s.size() < 10 && s.size() > 2) for (int j = 0; j < 11 ; j++) if (s == alc[j]) {cnt++; break;}
    }
    cout << cnt << nl;
    return;
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}