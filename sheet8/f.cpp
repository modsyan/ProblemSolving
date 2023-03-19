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
 
int main()
{
    FASTIO
    int n, m; 
    cin >> n >> m;
    queue<pair<int, int>> qu;
    For(0, n) {
        int tmp; cin >> tmp;
        qu.push({tmp, i+1});
    } 
    int last = 1;
    while(!qu.empty()) {
        qu.front().first -= m;
        last = qu.front().second;
        if (qu.front().first <= 0)
            qu.pop();
        else {
            qu.push(qu.front());
            qu.pop();
        }
    }
    cout << last << el;
    
    return 0;
}