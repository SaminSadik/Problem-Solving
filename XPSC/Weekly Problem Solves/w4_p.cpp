#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int sum = 0;
        while(n)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << endl;
    }

    return 0;
}