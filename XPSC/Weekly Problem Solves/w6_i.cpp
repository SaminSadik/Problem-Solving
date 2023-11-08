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
        string w; cin >> w;
        int p; cin >> p;
        
        int sum = 0;
        vector<pair<int, int>> v;
        for(int i=0; i<w.size(); i++)
        {
            int x = w[i]-'`';
            sum += x;
            v.push_back({x,i});
        }

        sort(v.rbegin(), v.rend());
        vector<int> del;
        for(int i=0; sum>p; i++)
        {
            sum -= v[i].first;
            del.push_back(v[i].second);
        }

        sort(del.begin(), del.end());
        string ans = "";
        for(int i=0,j=0; i<w.size(); i++)
        {
            if(j<del.size() && i==del[j]) j++;
            else ans += w[i];
        }
        cout << ans << endl;
    }

    return 0;
}