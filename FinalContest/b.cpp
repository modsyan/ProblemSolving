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
    string str; cin >> str;
    int ans = 0, sublength;
    for(int i = 0; i < str.size(); i++) 
    {
        for(int j = i+1; j < str.size(); j++) 
        {
            if (str[i]==str[j])
            {
                sublength=1;
                while( j+sublength < str.size() && str[i+sublength] == str[j+sublength])
                    sublength++;
                if (ans < sublength)
                    ans=sublength;
            }
        }
    }
    cout << ans << el;
}

 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}