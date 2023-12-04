#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);

    if(!k) cout << (a[0]==1 ? -1 : 1);
    else if(a[k]==a[k-1]) cout << -1;
    else cout << a[k-1];

    cout << endl;
    return 0;
}