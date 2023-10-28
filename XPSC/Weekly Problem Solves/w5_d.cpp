#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int n, m;

bool possible(vector<int> v, int cap)
{
    int part = 1, cont = 0;
    for(int i=0; i<n; i++)
    {
        cont += v[i];
        if(cont > cap)
        {
            part++;
            cont = v[i];
        }
    }
    return (part<=m);
}

signed main()
{
    SSK

    while(cin >> n >> m)
    {
        vector<int> ves(n);
        int l = 0, r = 0, ans;
        for(int i=0; i<n; i++)
        {
            cin >> ves[i];
            r += ves[i];
            l = max(l, ves[i]);
        }
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(possible(ves, mid))
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        cout << ans << endl;
    }

    return 0;
}