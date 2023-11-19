#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int N = 200001;

void solve()
{
    int n; cin >> n;
    int num[N] = {0}, sum[N] = {0};
    for(int i=0; i<n; i++)
    {
        int a; cin >> a;
        if(a<=n) num[a]++;
    }
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; num[i] && j<=n; j+=i) sum[j]+=num[i];
        ans = max(ans, sum[i]);
    }
    cout << ans << endl;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}