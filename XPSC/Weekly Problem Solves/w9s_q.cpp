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
        string s; cin >> s;

        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int sum = 0, mnm = INT_MAX, flag = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                flag = 1;
                sum += a[i];
                mnm = min(mnm, a[i]);
            }
            if(s[i]=='0' && flag==1)
            {
                flag = 0;
                sum += (a[i]-min(mnm,a[i]));
                mnm = INT_MAX;
            }
        }
        cout << sum << endl;
    }

    return 0;
}