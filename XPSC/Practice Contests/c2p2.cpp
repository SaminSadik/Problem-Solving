#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, maxT = 0;
    string s, ans;
    map<string, int> m;

    cin >> n >> s;
    for(int i=0; i<n-1; i++)
    {
        m[s.substr(i, 2)]++;
    }
    for(auto& i : m)
    {
        if(i.second > maxT)
        {
            maxT = i.second;
            ans = i.first;
        }
    }
    cout << ans;

    return 0;
}