#include <bits/stdc++.h>
using namespace std;

const int U = INT_MAX - 1;

void solve(int n, int s, int a[])
{
    int dp[n+1][s+1];
    dp[0][0] = 0;
    for(int i=1; i<=s; i++) dp[0][i] = U;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=s; j++)
        {
            if(a[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = min(1 + dp[i][j-a[i-1]], dp[i-1][j]);
        }
    }
    if(dp[n][s] == U) dp[n][s] = -1;
    cout << dp[n][s] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], target = 1000 - m;
        for(int i=0; i<n; i++) cin >> a[i];
        solve(n, target, a);
    }
}