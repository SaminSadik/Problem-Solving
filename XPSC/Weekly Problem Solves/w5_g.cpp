#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int n, h;

int calc(int x[])
{
    for(int i=n-1, p=0; i>=0; i--)
    {
        p += x[i];
        if(p >= h) return x[i];
    }
    return 0;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> h;
        int x[n];
        for(int i=0; i<n; i++) cin >> x[i];
        sort(x, x+n);
        cout << calc(x) << endl;
    }

    return 0;
}