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
        if(n < 2*k) cout << "NO";
        else
        {
            int x = n/2 + n%2;
            cout << ((x-k)%2 ? "NO" : "YES");
        }
        cout << endl;
    }

    return 0;
}