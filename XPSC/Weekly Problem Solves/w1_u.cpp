#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int ans()
{
    int n; cin >> n;
    int a[n]; a[0] = 0;
    for(int i=1; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for(int i=1; i<n; i++)
    {
        if(a[i] != i) return i;
    }
}

signed main()
{
    SSK
    cout << ans();
    return 0;
}