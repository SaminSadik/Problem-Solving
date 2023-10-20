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
        vector<int> a(n);
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        sort(a.begin(), a.end());
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            int x = a[i];
            if (m[a[i]])
            {
                ans++;
                while (m[x] > 0)
                {
                    m[x]--;
                    x++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}