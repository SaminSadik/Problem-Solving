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
        int x, y, a, b;
        cin >> x >> y;
        a = 1;
        if(x==y) b = 1;
        else if(x<=y && !(y%x)) b = y/x;
        else a = b = 0;
        cout << a << " " << b << endl;
    }

    return 0;
}