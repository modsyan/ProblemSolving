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
#define nl '\n'
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vd vector<double>
#define vii vector<pair<int, int>>
#define vsi vector<pair<stirng, int>>

string notes[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

void solve()
{
    string one, two, thr;
    cin >> one >> two >> thr;
    int res1, res2; // res1 must equal 4 and res2 equal 3
    for (int i = 0; i < notes.size(); i++) {
        if (notes[i] == one)
            
        else if(notes[i] == two)
        else if(notes[i] == tre)
    }
}

//---> Main <---//
int main()
{
    FASTIO
    solve();
    return 0;
}