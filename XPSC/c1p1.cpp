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
        int r; cin >> r;
        cout << "Division ";
        if(r > 1899) cout << "1";
        else if(r<1900 && r>1599) cout << "2";
        else if(r<1600 && r>1399) cout << "3";
        else cout << "4";
        cout << endl;
    }

    return 0;
}