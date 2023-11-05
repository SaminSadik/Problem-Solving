#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n, ans;
    cin >> n;

    if(n%2) ans = -ceil(n/2.0);
    else ans = n/2;

    cout << ans;

    return 0;
}