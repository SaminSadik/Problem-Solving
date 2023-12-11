#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n;
        for(x=1; x*2<n; x*=2);
        vector<int> ans;
        for(int i=n-1; i>=x; i--)
        {
            ans.push_back(i);
        }
        for(int i=0; i<x; i++)
        {
            ans.push_back(i);
        }
        for(int a: ans) cout << a << " ";
        cout << endl;
    }

    return 0;
}