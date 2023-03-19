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
    string word; cin >> word;
    word += "WUB";
    int i = 0, start = 0, end = 0; 
    while(i <= word.size()-3)
    {
        if (word.substr(i, 3) != "WUB") {
            start = i;
            for (int inx = i; inx < word.size() ; inx++){
                if (word.substr(inx, 3) == "WUB") {end = inx-start; i = inx; break; };
            }
            cout << word.substr(start, end)  << " ";
        }
        else i+=3;
    }
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}