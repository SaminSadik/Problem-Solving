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
        int n, k; 
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int K = k;
        for(int i=0; i<n; i++)
        {
            int x = a[i] % k;
            if(!x)
            {
                K = 0;
                break;
            }
            else K = min(K, (k-x));
        }

        if(k != 4) cout << K;
        else
        {
            int x = 2;
            for(int i=0; i<n; i++)
            {
                if(a[i]%2 == 0) x = max(0, (x-1));
            }
            cout << min(x, K);
        }
        cout << endl;
    }

    return 0;
}