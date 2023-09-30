#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
vector<int> graph[N];
bool visited[N];
int Count = 1;

void dfs(int u)
{
    visited[u] = true;

    for(int v: graph[u])
    {
        if(visited[v]) continue;
        dfs(v);
        Count++;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    int m = INT_MIN;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        m = max({m, a, b});
    }

    vector<int> comps;
    for(int i=0; i<=m; i++)
    {
        if(visited[i]) continue;
        dfs(i);
        if(Count>1) comps.push_back(Count);
        Count = 1;
    }

    sort(comps.begin(), comps.end());
    for(int x : comps) cout << x << " ";

    return 0;
}