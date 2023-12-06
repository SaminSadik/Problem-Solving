#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int MSB(int x)
{
    int c = 0;
    while(x >>= 1) c++;
    return c;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            m[MSB(a)]++;
        }
        int ans = 0;
        for(auto x : m)
        {
            ans += (x.second * (x.second-1) / 2);
        }
        cout << ans << endl;
    }

    return 0;
}