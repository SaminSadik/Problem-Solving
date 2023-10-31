#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9+7;

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], evn = 0, odd = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            (a[i]%2) ? odd++ : evn++;
        }
        int ans = 1;
        while(evn--)
        {
            ans *= 2;
            ans %= mod;
        }
        cout << (odd ? ans : ans-1) << endl;
    }

    return 0;
}