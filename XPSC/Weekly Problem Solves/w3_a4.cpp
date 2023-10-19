#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int Count = 0;
        while (n > 1)
        {
            n >>= 1;
            Count++;
        }
        cout << (1<<Count)-1 << endl;
    }

    return 0;
}