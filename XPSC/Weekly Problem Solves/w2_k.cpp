#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int a[n], s[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        s[i] = (i ? (s[i-1] + a[i]) : a[i]);
    }
    int q; cin >> q;
    while(q--)
    {
        int l,  r;
        cin >> l >> r;
        cout << (l ? (s[r] - s[l-1]) : s[r]) << endl;
    }

    return 0;
}