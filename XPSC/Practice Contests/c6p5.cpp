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
        int n; cin >> n;
        int a[n], b[n];
        int om = 0, ad = 0, streak = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]) streak++;
            if(!a[i] || i==n-1)
            {
                om = max(om, streak);
                streak = 0;
            }
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
            if(b[i]) streak++;
            if(!b[i] || i==n-1)
            {
                ad = max(ad, streak);
                streak = 0;
            }
        }
        if(om == ad) cout << "DRAW";
        else if(om>ad) cout << "OM";
        else cout << "ADDY";
        cout << endl;
    }

    return 0;
}