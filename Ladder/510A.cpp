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


void right(int n) {
    for (int i = 0; i < n-1; i++) cout << '.';
    cout << '#' << nl;
}
void left(int n) {
    cout << '#';
    for (int i = 0; i < n-1; i++) cout << '.';
    cout << nl;
}
void line(int n) {
    for(int i = 0; i < n; i++) cout << '#';
    cout << nl;
}
void blockLeft(int n) {
    right(n); line(n);
}
void blockRight(int n) {
    left(n); line(n);
}
void toggleFLag(bool &flag) {
    if (flag) flag = 0;
    else flag = 1;
}
void solve()
{
    //debuging
    // int n = 9, m = 9;
    int n, m; cin >> n >> m;

    bool flag = 1;
    line(m);
    for (int i = 0; i < n/2; i++) {
        if (flag) {
            blockLeft(m);
        }
        else {
            blockRight(m);
        }
        toggleFLag(flag);
    }

}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}