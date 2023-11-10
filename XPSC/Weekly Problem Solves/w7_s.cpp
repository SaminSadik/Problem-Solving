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
        int ans = 0;
        while(n!=50)
        {
            (n<50) ? n+=2 : n-=3;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}