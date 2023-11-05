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
        int n; cin >> n;
        cout << "Division ";
        if(n >= 1900) cout << 1;
        else if(n >= 1600) cout << 2;
        else if(n >= 1400) cout << 3;
        else if(n < 1400) cout << 4;
        cout << endl;
    }

    return 0;
}