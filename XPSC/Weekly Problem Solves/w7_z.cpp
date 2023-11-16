#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int ans=0, sum=0, rem;
    map<int, int> m; m[0]=1;
    for(int i=0; i<n; i++)
    {
        int a; cin >> a;
        sum += a;
        rem = ((n+(sum%n))%n);
        ans += m[rem];
        m[rem]++;
    }
    cout << ans << endl;

    return 0;
}