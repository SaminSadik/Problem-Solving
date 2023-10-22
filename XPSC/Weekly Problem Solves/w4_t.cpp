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
        string m; cin >> m;
        vector<char> ans;
        bool flag = true;
        for(int i=0; i<m.size(); i++)
        {
            if(!i) ans.push_back(--m[i]);
            else ans.push_back(m[i]);
            if(flag)
            {
                if(ans.back()!='0') flag = false;
                else ans.pop_back();
            }
        }
        if(!ans.size()) cout << "0";
        else for(char a : ans) cout << a;
        cout << endl;
    }

    return 0;
}