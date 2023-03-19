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
 
//---> Main <---//
int main()
{
    FASTIO
    int t; cin >> t;
    stack<int> st;
    int qry;
    while(t--) {
        cin >> qry;
        if (qry == 1)
        {
            int tmp; cin >> tmp;
            st.push(tmp);
        }
        else if (qry == 2)
        {
            if (!st.empty())
            st.pop();
        }
        else if (qry == 3)
        {
            if (!st.empty())
                cout << st.top() << el;
            else
                cout << "Empty!" << el;
        }
    }    
    return 0;
}