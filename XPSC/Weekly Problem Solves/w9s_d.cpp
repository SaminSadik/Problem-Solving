#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

void sol()
{
    int n; cin >> n;
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        int sum=0, num=0;
        for(int j=1; j<=n; j++)
        {
            if(j<i) sum += (j*j);
            else
            {
                int x = j * (n+i-j);
                sum += x;
                num = max(x, num);
            }
        }
        ans = max(ans, sum-num);
    }
    cout << ans << endl;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) sol();

    return 0;
}