#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    cout << n/2 << endl;
    while(n > 3)
    {
        cout << 2 << " ";
        n -= 2;
    }
    cout << (n%2 ? 3 : 2) << endl;

    return 0;
}