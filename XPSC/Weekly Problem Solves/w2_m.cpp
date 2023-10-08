#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    
    vector<int> v(1001, 0);
    int m = 0, ans;
    for(int i=2; i<1001; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]%i == 0) v[i]++;
            if(v[i] == n)
            {
                cout << i;
                return 0;
            }
        }
        if(v[i]>m)
        {
            m = v[i];
            ans = i;
        }
    }
    cout << ans;

    return 0;
}