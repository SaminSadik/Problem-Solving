#include <bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int m, n, k, rem;
    cin >> m >> n >> k;
    //cout << fixed << setprecision(k) << m/n;

    string ans = "";
    for(int i=0; i<=k; i++)
    {
        string s = to_string(m/n);
        ans += s;
        if(!i) ans += ".";
        m = (m%n) ? (m%n)*10 : 0 ;
        /* if(m%n)
        {
            string tem = to_string(n - (m%n));
            int ten = pow(10, tem.size());
            m = (m%n) * ten;
        }
        else m = 0; */
    }
    cout << ans;
    //cout << endl << ans.size();

    return 0;
}