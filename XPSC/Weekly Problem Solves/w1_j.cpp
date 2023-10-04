#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(20) << ((a-b)/a)*100;

    return 0;
}