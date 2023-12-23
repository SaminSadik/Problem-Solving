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
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        map<int, int> m;
        int c = 0;
        for(int i=0; i<n; i++)
        {
            c += m[a[i]-i-1];
            m[a[i]-i-1]++;
        }
        cout << c << endl;
    }

    return 0;
}