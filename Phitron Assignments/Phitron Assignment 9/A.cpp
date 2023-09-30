#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> graph[N];

int bfsDistance(int s, int d)
{
    if(s == d) return 0;

    bool visited[N] = {false}; 
    int dist[N] = {0};

    queue<int> que; que.push(s);
    visited[s] = true;

    while(!que.empty())
    {
        int u = que.front();
        que.pop();

        for(int v : graph[u])
        {
            if(visited[v]) continue;

            que.push(v);
            visited[v] = true;
            dist[v] = dist[u] + 1;

            if(v == d) return dist[v];
        }
    }

    return -1;
}

int main()
{
    int n, e, x, y;
    cin >> n >> e;

    while(e--)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int q; cin >> q;
    while(q--)
    {
        cin >> x >> y;
        cout << bfsDistance(x, y) << endl;
    }

    return 0;
}