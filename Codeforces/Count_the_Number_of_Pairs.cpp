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
        string s;
        int n, k, ans = 0;
        cin >> n >> k >> s;
        vector<int> up(26, 0), lo(26, 0);
        for(int i=0; i<n; i++)
        {
            if(s[i]<='Z') up[(int)(s[i]-'A')]++;
            else lo[(int)(s[i]-'a')]++;
        }
        for(int i=0; i<26; i++)
        {
            int dif = abs(up[i]-lo[i]);
            if(k && dif)
            {
                ans += min(k, dif/2);
                k -= min(k, dif/2);
            }
            if(up[i] && lo[i]) ans += min(up[i], lo[i]);
        }
        cout << ans << endl;
    }


    return 0;
}