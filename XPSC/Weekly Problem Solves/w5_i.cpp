#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define Loop(x,y,z) for(auto x=y; x<z; x++)

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        Loop(i,0,n) cin >> a[i];
        sort(a.begin(), a.end());

        int l=0, r=INT_MAX-1, ans=0;
        while(l <= r)
        {
            int m = (l+r)/2,
            c = 0, x = 0;
            Loop(i,0,n)
            {
                if(a[i]-a[x] > (2*m)){
                    x = i;
                    c++; }
            }
            if(c<3) {
                ans = m;
                r = m-1;
            } else l = m+1;
        }
        cout << ans << endl;
    }

    return 0;
}