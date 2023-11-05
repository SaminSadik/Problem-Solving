#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], uneven = 0, unodd = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(i%2)
            {
                if(a[i]%2 == 0) unodd++;
            }
            else
            {
                if(a[i]%2) uneven++;
            }
        }
        if(uneven == unodd) cout << unodd << endl;
        else cout << -1 << endl;
    }

    return 0;
}