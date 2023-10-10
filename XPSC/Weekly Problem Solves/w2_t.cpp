#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int p[n];
    for(int i=0; i<n; i++) cin >> p[i];
    sort(p, p+n);
    for(int i=0; i<n; i+=2)
    {
        if(p[i]!=p[i+1])
        {
            cout << p[i];
            break;
        }
        if(i == n-2) cout << p[i+1];
    }

    return 0;
}