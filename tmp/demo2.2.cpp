#include <bits/stdc++.h>
using namespace std;
#define long long ll;
 
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;
    double X, Y;
    cin >> n >> X >> Y;
    set<double> st;
    double x, y, ud = 0;
    for (int i = 0; i < n; i ++)
    {
        cin >> x >> y; 
        if (X-x == 0)
            ud = 1;
        else 
            st.insert(((double)(Y-y)/(X-x))); 
    }
    cout << st.size() + ud << '\n';
    return 0;
}