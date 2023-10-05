#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int x, y, ans = 0;
    cin >> x >> y;
    while(x <= y)
    {
        x *= 2;
        ans++;
    }
    cout << ans;

    return 0;
}