#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

const int N = 1e5 + 5;
vector<pii> g[N];
int dis[N];
bool vis[N];
int n, e, a, b, w, s, t;

void dijkstra(int s)
{
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    dis[s] = 0;
    while(!q.empty())
    {
        pii pr = q.top();
        q.pop();
        int prNode = pr.second, prCost = pr.first;
        if(vis[prNode]) continue;
        vis[prNode] = true;
        for(int i=0; i<g[prNode].size(); i++)
        {
            pii ch = g[prNode][i];
            int chNode = ch.first, chCost = ch.second;
            if(dis[chNode] > prCost+chCost)
            {
                dis[chNode] = prCost + chCost;
                q.push({dis[chNode], chNode});
            }
            
        }
    } 
}

signed main()
{
    cin >> n >> e;
    while(e--)
    {
        cin >> a >> b >> w;
        g[a].push_back({b, w});
    }
    cin >> s >> t;

    for(int i=1; i<=n; i++) dis[i] = LLONG_MAX;
    dijkstra(s);

    while(t--)
    {
        int d, dw;
        cin >> d >> dw;
        if(dis[d]<=dw) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

/* Notes:
1. main concept copied from Module 14-5: Optimized Dijkstra Algorithm Implementation
2. this is a directed graph, not undirected (hint from fb grp)
3. need long long instead of int (hint from fb grp) */