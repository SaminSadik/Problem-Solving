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
        int a[n], total = 0, Min = INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            total += a[i];
            Min = min(Min, a[i]);
        }
        cout << total - Min << endl;
    }

    return 0;
}