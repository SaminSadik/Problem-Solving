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
        bool flag = true;
        int min_dif = INT_MAX, max_dif = INT_MIN;
        Loop(i,0,n)
        {
            int dif = a[i] - b[i];
            if(b[i]) min_dif=min(min_dif,dif);
            max_dif = max(max_dif, dif);
            if(dif<0 || max_dif>min_dif)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}