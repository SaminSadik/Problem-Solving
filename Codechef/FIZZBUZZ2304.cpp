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
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        bool flag = false;
        int ans = 0, odd = 0;
        for(int i=0, j=0; j<n; j++)
        {
            if(a[j]%2) odd++;
            if(j > k-2)
            {
                if(odd) ans++;
                if(a[i]%2) odd--;
                i++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}