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
        int x, y;
        cin >> x >> y;
        cout << ((x/y > 20) ? 20 : (x/y)) << endl;
    }

    return 0;
}