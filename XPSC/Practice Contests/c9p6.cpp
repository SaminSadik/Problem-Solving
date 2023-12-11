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
        for(int i=0; i<n; i++) cin >> a[i];
        int evn = -1, odd = -1;
        bool flag = true;
        for(int i=0; i<n && flag; i++)
        {
            if(a[i]%2)
            {
                if(odd>a[i]) flag = false;
                else odd = a[i];
            }
            else
            {
                if(evn>a[i]) flag = false;
                else evn = a[i];
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}