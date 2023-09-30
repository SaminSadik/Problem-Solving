#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();

    int dp[n+1][m+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(i==0 || j==0) dp[i][j] = 0;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    int ans = 0;
    while(n != 0 && m != 0)
    {
        ans++;
        if(a[n-1] == b[m-1]) { n--; m--; }
        else if(dp[n-1][m] > dp[n][m-1]) n--;
        else m--;
    }
    cout << ans+n+m << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
}