#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int dif(string s1, string s2)
{
    int d = 0;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] != s2[i]) d += abs(s1[i]-s2[i]);
    }
    return d;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> s;
    for(int i=0; i<n; i++)
    {
        string str; cin >> str;
        s.push_back(str);
    }
    int ans = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ans = min(ans, dif(s[i], s[j]));
            if(ans == 0) break;
        }
    }
    cout << ans << endl;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}