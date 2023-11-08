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
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        int w = 0;
        for(int i=0; i<k; i++)
        {
            if(s[i]=='W') w++;
        }
        int ans = w;
        for(int i=k, j=0; i<n; i++, j++)
        {
            if(s[i]=='W') w++;
            if(s[j]=='W') w--;
            ans = min(ans, w);
        }
        cout << ans << endl;
    }

    return 0;
}