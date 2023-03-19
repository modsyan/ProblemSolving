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
    int n, prob;
    cin >> n;
    deque<int> ada;
    string query;
    For(0, n)
    {
        cin >> query;
        if (query == "toFront") {
            cin >> prob;
            ada.push_front(prob);
        }
        else if (query == "push_back") {
            cin >> prob;
            ada.push_back(prob);
        }
        else if (query == "front") {
            if (ada.empty())
                cout << "No job for Ada?" << el;
            else {
                cout << ada.front() << el;
                ada.pop_front();
            }
        }
        else if (query == "back") {
            if (ada.empty())
                cout << "No job for Ada?" << el;
            else {
                cout << ada.back() << el;
                ada.pop_back();
            }
        }
        else if (query == "reverse") {
            reverse(ada.begin(), ada.end());
        }
    }
    return 0;
}