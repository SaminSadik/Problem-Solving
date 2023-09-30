#include <bits/stdc++.h>
using namespace std;

int lps(string a)
{
    int n, m; n = m = a.size();
    string b = a;
    reverse(b.begin(), b.end());

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
        if(a[n-1] == b[m-1])
        {
            ans++;
            n--;
            m--;
        }
        else
        {
            if(dp[n][m-1] > dp[n-1][m]) m--;
            else n--;
        }
    }
    return ans;
}

int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        string s; cin >> s;
        cout << s.size() - lps(s) << endl;
    }
    
    return 0;
}