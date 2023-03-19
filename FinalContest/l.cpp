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
    vi snak(n), snakflag(n);
    stack<int> sk;
    For(0, n) {
        int tmp; cin >> tmp;
        snak[i] = tmp; 
        snakflag[i] = tmp;
    }
    sort(snakflag.begin(), snakflag.end(), greater<>());
    int cnt = 0;
    For (0, n) {
        if(snakflag[cnt] == snak[i])
        {
            cout << snak[i] << " ";
            while (!sk.empty())
            {
                cout << sk.top() << " "; 
                sk.pop();
            }
        }
        else 
        {
            sk.push(snak[i]);
            cout << el; 
        }
    }
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}