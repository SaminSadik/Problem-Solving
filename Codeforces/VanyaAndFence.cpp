#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n, h;
    cin >> n >> h;

    int ans = n, a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) if(a[i]>h) ans++;
    
    cout << ans;

    return 0;
}