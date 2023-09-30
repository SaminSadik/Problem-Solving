#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int s, t, ans = 0;
    cin >> s >> t;
    for(int i=0; i<101; i++)
    {
        for(int j=0; j<101; j++)
        {
            for(int k=0; k<101; k++)
            {
                if((i+j+k <= s) && (i*j*k <= t)) ans++;
            }
        }
    }
    cout << ans;

    return 0;
}