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
        int n; cin >> n;
        int bits[30] = {0};
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            for(int x=0; x<30; x++)
            {
                if((a>>x)&1) bits[x]++;
            }
        }
        
        for(int i=1; i<=n; i++)
        {
            bool ok = 1;
            for(int x=0; x<30 && ok; x++)
            {
                if(bits[x]%i) ok = false;
            }
            if(ok) cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}