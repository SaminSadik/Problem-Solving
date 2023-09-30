#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    int p[n], ans = 0;
    for(int i=0; i<n; i++) cin >> p[i];
    sort(p, p+n);

    for(int i=(n%3); i<n; i+=3) ans += p[i];
    cout << ans << endl;

    return 0;
}