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
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            char c = s[i];
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            v.push_back(i);
        }
        int len = v.size(), ans = 1;
        for(int i=k-1; i<len; i+=k)
        {
            if(i<len-1) ans = (ans%mod)*(v[i+1]-v[i]);
        }
        cout << ans % mod << endl;
    }

    return 0;
}