#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n,m,x,y,d;
        cin >> n >> m >> x >> y >> d;
        if((x+d<n && y-d>1) || (x-d>1 && y+d<m)) cout << n+m-2;
        else cout << -1;
        cout << endl;
    }

    return 0;
}