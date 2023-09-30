#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;

    while(t--)
    {
        double a, b;
        cin >> a >> b;
        cout << fixed << setprecision(9) << a * b * 0.5 << endl;
    }
    
    return 0;
}