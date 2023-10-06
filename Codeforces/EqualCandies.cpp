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
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        int mini = *min_element(a, a+n), ans = 0;
        for(int i=0; i<n; i++) ans += (a[i]-mini);
        cout << ans << endl;
    }

    return 0;
}