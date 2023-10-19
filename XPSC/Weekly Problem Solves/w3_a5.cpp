#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9+7;

signed main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n, k, ans = 1;
        cin >> n >> k;
        while(k--) ans = ((ans%mod)*(n%mod)) % mod;
        cout << ans << endl;
    }

    return 0;
}