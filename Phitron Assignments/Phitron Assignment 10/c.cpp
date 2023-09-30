#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int p[N], pSize[N];

class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        p[i] = -1;
        pSize[i] = 1;
    }
}
int dsu_find(int n)
{
    while (p[n] != -1)
    {
        n = p[n];
    }
    return n;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (pSize[leaderA] > pSize[leaderB])
        {
            p[leaderB] = leaderA;
            pSize[leaderA] += pSize[leaderB];
        }
        else
        {
            p[leaderA] = leaderB;
            pSize[leaderB] += pSize[leaderA];
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v, ans;
    dsu_set(n);
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }
    sort(v.begin(), v.end(), cmp);
    long long total = 0;
    int connected = 0;
    for (Edge val : v)
    {
        int a = val.a, b = val.b, w = val.w;
        int leaderA = dsu_find(a), leaderB = dsu_find(b);
        if (leaderA == leaderB) continue;
        total += val.w;
        connected++;
        dsu_union(a, b);
    }
    if(connected == n-1) cout << total;
    else cout << -1;
    return 0;
}