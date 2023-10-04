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
        int n; cin >> n;
        vector<int> a; a.push_back(0);
        for(int i=1; i<=n; i++)
        {
            int x; cin >> x;
            a.push_back(x);
        }
        int ans = 0, target = 1;
        for(int i=1; i<a.size(); i++)
        {
            if(a[i]>target)
            {
                ans += (a[i]-target);
                target = a[i];
            }
            target++;
        }
        cout << ans << endl;
    }

    return 0;
}