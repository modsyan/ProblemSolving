#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        int ans=upper_bound(arr,arr+n,x)-arr;
        cout << ans << " ";
    }
    cout << endl;
}