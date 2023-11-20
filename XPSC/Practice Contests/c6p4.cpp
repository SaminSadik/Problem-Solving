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
        int n, m, q, sum = 0;
        cin >> n >> m;
        for(int i=0; i<m; i++)
        {
            cin >> q;
            sum += q;
        }
        cout << (n*(n+1))/2 - sum << endl;
    }

    return 0;
}