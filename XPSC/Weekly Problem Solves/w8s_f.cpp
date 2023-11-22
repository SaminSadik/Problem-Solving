#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

bool sol()
{
    int n, x;
    cin >> n >> x;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    if(x>n/2)
    {
        sort(b, b+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i] && x>max(i,n-1-i))
            {
                return false;
            }
        }
    }
    return true;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << (sol() ? "YES" : "NO") << endl;

    return 0;
}