#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

void solve()
{
        int n; cin >> n;
        for(int i=0; i<=(n-3); i++)
        {
            if(i%3 == 0) continue;
            for(int j=0; j<(n-i); j++)
            {
                if((j%3 == 0) || (j==i)) continue;
                int k = n - i - j;
                if(k%3 && k>0 && k!=i && k!=j)
                {
                    cout << "YES\n" << i << " " << j << " " << k << endl;
                    return;
                }
            }
        }
        cout << "NO\n";
        return;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}