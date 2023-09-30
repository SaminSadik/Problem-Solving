#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> graph[N];
bool visited[N];
int Count = 0; 

void dfs(int u)
{
    visited[u] = true;

    for(int v: graph[u])
    {
        if(visited[v]) continue;
        Count++;
        dfs(v);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    int k; cin >> k;
    dfs(k);
    cout << Count;

    return 0;
}