#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> graph[N];
bool visited[N];
int l;
int level[N];
vector<int> pizza;

void bfs()
{
    queue<int> q;
    q.push(0);
    visited[0] = true;
    level[0] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v: graph[u]) 
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            if(level[v] == l) pizza.push_back(v);
        }
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
        graph[b].push_back(a);
    }

    cin >> l;
    if(l==0)
    {
        cout << 0;
        return 0;
    }

    bfs(); 

    if(pizza.empty()) cout << -1;
    else
    {
        sort(pizza.begin(), pizza.end());
        for(int x : pizza) cout << x << " ";
    }

    return 0;
}