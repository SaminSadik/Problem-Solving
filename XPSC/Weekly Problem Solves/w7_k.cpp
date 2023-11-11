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
        double n, x;
        cin >> n >> x;
        cout << (x<n/2 ? "NO" : "YES") << endl;
    }

    return 0;
}