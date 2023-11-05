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
        int a[n], ans = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        unordered_set<int> s;
        for(int i=n-1; i>=0; i--)
        {
            if(!s.count(a[i])) s.insert(a[i]);
            else
            {
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}