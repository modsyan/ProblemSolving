#include <bits/stdc++.h>
using namespace std;

#define long long ll;

int main()
{ 
   // ios_base::sync_with_stdio(false);
   // cin.tie(nullptr);
   // cout.tie(nullptr);

    string s, subS, output;
    cin >> s;
    int n, sSize = s.size();
    cin >> n;
    while (n--) {
        cin >> subS;
        int cnt = -1;
        for (int  i =0 ; i < sSize; i++) 
        {
            output = "";
            if (subS[cnt] == s[i])
            {
                output.push_back(s[i]);
                cnt++;
            }
        }
        if (output == "")
        {
            cout << "IMPOSIPLE";
        } else {
            cout << output;
        }
    }
}