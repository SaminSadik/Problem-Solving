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
        int n, b;
        cin >> n >> b;
        int a[n];
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if((b&a[i])==b) v.push_back(a[i]);
        }
        if(!v.empty())
        {
            int ans = v[0];
            for(int i=1; i<v.size(); i++) ans &= v[i];
            if(ans == b) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}