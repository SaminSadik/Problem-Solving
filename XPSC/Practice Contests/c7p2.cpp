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
        int n; cin >> n;
        int a[n], l, r, i;
        for(i=0; i<n; i++) cin >> a[i];
        while(a[--i]!=1); r = i;
        i = 0; while(a[i++]!=1); l = i;
        int ans = 0;
        while(i<=r)
        {
            if(!a[i]) ans++;
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}