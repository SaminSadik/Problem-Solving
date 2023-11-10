#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int N = 1e6;

bool solve()
{
    int x; cin >> x;
    if(x < 2) return false;

    if(x<N) cout << 1 << " " << 1 << " " << x-1;
    else if(x%N) cout << N << " " << x/N << " " << x%N;
    else cout << N << " " << x/N -1 << " " << N;
    cout << endl;
    
    return true;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) if(!solve()) cout << -1 << endl;

    return 0;
}