#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int t, n, d[101], a[101];

void solve()
{
    cin >> n;
    for(int i=1; i<=n; i++) cin >> d[i];
    for(int i=1; i<=n; i++)
    {
        if(d[i] && a[i-1] && d[i]<=a[i-1])
        {
            cout << -1 << endl;
            return;
        }
        a[i] = a[i-1] + d[i];
    }
    for(int i=1; i<=n; i++) cout << a[i] << " ";
    cout << endl;
}

signed main()
{
    SSK

    cin >> t;
    while(t--) solve();

    return 0;
}