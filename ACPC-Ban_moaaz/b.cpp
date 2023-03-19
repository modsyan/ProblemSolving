#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // 2 // 1 // 3
    int n; cin >> n;
    int h2 = (n/3)+1;
    int h1 = (n/3)+(n%2==0?1:2);
    int h3 = (n/3)-(n%2==0?2:1);
    cout << h2 << " " << h1 << " " << h3 << '\n'; 
}


int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--)
    solve();
}