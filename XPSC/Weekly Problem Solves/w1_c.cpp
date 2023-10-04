#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int a, b;
    cin >> a >> b;

    int ans = b - a + 1;
    if(a>b) ans = 0;
    cout << ans;

    return 0;
}