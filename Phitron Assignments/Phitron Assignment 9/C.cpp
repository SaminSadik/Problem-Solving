#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> graph[N];

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

    int k; cin >> k;
    cout << graph[k].size();

    return 0;
}