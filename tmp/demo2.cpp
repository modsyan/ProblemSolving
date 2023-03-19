#include <bits/stdc++.h>
using namespace std;
#define long long ll;
int main() 
{
    int n; cin >> n;
    vector<int> num(n); 

    for (int i = 0; i < n; i++) cin >> num[i];
    int cnt = 0;
    for (int i = 0; i< num.size(); i++)
    {
        for (int j = i+1; j < num.size(); j++)
        {
            int sum = pow(2,num[i]) + pow(2,num[j]);
            if (ceil(log2(sum)) == floor(log2(sum)))
            {
                cnt++;
                break;
            }
        }
    }
    
    if (cnt)
        cout << cnt << '\n';
    else
        cout << n;

}