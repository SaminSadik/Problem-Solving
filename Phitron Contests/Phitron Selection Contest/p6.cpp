#include <bits/stdc++.h>
using namespace std;

#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e3+3;
vector<int> g[N];
bool visited[N];
int level[N];
int n, e, x, y, k;

void bfs()
{
    queue<int> q;
    q.push(x);
    visited[x] = true;
    level[x] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main()
{
    SSK

    cin >> n >> e;
    for(int i=0; i<e; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    	g[b].push_back(a);
    }
    cin >> x >> y >> k;

    bfs();

    if(visited[y] && level[y]<=k*2) cout << "YES";
    else cout << "NO";

    return 0;
}