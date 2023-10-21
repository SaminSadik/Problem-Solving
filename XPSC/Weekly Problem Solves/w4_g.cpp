#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int evn = 0, odd = 0, sum = 0;
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            sum += a;
            if(a%2) odd++;
            else evn++;
        }
        while(q--)
        {
            int o, v;
            cin >> o >> v;
            if(o == 0)
            {
                sum += (evn * v);
                if(v%2) { odd+=evn; evn=0; }
            }
            if(o == 1)
            {
                sum += (odd * v);
                if(v%2) { evn+=odd; odd=0; }
            }
            cout << sum << endl;
        }
    }

    return 0;
}