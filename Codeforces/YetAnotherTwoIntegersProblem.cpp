#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        int ans = 0;
        if(a != b)
        {
            if(a>b)
            {
                ans = (a-b)/10;
                if((a-b)%10) ans++;
            }
            else
            {
                ans = (b-a)/10;
                if((b-a) % 10) ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}