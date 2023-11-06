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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> car(n), crg(m);
        for(int i=0; i<n; i++) cin >> car[i];
        for(int i=0; i<m; i++) cin >> crg[i];
        sort(car.rbegin(), car.rend());
        sort(crg.rbegin(), crg.rend());
        int nrg = 0;
        for(int i=0; i<n && i<m; i++)
        {
            nrg += min(crg[i]*h, car[i]);
        }
        cout << nrg << endl;
    }

    return 0;
}