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
        int d, v, l, r;
        cin >> d >> v >> l >> r;
        int total = d/v, before = ((l-1)/v), after = r/v;
        cout << total - (after-before) << endl;
    }

    return 0;
}