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

        map<int,int> f, fof;
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            f[a]++;
        }
        for(auto x : f) fof[x.second]++;

        int l=0, r=n, ans=n, rem=f.size();
        for(auto [x,y]: fof)
        {
            ans = min(ans, l+r - rem*x);
            l += (x*y);
            r -= (x*y);
            rem -= y;
        }
        cout << ans << endl;
    }

    return 0;
}