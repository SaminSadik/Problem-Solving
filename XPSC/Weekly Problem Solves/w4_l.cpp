#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++) cin >> s[i];
    unordered_set<string> filter;
    string ans = "";
    for(int i=n-1; i>=0; i--)
    {
        if(filter.find(s[i])==filter.end())
        {
            filter.insert(s[i]);
            int l = s[i].size();
            ans += s[i].substr(l-2, 2);
        }
    }
    cout << ans;

    return 0;
}