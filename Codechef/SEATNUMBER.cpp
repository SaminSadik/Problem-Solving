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
        int n; cin >> n;
        if(n>25) cout << "Upper Single";
        else if(n>15) cout << "Upper Double";
        else if(n>10) cout << "Lower Single";
        else cout << "Lower Double";
        cout << endl;
    }

    return 0;
}