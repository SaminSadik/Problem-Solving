#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9+7;

signed main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], x = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            x = (x ^ a[i]);
        }
        if(n%2) cout << x;
        else if(x) cout << -1;
        else cout << 0;
        cout << endl;
    }

    return 0;
}