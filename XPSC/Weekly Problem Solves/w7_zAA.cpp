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
        int n, m;
        cin >> n >> m;
        int a[n], sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for(int i=0; i<m; i++)
        {
            int b; cin >> b;
            sort(a, a+n);
            sum += (b-a[0]);
            a[0] = b;
        }
        cout << sum << endl;
    }

    return 0;
}