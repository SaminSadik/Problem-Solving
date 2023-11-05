#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define Loop(x,y,z) for(auto x=y; x<z; x++)

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int s[n], f[n], d[n];
        Loop(i,0,n) cin >> s[i];
        Loop(i,0,n) cin >> f[i];

        d[0] = f[0] - s[0];
        Loop(i,1,n)
        {
            d[i] = f[i]-max(s[i],f[i-1]);
        }
        for(int x: d) cout << x << " ";
        cout << endl;
    }

    return 0;
}