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
        unordered_map<int,int> freq;
        for(int i=0; i<(n*2); i++)
        {
            int a; cin >> a;
            freq[a]++;
        }
        int ans = 0;
        for(auto x: freq) ans = max(ans, x.second);
        cout << ans << endl;
    }

    return 0;
}