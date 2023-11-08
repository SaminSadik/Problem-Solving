#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define pii pair<int,int>

int ld(vector<int> a, int i)
{
    return abs(a[i]-a[i-1]);
}
int rd(vector<int> a, int i)
{
    return abs(a[i]-a[i+1]);
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<pii> v(n);
        v[0] = {rd(a,0), rd(a,0)};
        v[n-1] = {ld(a,n-1), ld(a,n-1)};
        for(int i=1; i<n-1; i++)
        {
            v[i] = {ld(a,i),rd(a,i)};
        }

        int f = 0;
        for(int i=1; i<v.size(); i++)
        {
            int x = max(v[i].first,v[i].second),
                y = max(v[f].first,v[f].second);
            if(x < y) f = i;
        }
        cout << max(v[f].first,v[f].second) << endl;
    }

    return 0;
}