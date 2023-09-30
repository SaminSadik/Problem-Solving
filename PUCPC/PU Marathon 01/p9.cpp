#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n, b, h, w;

    while(cin >> n >> b >> h >> w)
    {
        int ans = INT_MAX;
        bool flag=false;
        for(int i=0; i<h; i++)
        {
            int p; cin >> p;
            for(int j=0; j<w; j++)
            {
                int a; cin >> a;
                if((p*n <= b) && (a>=n))
                {
                    if(ans > p*n) ans = p*n;
                    flag = true;
                }
            }
        }

        if(flag) cout << ans << endl;
        else cout << "stay home\n";
    }
    return 0;
}