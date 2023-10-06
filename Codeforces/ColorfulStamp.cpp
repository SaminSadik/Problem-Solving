#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

bool check(vector<string> comps)
{
    for(auto c : comps)
    {
        set<char> filter;
        for(int i=0; i<c.size(); i++)
        {
            filter.insert(c[i]);
        }
        if(c.size()==1 || filter.size()==1)
        {
            return false;
        }
        //cout << c << endl;
    }
    return true;
}

signed main()
{
    SSK

    int t; cin >> t;
    //t = 1;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        vector<string> comps;
        int j = 0, k= 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='W')
            {
                if(k>0) comps.push_back(s.substr(j,k));
                k = 0;
                j = i+1;
            }
            else k++;
        }
        if(k > 0) comps.push_back(s.substr(j,k));
        cout << (check(comps) ? "YES" : "NO") << endl;
    }

    return 0;
}