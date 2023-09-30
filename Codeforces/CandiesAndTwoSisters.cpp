#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n%2) cout << n/2 << endl;
        else cout << n/2 - 1 << endl;
    }

    return 0;
}