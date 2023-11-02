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
        vector<int> a(n+1), pre(n+1);
        int sum = 0, ans = n;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
            sum += a[i];
            pre[i] = a[i];
            if(i) pre[i] += pre[i-1];
        }
        for(int i=1; i<=n; i++)
        {
            if(sum%pre[i]) continue;
            int last = 0, res = -1;
            for(int j=1; j<=n; j++)
            {
                int s = pre[j]-pre[last];
                if(s > pre[i])
                {
                    res = -1;
                    break;
                }
                if(s == pre[i])
                {
                    res = max(res, (j-last));
                    last = j;
                }
            }
            if(res != -1) ans = min(ans, res);
        }
        cout << ans << endl;
    }

    return 0;
}