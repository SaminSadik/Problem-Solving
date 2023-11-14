#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define For(x,y,z) for(auto x=y; x<z; x++)

int solve()
{
    int n, k;
    cin >> n >> k;
    int a[n], h[n];
    For(i,0,n) cin >> a[i];
    For(i,0,n) cin >> h[i];
    if(n==1 && a[0]<=k) return 1;

    int ans = INT_MIN, Bk = k, l = 0;
    for(int i=0, j=0; j<n-1; j++)
    {
        if(h[j]%h[j+1])
        {
            if(a[j]<=k) ans = max(ans,l+1);
            l = 0; k = Bk; i = j+1;
        }
        else
        {
            if(a[j]<=k) l++;
            else k+=a[i++];
            k -= a[j];
        }
        ans = max(ans,l);
    }
    if(a[n-1] <= k) l++;
    return max(ans,l);
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << solve() << endl;

    return 0;
}