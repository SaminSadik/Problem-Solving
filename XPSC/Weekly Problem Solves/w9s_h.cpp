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
        map<int, bool> m;
        for(int i=1; i<=n; i++)
        {
            if(m[i]) continue;
            for(int j=i; j<=n; j*=2)
            {
                cout << j << " ";
                m[j] = true;
            }
        }
        cout << endl;
    }

    return 0;
}