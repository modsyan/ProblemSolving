#include <bits/stdc++.h>
#define speedaya ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define testat ;ll testat; cin >> testat; while (testat--)
#define nl '\n'
#define REP(i,start,end) for (size_t i = start; i < end; i++)
typedef long long  ll;
using namespace std;
/*
for (int msk = 1; msk < (1<<n); msk++)
    {
        for (int i = 0; i < n; i++)
            if((msk>>i)&1) cout << nums[i] << ' ';
            
        cout << nl;
    }
*/
void solvaya(){
    string s1, s2; cin >> s1 >> s2;
    vector <string> probs;
    int pos1 = 0;
    int questions = 0;
    REP(i,0,s2.size()) if(s2[i] == '?') {questions++; s2[i] = '\0';};
    REP(i,0,s1.size()) {if(s1[i] == '+') pos1++;else pos1--;}
    string temp_s2 = s2;
    for (int msk = 1; msk <= (1<<questions); msk++)
    {
        string prt = "";
        s2 = temp_s2;
        for (int i = 0; i < questions; i++)
        {
            if((msk>>i)&1) prt += '-';
            else prt+= '+';   
        }
        s2+=prt;
        probs.push_back(s2);
    }
    vector <int> nums;
    REP(i,0,probs.size()){
        int sum = 0;
        REP(j,0,probs[i].size()) {if(probs[i][j] == '+') sum++; else sum--;}
        nums.push_back(sum);
    }

    int cnt = 0;
    for(auto it : nums) if(it == pos1) cnt++;
    
    double ans = cnt*1.0/nums.size();
    
    cout << ans << nl;
}

int main()
{
    speedaya
    solvaya();
}