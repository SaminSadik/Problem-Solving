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
        int n; cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            if(a.empty() || a.back()!=x) a.push_back(x);
        }

        int ans = 1;
        for(int i=1; i<a.size()-1; i++)
        {
            int x = a[i], y = a[i-1], z = a[i+1];
            if((x>y && x>z) || (x<y && x<z)) ans++;
        }

        if(ans>1 || a.size()>1) ans++;
        cout << ans << endl;
    }

    return 0;
}