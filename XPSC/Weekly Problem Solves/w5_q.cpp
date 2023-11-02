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
        int n = s.size();

        vector<int> f[26];
        for(int i=0; i<n; i++)
        {
            f[s[i]-'a'].push_back(i);
        }

        int cur = s[0]-'a', des = s[n-1]-'a';
        cout << abs(des-cur) << " ";
        vector<int> ans;
        while(1)
        {
            for(auto i : f[cur]) ans.push_back(i+1);
            if(cur == des) break;
            (cur < des) ? cur++ : cur--;
        }
        cout << ans.size() << endl;
        for(int tile : ans) cout << tile << " ";
        cout << endl;
    }

    return 0;
}