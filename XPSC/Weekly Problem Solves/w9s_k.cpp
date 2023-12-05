#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int sol()
{
    int a[5];
    for(int i=1; i<5; i++) cin >> a[i];

    int ans = a[1];
    if(!ans) return 1;
    ans += min(ans+1, a[4]+abs(a[3]-a[2]));
    ans += min(a[2], a[3])*2;
    return ans;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << sol() << endl;

    return 0;
}