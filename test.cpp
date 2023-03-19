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
#define nl '\n'
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vd vector<double>
#define vii vector<pair<int, int>>
#define vsi vector<pair<stirng, int>>

void solve()
{
    vi num1 = {1, 2, 3, 4, 5};
    vi num2 = {1, 2, 3, 4, 5};
    vi res;
    int smallSize = (num1.size() > num2.size()? num2.size(): num1.size());
    cout << smallSize;
    for (int i = 0; i < smallSize-1; i++) {
        int sum = num1[i]+num2[i];
        if (sum > 10) res[i+1]++;
        res[i] = sum%10;
    }
    for (auto x: res) {
        cout << x;
    }
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}