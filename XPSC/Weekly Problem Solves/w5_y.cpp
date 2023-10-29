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
        unordered_set<char> c;
        int ans = 1;
        for(int i=0; i<s.size(); i++)
        {
            if(!c.count(s[i]) && c.size()==3)
            {
                c.clear();
                ans++;
            }
            c.insert(s[i]);
        }
        cout << ans << endl;
    }

    return 0;
}