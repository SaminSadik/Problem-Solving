#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int M = 1e9+7;

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0, pow = 1;
        while(k)
        {
            if(k%2) ans = (ans+pow) % M;
            pow = (pow*n) % M;
            k /= 2;
        }
        cout << ans << endl;
    }

    return 0;
}