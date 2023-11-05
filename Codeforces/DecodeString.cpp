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
        string s; cin >> s;
        string ans = "";
        int x; char y;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                x = ((s[i-2]-'0')*10)+(s[i-1]-'0');
                y = ('`'+x);
                i -= 2;
            }
            else
            {
                x = (s[i]-'0');
                y = ('`'+x);
            }
            ans += y;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}