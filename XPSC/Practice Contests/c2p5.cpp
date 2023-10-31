#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    cout << min((a[n-1]-a[1]), (a[n-2]-a[0]));

    return 0;
}