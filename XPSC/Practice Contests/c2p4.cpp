#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int a[n], ans = 0;
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=1; i<n-1; i++)
    {
        if(!a[i] && a[i-1] && a[i+1])
        {
            a[i-1] = 0;
            a[i+1] = 0;
            ans++;
        }
    }
    cout << ans;

    return 0;
}