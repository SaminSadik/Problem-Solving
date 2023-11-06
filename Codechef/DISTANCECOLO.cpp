#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9+7;

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 1;
        for(int i=0; i<n; i++)
        {
            ans *= k;
            ans %= mod;
            k--;
            if(!k) break;
        }
        cout << ans << endl;
    }

    return 0;
}