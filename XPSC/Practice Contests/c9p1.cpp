#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int M = 998244353;

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n % 2)
        {
            cout << 0 << endl;
            continue;
        }
        int ans = 1;
        for(int i=1; i<=(n/2); i++)
        {
            ans = (ans*i*i) % M;
        }
        cout << ans << endl;
    }

    return 0;
}