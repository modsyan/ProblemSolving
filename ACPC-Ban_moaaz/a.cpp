#include <iostream>
using namespace std;
void solve() 
{ 
    string n; cin >> n; 
    int midSize = (n.size()+1)/2;
    for (int i = 0; i < midSize; i++)
        if( n[i] != n[midSize+i]) { cout << "NO" << '\n'; return; }
    cout << "YES" << "\n";  
}
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--)
    solve();
}