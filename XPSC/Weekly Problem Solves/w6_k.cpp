#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int a, b, c;
    cin >> a >> b;
    c = a + b + (a * b);
    cout << (c==111 ? "Yes" : "No");

    return 0;
}