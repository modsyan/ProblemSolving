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
    int date; cin >> date;
    do {
        int ons = date%10;
        int tens = date%100/10; 
        int huns = date%1000/100;
        int souns = date/1000;  
        bool st = (ons == tens || ons == huns || ons == souns || tens == huns || huns =) 
    } while (ons != te)
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}