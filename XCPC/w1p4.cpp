#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int a, b;
    cin >> a >> b;

    int m = max(a,b), n = min(a,b);
    cout << m + max(m-1, n);

    return 0;
}