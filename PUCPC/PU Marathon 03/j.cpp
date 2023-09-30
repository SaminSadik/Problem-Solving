#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    double n, m, a;
    cin >> n >> m >> a;

    int len = ceil(n/a), wid = ceil(m/a);
    cout << len*wid;
    
    return 0;
}