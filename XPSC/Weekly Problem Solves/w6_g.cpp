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
        string s; cin >> s;
        int c1 = s[0] - 'a',
            c2 = s[1] - 'a';
        int ans = (25*c1) + c2;
        if(c1>c2) ans++;
        cout << ans << endl;
    }

    return 0;
}