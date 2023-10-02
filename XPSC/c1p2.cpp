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
        string s; cin >> s;
        int sum1 = 0, sum2 = 0;
        for(int i=0, j=5; i<3; i++, j--)
        {
            sum1 += ((int)s[i]-'0');
            sum2 += ((int)s[j]-'0');
        }
        cout << ((sum1 == sum2) ? "YES" : "NO") << endl;
    }

    return 0;
}