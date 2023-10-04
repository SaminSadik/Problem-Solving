#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, ans = 0;
    string s;
    cin >> n >> s;
    for(int i=2; i<n; i++)
    {
        if(s[i-2]=='A' && s[i-1]=='B' && s[i]=='C')
        {
            ans++;
            i += 2;
        }
    }
    cout << ans;

    return 0;
}