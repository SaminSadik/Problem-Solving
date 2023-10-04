#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int a, b, c, ans = -1;
    cin >> a >> b >> c;

    for(int i=2; b>=c; i++)
    {
        if(c>=a && c<=b)
        {
            ans = c;
            break;
        }
        c *= i;
    }
    cout << ans;

    return 0;
}