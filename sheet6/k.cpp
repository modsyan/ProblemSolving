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
    int a, b, cnt = 1;
    bool fp = 1, fq = 1;
    vi arr(n); vi p(n); vi q(n);
    For(0, n) arr[i] = i+1;
    For(0, n) cin >> p[n];
    For(0, n) cin >> q[n];
    do {
        For(0, n) 
        {
            if (p[i] != arr[i]) goto badp;
        }
        a = cnt;
        badp:;
        fp = 1;
        For(0, n)
        {
            if (q[i] != arr[i]) goto badq; 
        }
        b = cnt;
        badp:;
        fq = 1;
        cnt++;
    } while (next_permutation(arr.begin(), arr.end()));
    cout << abs(a - b) << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}