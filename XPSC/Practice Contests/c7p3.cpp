#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int solve()
{
    int n; cin >> n;
    int a[n+2], mx = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        mx = max(a[i], mx);
    }
    a[0] = a[n+1] = INT_MAX;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != mx) continue;
        else if(a[i]>a[i-1] || a[i]>a[i+1]) return i;
    }
    return -1;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << solve() << endl;

    return 0;
}