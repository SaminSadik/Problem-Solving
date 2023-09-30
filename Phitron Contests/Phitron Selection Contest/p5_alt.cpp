#include <bits/stdc++.h>
using namespace std;

#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pipi pair<int, pair<int, int>>
#define O1 first
#define O2 second

const int N = 1e5+5;
int parent[N], parentSize[N];
vector<pipi> road;

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a), leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}
signed main()
{
    SSK
    
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    vector<pipi> ans;
    for(int i=0; i<e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        road.push_back({w,{a,b}});
    }
    sort(road.begin(), road.end());
    for (auto v : road)
    {
        int a = v.O2.O1, b = v.O2.O2, w = v.O1;
        int leaderA = dsu_find(a), leaderB = dsu_find(b);
        if (leaderA == leaderB) continue;
        ans.push_back(v);
        dsu_union(a, b);
    }
    int sum = 0;
    for (auto v : ans)
    {
        sum += v.O1;
    }
    if (ans.size() != n - 1) cout << "Not Possible" << endl;
    else cout << e-ans.size() << " " << sum << endl;
    return 0;
}