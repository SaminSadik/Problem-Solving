#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int y; cin >> y;
    int ans = y+1;
    while(1)
    {
        string s = to_string(ans);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3])
        {
            cout << ans << endl;
            break;
        }
        ans++;
    }

    return 0;
}