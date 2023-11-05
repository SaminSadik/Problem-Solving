#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int a[n], sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(sum%2)
    {
        if(n>1)
        {
            sort(a, a+n);
            for(int i=0; i<n; i++)
            {
                if((sum-a[i])%2==0)
                {
                    sum -= a[i];
                    break;
                }
            }
        }
        else sum = 0;
    }
    
    cout << sum;

    return 0;
}