#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int k, s, ans = 0;
    cin >> k >> s;
    for(int x = 0; x <= k; x++)
    {
        for(int y = 0; y <= k; y++)
        {
            int z = s - x - y;
            if (z >= 0 && z <= k) ans++;
        }
    }
    cout << ans;

    return 0;
}