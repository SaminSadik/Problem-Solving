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
        int a[n];
        Loop(i,0,n) cin >> a[i];

        int op = 0;
        for(int i=n-1; i>0; i--)
        {
            while(a[i]<=a[i-1])
            {
                if(!a[i-1])
                {
                    op = -1;
                    break;
                }
                a[i-1]/=2;
                op++;
            }
            if(op<0) break;
        }
        cout << op << endl;
    }

    return 0;
}