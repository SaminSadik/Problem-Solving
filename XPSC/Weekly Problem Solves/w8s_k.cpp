#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n, m, nm, ans;
        cin >> n >> m;
        nm = (n*m); ans = nm/3;
        cout << (nm%3 ? ans+1 : ans) << endl;
    }

    return 0;
}