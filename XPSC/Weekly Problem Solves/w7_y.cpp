#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, x;
    cin >> n >> x;
    int a[n], sum=0, ans=0;
    for(int i=0; i<n; i++) cin >> a[i];

    map<int,int> m; m[0]=1;
    for(auto i : a)
    {
        sum += i;
        ans += m[sum-x];
        m[sum]++;
    }
    cout << ans << endl;

    return 0;
}