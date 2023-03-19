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
    int n; cin >>n;
    int tmp;
    vi arr;
    For(0, n){
        cin >> tmp;
        arr.push_back(tmp);
    }
    vi result;
    For(0, n-1) {
        if (arr[i] >= arr[i+1])
        {
            result.push_back(arr[i]);
        } 
    }
    result.push_back(arr.back());
    cout << result.size() << el;
    for(int x: result) cout << x << " "; 
    cout << el;
   
    
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}