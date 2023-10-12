#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int k, ans = 0;
    cin >> k;
    
    for (int a=1; a<=k; a++) {
        for (int b=1; b<=k; b++) {
            for (int c=1; c<=k; c++) {
                ans += __gcd(a, __gcd(b, c));
            }
        }
    }
    cout << ans;

    return 0;
}