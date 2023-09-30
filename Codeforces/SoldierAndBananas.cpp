#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int k, n, w, total=0;
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++)
    {
        total += (i*k);
    }
    if(total-n > 0) cout << total-n;
    else cout << "0";

    return 0;
}