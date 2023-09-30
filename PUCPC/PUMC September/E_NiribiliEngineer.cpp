// SSKsan //

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e5+5;
vector<int> g[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    for(auto v : g[u])
    {
        if(!visited[v]) dfs(v);
    }
}

signed main()
{
    IOS

    int n, e; cin >> n >> e;
    //cin.ignore(); string all; getline(cin, all);
    map<string, int> m;
    for(int i=0; i<n; i++)
    {
        string s; cin >> s;
        m[s] = i;
    }
    //for(auto i : m) cout << i.first << " " << i.second << endl;
    for(int i=0; i<e; i++)
    {
        string s1, s2; cin >> s1 >> s2;
        g[m[s1]].push_back(m[s2]);
        g[m[s2]].push_back(m[s1]);
    }

    int comp = 0;
    for(int i=0; i<n; i++)
    {
        if(visited[i]) continue;
        dfs(i);
        comp++;
    }
    cout << comp;

    return 0;
}