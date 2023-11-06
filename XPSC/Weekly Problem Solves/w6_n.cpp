#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<pair<int,int>> s(n);
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin >> x >> y;
            s.push_back({x,y});
        }
        sort(s.rbegin(), s.rend());
        int len = 0;
        for(int i=0; i<n && k; i++)
        {
            if(s[i].second == l)
            {
                k--;
                len += s[i].first;
            }
        }
        cout << (k ? -1 : len) << endl;
    }

    return 0;
}