#include <bits/stdc++.h>
using namespace std;
long long INF = 1e18;

int main()
{
    int n, e;
    cin >> n >> e;
    long long cost[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cost[i][j] = INF;
            if (i == j) cost[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        cost[a][b] = min(w, cost[a][b]);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (cost[i][k] + cost[k][j] < cost[i][j])
                {
                    cost[i][j] = cost[i][k] + cost[k][j];
                }
            }
        }
    }

    int q; cin >> q;
    while(q--)
    {
        int x, y;
        cin >> x >> y;
        if(cost[x][y]==INF) cout << "-1\n";
        else cout << cost[x][y] << "\n";
    }

    return 0;
}