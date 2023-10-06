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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            a[i] %= 2;
        }
        bool flag = true;
        for(int i=2; i<n; i+=2)
        {
            if(a[i] != a[i-2])
            {
                flag = false;
                break;
            }
        }
        for(int i=3; i<n; i+=2)
        {
            if(a[i] != a[i-2])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}