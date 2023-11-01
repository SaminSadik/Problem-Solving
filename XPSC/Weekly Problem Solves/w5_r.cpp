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
        int n, h, m, ans = INT_MAX;
        cin >> n >> h >> m;
        int S = h*60 + m;
        for(int i=0; i<n; i++)
        {
            cin >> h >> m;
            int T = h*60 + m;
            if(ans>0 && T<S) ans = min(ans, (1440-S+T));
            else if(ans>0 && T>S) ans = min(ans, (T-S));
            else ans = 0;
        }
        cout << ans/60 << " " << ans%60 << endl;
    }

    return 0;
}
