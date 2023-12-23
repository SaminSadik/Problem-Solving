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
        int n, q, a;
        cin >> n >> q;
        int c = 0, m = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            int new_c = max(c, m+a);
            m = max(m, c-a);
            c = new_c;
        }
        cout << c << endl;
    }

    return 0;
}