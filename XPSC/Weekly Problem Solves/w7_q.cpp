#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int max1st = 0, max2nd = 0;
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            if(a>max1st)
            {
                max2nd = max1st;
                max1st = a;
            }
            else if(a!=max1st) max2nd = max(a,max2nd);
        }
        cout << max1st + max2nd << endl;
    }

    return 0;
}