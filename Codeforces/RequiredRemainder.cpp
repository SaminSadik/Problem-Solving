#include<bits/stdc++.h>
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
        int x, y, n;
        cin >> x >> y >> n;
        int k = (x * (n/x)) + y;
        if(k>n) k -= x;
        cout << k << endl;
    }

    return 0;
}