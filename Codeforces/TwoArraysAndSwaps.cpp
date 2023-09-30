#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n, k, sum=0;
        cin >> n >> k;
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for(int i=0; i<n; i++) cin >> b[i];

        sort(a, a+n);
        sort(b, b+n, greater<int>());
        for(int i=0; i<k; i++)
        {
            if(a[i]>=b[i]) break;
            sum += (b[i]-a[i]);
            swap(a[i], b[i]);
        }
        cout << sum << endl;
    }

    return 0;
}