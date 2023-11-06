#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

vector<int> p;
void PreSet()
{
    for(int i=0; i<(1<<15); i++)
    {
        string s = to_string(i);
        string x = s;
        reverse(x.begin(), x.end());
        if(s == x) p.push_back(i);
    }
}

signed main()
{
    SSK

    PreSet();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        unordered_map<int, int> m;
        for(int i=0; i<n; i++) cin >> a[i];
        int ans = 0;
        for(int i : a)
        {
            m[i]++;
            for(int j : p)
            {
                ans += m[(i^j)];
            }
        }
        cout << ans << endl; 
    }
    

    return 0;
}