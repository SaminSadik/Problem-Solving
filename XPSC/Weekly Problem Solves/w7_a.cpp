#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    int lcm = (a*b)/__gcd(a,b);
    int red=n/a, blue=n/b, both=n/lcm;

    (p>q) ? blue-=both : red-=both;
    cout << (red*p) + (blue*q) << endl;

    return 0;
}