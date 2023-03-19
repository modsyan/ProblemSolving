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
    int n, x; cin >> n >> x;
    vc arr(n);
    queue<int> movements;
    For(0, n) cin >> arr[i]; 

    while (x--) {
        for (int i = 0 ; i < n-1; i++)
        {
            if(arr[i]=='B' && arr[i+1]=='G')
                movements.push(i); 
        }
        while(!movements.empty())
        {
            int cur = movements.front();
            movements.pop();
            char tmp = arr[cur];
            arr[cur] = arr[cur+1];
            arr[cur+1] = tmp;
        }  
}    
    For(0, n) cout << arr[i];
    cout << el;
}
 
//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}