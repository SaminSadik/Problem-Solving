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
        int n; cin >> n;
        int f[11][11] = {0}, l[11] = {0}, r[11] = {0};
        vector<string> s;
        while(n--)
        {
            string x; cin >> x;
            s.push_back(x);

            int c1 = x[0]-'a', c2 = x[1]-'a';
            f[c1][c2]++;
            l[c1]++; r[c2]++;
        }
        int ans = 0, z = 0;
        for(int i=0; i<s.size(); i++)
        {
            int c1 = s[i][0]-'a', c2 = s[i][1]-'a';
            int cng = max(l[c1]-f[c1][c2], z) + max(r[c2]-f[c1][c2], z);
            ans += cng;
            if(l[c1]) l[c1]--;
            if(r[c2]) r[c2]--;
            if(f[c1][c2]) f[c1][c2]--;
        }
        cout << ans << endl;
    }

    return 0;
}
