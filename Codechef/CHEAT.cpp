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
        int n; cin >> n;
        if (n>1 && n<9) cout << 1;
        else if(n < 2) cout << 0;
        else cout << (n-2)/7 + 1;
        cout << endl;
    }

    return 0;
}