#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

string rev(string a)
{
    reverse(a.begin(), a.end());
    return a;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        vector<string> ans;
        for(int i=0; i<(n-1); i++)
        {
            string x = s.substr(i, 2);
            if(!i || (ans.back()!=x && rev(ans.back())!=x))
            ans.push_back(x);
        }
        cout << ans.size() << endl;
    }

    return 0;
}