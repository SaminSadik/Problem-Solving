#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int knapsack(int n, int b, int v[], int w[])
{
    if (n == 0 || b == 0) return 0;
    if (dp[n][b] != -1) return dp[n][b];

    if (w[n-1] <= b)
    {
        int o1 = knapsack(n-1, b, v, w),
        o2 = knapsack(n-1, b-w[n-1], v, w) + v[n-1];
        return dp[n][b] = max(o1, o2);
    }
    else return dp[n][b] = knapsack(n-1, b, v, w);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, b;
        cin >> n >> b;
        int v[n], w[n];

        for(int i=0; i<n; i++) cin >> w[i];
        for(int i=0; i<n; i++) cin >> v[i];

        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=b; j++) dp[i][j] = -1;
        }
        cout << knapsack(n, b, v, w) << endl;
    }

    return 0;
}