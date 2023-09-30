// SSKsan //

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], s[n+1];
        s[0] = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            s[i+1] = s[i] + a[i];
        }
        s[n+1] = 0;
        int s1 = 0, s2 = 0;
        for(int i=1; i<=n; i++)
        {
            s1 = s[i-1];
            s2 = s[n]-s[i];
            if(s1 == s2) break;
        }
        if(s1 == s2) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}