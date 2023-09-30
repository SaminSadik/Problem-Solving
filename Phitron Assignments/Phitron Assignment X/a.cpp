#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int p[N], pLevel[N];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        p[i] = -1;
        pLevel[i] = 0;
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
        if (pLevel[leaderA] > pLevel[leaderB])
        {
            p[leaderB] = leaderA;
        }
        else if (pLevel[leaderB] > pLevel[leaderA])
        {
            p[leaderA] = leaderB;
        }
        else
        {
            p[leaderB] = leaderA;
            pLevel[leaderA]++;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    dsu_set(n);
    int cycle = 0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB) cycle++;
        else dsu_union(a, b);
    }
    
    cout << cycle;
    return 0;
}