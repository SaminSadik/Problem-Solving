#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int a, b, c=0;
    cin >> a >> b;
    while(a<=b)
    {
        a *= 3;
        b *= 2;
        c++;
    }
    cout << c;

    return 0;
}