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
        int n, k;
        cin >> n >> k;
        int a[n], sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        bool ans = true;
        if(sum/n == 0) ans = false;
        else if(sum%n == 0) ans = true;
        else if(k == 0) ans = false;
        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}