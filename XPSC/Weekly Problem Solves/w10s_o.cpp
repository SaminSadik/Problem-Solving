#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);

    cout << (n%2 ? n/2 : n/2 - 1) << endl;
    for(int i=0; i<n/2; i++)
    {
        cout << a[n-1-i] << " " << a[i] << " ";
    }
    if(n%2) cout << a[n/2];

    return 0;
}