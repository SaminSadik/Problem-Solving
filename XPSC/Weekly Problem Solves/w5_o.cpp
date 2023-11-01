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
        int a, b, c;
        cin >> a >> b >> c;
        int x = a-1, y = abs(b-c) + (c-1);
        if(x<y) cout << 1 << endl; 
        else if(x>y) cout << 2 << endl;
        else cout << 3 << endl;
    }

    return 0;
}