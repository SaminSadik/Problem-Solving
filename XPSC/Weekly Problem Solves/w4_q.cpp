#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int N = 2 * (1e5+5);
vector<int> g[N];
vector<int> leaf;

void Dfs(int node, int parent)
{
    if(node!=1 && g[node].size()==1) leaf[node] = 1;
    for(int child : g[node])
    {
        if(child == parent) continue;
        Dfs(child, node);
        leaf[node] += leaf[child];
    }
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for(int i=0; i<N; i++) g[i].clear();
        leaf.assign(n+1, 0);
        for(int i=0; i<n-1; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        Dfs(1, -1);
        int q; cin >> q;
        while(q--)
        {
            int x, y;
            cin >> x >> y;
            cout << leaf[x] * leaf[y] << endl;
        }
    }

    return 0;
}