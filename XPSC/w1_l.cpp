#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    for(int i=a; i<=t; i+=a) ans += b;
    cout << ans;

    return 0;
}
