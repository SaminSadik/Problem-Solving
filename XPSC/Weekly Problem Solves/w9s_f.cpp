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
        int a[n], b[n];
        Loop(i,0,n) cin >> a[i];
        Loop(i,0,n) cin >> b[i];

        Loop(i,0,n)
        {
            int l = 0, r = n-1;
            while(l < r)
            {
                int m = (l+r)/2;
                if(a[i] > b[m]) l = m+1;
                else r = m;
            }
            cout << b[l] - a[i] << " ";
        }

        vector<int> a2(n, 0);
        for(int i=n-1, f=n-1; i>=0; i--)
        {
            int l = 0, r = n-1;
            while(l < r)
            {
                int m = (l+r)/2;
                if(a[i] > b[m]) l = m+1;
                else r = m;
            }
            if(l == i)
            {
                Loop(j,i,f+1) a2[j] = b[f] - a[j];
                f = l-1;
            }
        }

        cout << endl;
        for(auto x : a2) cout << x << " ";
        cout << endl;
    }

    return 0;
}