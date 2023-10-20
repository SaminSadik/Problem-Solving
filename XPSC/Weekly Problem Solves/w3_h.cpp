#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a[n + 1], ans(n);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<n; j++)
            {
                int x; cin >> x;
                a[x].push_back(j);
            }
        }
        for(int i=1; i<=n; i++)
        {
            int mn = INT_MAX, mx = INT_MIN;
            for (auto x : a[i])
            {
                mx = max(x, mx);
                mn = min(x, mn);
            }
            if(mn!=mx || mx==1) ans[mx-1]=i;
            else ans[mx]=i;
        }
       for(auto x : ans) cout << x << " ";
       cout << endl;
    }

    return 0;
}