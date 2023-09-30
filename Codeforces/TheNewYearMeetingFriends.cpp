#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int a, b, c;
    cin >> a >> b >> c;
    int ar[] = {a, b, c};
    sort(ar, ar+3);

    int ans = (ar[1]-ar[0]) + (ar[2]-ar[1]);
    cout << ans << endl;

    return 0;
}