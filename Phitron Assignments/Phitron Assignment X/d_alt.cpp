#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define ll long long

vector<pair<pii, ll>> List;
const int N = 1e3+3;
ll d[N];
const ll INF = 1e18;
int n, e;

bool balman_ford(int s)
{
    for (int i = 1; i <= n; i++)
        d[i] = INF;

    d[s] = 0;
    bool flag = false;

    for (int i = 1; i <= n; i++)
    {
        for (auto edge : List)
        {
            int u = edge.first.first, v = edge.first.second, w = edge.second;

            if (d[u] != INF && d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                if (i == n) flag = true;
            }
        }
    }
    return flag;
}
int main()
{
    cin >> n >> e;
    while(e--)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        List.push_back({{u, v}, w});
    }
    int S; cin >> S;
    bool Flag = balman_ford(S);
    if(Flag)
    {
        cout << "Negative Cycle Detected\n";
        return 0;
    }
    int t; cin >> t;
    while(t--)
    {
        int D; cin >> D;
        if (d[D] == INF) cout << "Not Possible\n";
        else cout << d[D] << "\n";
    }

    return 0;
}