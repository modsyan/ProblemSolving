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
    priority_queue<ll, vector<ll>, greater<ll>> worst_potion;
    ll n, tmp, cnt = 0; cin >> n;
    ll health = 0;    
    For(0, n)
    {
        cin >> tmp;
        health += tmp;
        worst_potion.push(tmp);
        while (health < 0) {
            health -= worst_potion.top();
            worst_potion.pop();
            cnt--;
        }
        cnt++;
    }
    cout << cnt << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}