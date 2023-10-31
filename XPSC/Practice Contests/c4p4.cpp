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
        int a[n], b[n],
        streak = 0, om = 0, addy = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i])
            {
                streak++;
                om = max(om, streak);
            }
            else streak = 0;
        }
        streak = 0;
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
            if(b[i])
            {
                streak++;
                addy = max(addy, streak);
            }
            else streak = 0;
        }
        if(om<addy) cout << "ADDY";
        else if(om>addy) cout << "OM";
        else cout << "DRAW";
        cout << endl;

    }

    return 0;
}