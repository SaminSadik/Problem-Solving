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
        int x = n/3, y = n%3;
        int a = x, b = x+2, c = x-1;
        if(!y) b--;
        if(y==2) a++;
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}