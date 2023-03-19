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
    string strN; 
    getline(cin, strN);
    int n = stoi(strN);
    while (n--)
    {
        stack<char> st;
        string s;
        getline(cin, s);
        if (s.size() == 0) {
            cout << "Yes" << el;
            continue;
        }
        bool flag = 1;
        for (int c: s) {
            if (c == '[' || c == '(')
                st.push(c);
            else if (!st.empty())
            {
                if (c == ']' && st.top() == '[') st.pop();
                else if(c == ')' && st.top() == '(') st.pop();
                else flag = 0;
            }
            else flag = 0;
        }
        if (flag && st.empty())
            cout << "Yes" << el;
        else
            cout << "No" << el;
    }
    return 0;
}