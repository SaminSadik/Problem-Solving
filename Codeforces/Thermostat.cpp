#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int solve()
{
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;

    if(a == b) return 0;
    if(abs(a-b) >= x) return 1;
    if(x>(r-a) && (a-l)<x) return -1;
    if(a<b)
    {
        if((b+x <= r) || (a-x >= l)) return 2;
        if((a+x <= r) && (b-x >= l)) return 3;
        return -1;
    }
    else
    {
        if((a+x <= r) || (b-x >= l)) return 2;
        if((b+x <= r) && (a-x >= l)) return 3;
        return -1;
    }
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << solve() << endl;

    return 0;
}