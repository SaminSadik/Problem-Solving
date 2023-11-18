#include <bits/stdc++.h>
using namespace std;

#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a = n/2, b = (n/2)-1;
        if(n%2)
        {
            a = (n-1)/2 - 1;
            b = (n-1)/2 + 1;
            if((n-1)%4){ a--; b++; }
        }
        cout << a << " " << b << " 1\n";
    }

    return 0;
}