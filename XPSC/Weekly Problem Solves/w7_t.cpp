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
        int x, y; cin >> x;
        (x%10 > 4) ? y=9 : y=10;
        cout << 10*(y-(x/10)) << endl;
    }

    return 0;
}