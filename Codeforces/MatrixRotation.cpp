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
        int a[4];
        for(int i=0; i<4; i++) cin >> a[i];
        cout << ((
        ((a[0]<a[1])&&(a[0]<a[2])&&(a[2]<a[3])&&(a[1]<a[3]))||
        ((a[2]<a[0])&&(a[2]<a[3])&&(a[3]<a[1])&&(a[0]<a[1]))||
        ((a[3]<a[2])&&(a[3]<a[1])&&(a[1]<a[0])&&(a[2]<a[0]))||
        ((a[1]<a[3])&&(a[1]<a[0])&&(a[0]<a[2])&&(a[3]<a[2])) )
        ? "YES" : "NO") << endl;
    }

    return 0;
}