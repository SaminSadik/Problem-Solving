#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int a; cin >> a;
        if(a%2==0 && a%7==0) cout << "ALICE";
        else if(a%9==0 && a%2) cout << "BOB";
        else cout << "CHARLIE";
        cout << endl;
    }

    return 0;
}