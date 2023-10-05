#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, k, ans = 0;
    cin >> n >> k;
    while(n--)
    {
        int t; cin >> t;
        if(t%k == 0) ans++;
    }
    cout << ans;

    return 0;
}