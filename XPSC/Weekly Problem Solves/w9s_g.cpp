#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int INF = 1e9+7;

void solve()
{
    int n; cin >> n;

    int minA = INF, minB = INF, total = 0;
    vector<int> beauty;
    while(n--)
    {
        int m; cin >> m;
        vector<int> a(m);
        for(int i=0; i<m; i++) cin >> a[i];

        sort(a.begin(), a.end());
        minA = min(minA, a[0]);
        a.erase(a.begin());
        minB = min(minB, a[0]);
        beauty.push_back(a[0]);
        total += a[0];
    }
    cout << total + (minA-minB) << endl;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}