#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int l, r;
    cin >> l >> r;
    cout << "YES";
    for(int i=l; i<r; i+=2)
    {
        cout << endl << i << " " << i+1;
    }

    return 0;
}