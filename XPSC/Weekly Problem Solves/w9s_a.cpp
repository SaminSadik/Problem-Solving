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
        int n; cin >> n;
        int a[n], ans;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(i) ans &= a[i];
            else ans = a[i];
        }
        cout << ans << endl;
    }

    return 0;
}