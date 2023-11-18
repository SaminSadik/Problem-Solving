#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

void solve()
{
    int n; cin >> n;
    int a[n], b[n];

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+n);

    for(int i=0; i<n; i++)
    {
        int x = b[i]-a[i];
        if(x==0 || x==1) continue;
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}