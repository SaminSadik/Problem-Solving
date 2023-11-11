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
        double n, m;
        cin >> n >> m;
        n *= 0.9;
        if(n<m) cout << "ONLINE\n";
        else if(n>m) cout << "DINING\n";
        else cout << "EITHER\n";
    }

    return 0;
}