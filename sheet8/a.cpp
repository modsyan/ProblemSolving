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
    int n, tmp; cin >> n;
    vi first, second, third;
    For(0, n) {
        cin >> tmp;
        if (tmp > 0)
            second.push_back(tmp);
        else if (tmp < 0)
            first.push_back(tmp);
        else
            third.push_back(tmp);
    }
    if(second.size() == 0) {
        second.push_back(first.back()); first.pop_back();
        second.push_back(first.back()); first.pop_back();
    }
    if (first.size() % 2 == 0) {
        third.push_back(first.back());
        first.pop_back();
    }

    cout << first.size() << " ";
    for (auto val: first)
        cout << val << " ";
    cout << el << second.size() << " ";
    for (auto val: second)
        cout << val << " ";
    cout << el << third.size() << " ";
    for (auto val: third)
        cout << val << " ";
    cout << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}