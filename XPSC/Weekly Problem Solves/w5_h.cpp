#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define Loop(x,y,z) for(auto x=y; x<z; x++)
#define All(v) v.begin(),v.end()

signed main()
{
    SSK

    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    Loop(i,0,n) cin >> h[i];
    sort(All(h));
    int sum = 0, ans = h[0];
    Loop(i,1,n) sum += (h[i]-h[0]);
    if(m > sum)
    {
        while(m > sum)
        {
            ans--;
            sum += n;
        }
    }
    else if(m < sum)
    {
        int ind = 0;
        while(m < sum)
        {
            Loop(i,ind,n)
            {
                if(h[i]>ans)
                {
                    sum -= (n-i);
                    ind = i;
                    break;
                }
                if(i == n-1) sum-=n;
            }
            ans++;
        }
        if(sum < m) ans--;
    }
    cout << ans << endl;

    return 0;
}