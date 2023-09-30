#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int comp(int A, int B)
{
    int Count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((A >> i) & 1) != ((B >> i) & 1))
        {
            Count++;
        }
    }
    return Count;
}

int32_t main()
{
    IOS

    int n, m, k, ans=0;
    cin >> n >> m >> k;
    vector<int> x;

    for(int i=0; i<m+1; i++)
    {
        int v; cin >> v;
        x.emplace_back(v);
    }

    for(int i=0; i<m; i++)
    {
        if(comp(x[i], x[m])<=k) ans++;
    }

    cout << ans << endl;

    return 0;
}