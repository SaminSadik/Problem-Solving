#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int Dsum(int m)
{
    int sum = 0;
    while(m)
    {
        sum += (m%10);
        m /= 10;
    }
    return sum;
}

signed main()
{
    SSK

    int n, s;
    cin >> n >> s;
    int l=1, r=n, ans=0;
    while(l<=r)
    {
        int m = (l+r)/2;
        if((m-Dsum(m)) >= s)
        {
            ans = n - m+1;
            r = m - 1;
        }
        else l = m + 1;
    }
    cout << ans;

    return 0;
}