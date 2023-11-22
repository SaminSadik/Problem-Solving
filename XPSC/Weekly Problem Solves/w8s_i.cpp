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
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            int j = 2;
            while(j<=i+2)
            {
                if(x % j) break;
                j++;
            }
            if(j>i+2) flag = false;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}