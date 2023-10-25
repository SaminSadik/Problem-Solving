#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n, k, u;
        cin >> n >> k;
        map<int, pair<int, int>> p;
        for(int i=0; i<n; i++)
        {
            cin >> u;
            if(p.find(u)==p.end()) p[u]={i,i};
            else p[u].second = i;
        }
        int a, b;
        while(k--)
        {
            cin >> a >> b;
            cout << ((
                (p.find(a)!=p.end()) &&
                (p.find(b)!=p.end()) &&
                (p[a].first<=p[b].second))
            ? "YES" : "NO") << endl;
        }
    }

    return 0;
}