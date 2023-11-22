#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    for(int i=0; i<n/2; i++)
    {
        if(i%2) cout << "aa";
        else cout << "bb";
    }
    if(n%2)
    {
        if(n%4 == 3) cout << "a";
        if(n%4 == 1) cout << "b";
    }

    return 0;
}