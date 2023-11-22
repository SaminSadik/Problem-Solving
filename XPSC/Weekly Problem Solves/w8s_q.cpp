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
        int f[8001] = {0}, s[n+1] = {0};
        for(int i=1; i<=n; i++)
        {
            int a; cin >> a;
            s[i] = s[i-1] + a;
            f[a]++;
        }
        int ans = 0;
        for(int l=1; l<=n; l++)
        {
            for(int r=l+1; r<=n; r++)
            {
                int c = s[r] - s[l-1];
                if(c<=0 || c>n) continue;
                ans += f[c];
                f[c] = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}