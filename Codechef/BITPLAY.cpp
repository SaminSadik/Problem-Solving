#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int M = 1e9+7;

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int c, ans = 0;
        for(int i=2; i<n; i+=2)
        {
            int x = s[i-2]-'0', y = s[i-1]-'0', z = s[i]-'0';
            c = 0;
            if(z==(x&y)) c++;
            if(z==(x|y)) c++;
            if(z==(x^y)) c++;
            ans = ((!ans && i==2) ? c : ((ans*c)%M));
        }
        cout << ans << endl;
    }

    return 0;
}