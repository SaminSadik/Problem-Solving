#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int a, b, g = 0;
        cin >> a >> b;

        while(b != 1)
        {
            g = __gcd(a,b);
            if(g==1) break;
            b /= g;
        }
        cout << (g!=1 ? "Yes" : "No") << endl;
    }

    return 0;
}