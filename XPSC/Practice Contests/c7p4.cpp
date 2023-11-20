#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

bool sol()
{
    int n, a, b;
    cin >> n >> a >> b;
    if(b==1) return true;
    if(a==1) return ((n-1)%b == 0);
    for(int i=1; i<=n; i*=a)
    {
        if((n-i)%b == 0) return true;
    }
    return false;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << (sol()?"Yes":"No") << endl;

    return 0;
}