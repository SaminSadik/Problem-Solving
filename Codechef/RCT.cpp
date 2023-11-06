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
        int w, l; cin >> w >> l;
        cout << ((w%2 && l%2)?"NO":"YES") << endl;
    }

    return 0;
}