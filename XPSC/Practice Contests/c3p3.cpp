#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define pii pair<int,int>

signed main()
{
    SSK

    int n; cin >> n;
    vector<pii> a(n);
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        a.push_back({x, i+1});
    }
    sort(a.begin(), a.end(), greater<pii>());

    int ans = 1, shot = 1;
    for(int i=1; i<n; i++)
    {
        ans += (shot * a[i].first);
        ans++; shot++;
    }
    cout << ans << endl;
    for(int i=0; i<n; i++) cout << a[i].second << " ";
    cout << endl;

    return 0;
}