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
    	vector<string> vs(n);
        unordered_set<string> c;
    	for(int i=0; i<n; i++)
        {
            cin >> vs[i];
            c.insert(vs[i]);
        }

        string ans = "";
        for(int i=0; i<n; i++)
        {
            bool found = false;
            for(int j=1; j<=vs[i].size() && !found; j++)
            {
                if(c.count(vs[i].substr(0, j)) && c.count(vs[i].substr(j)))
                {
                    found = true;
                }
            }
            ans += (found ? "1" : "0");
        }

    	cout << ans << endl;
    }

    return 0;
}