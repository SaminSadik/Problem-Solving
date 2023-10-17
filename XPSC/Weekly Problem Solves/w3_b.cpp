#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int n, m, go[4][2]={{-1,-1},{-1,1},{1,1},{1,-1}};

int calc(vector<int> a[], int x, int y)
{
    int total = a[x][y];

    for(int k=0; k<4; k++)
    {
        int i = x, j = y;
        while(i+go[k][0]>=0 && i+go[k][0]<n && j+go[k][1]>=0 && j+go[k][1]<m)
        {
            total += a[i+go[k][0]][j+go[k][1]];
            i += go[k][0];
            j += go[k][1];
        }
    }
    return total;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<int> a[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int val; cin >> val;
                a[i].push_back(val);
            }
        }
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            ans = max(ans, calc(a, i, j));
        }
        cout << ans << endl;
    }

    return 0;
}