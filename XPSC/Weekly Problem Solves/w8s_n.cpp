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
        map<int,bool> m;
        vector<int> v;
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            if(!m[a] && a<=n) m[a]=1;
            else
            {
                ans++;
                v.push_back(a);
            }
        }
        sort(v.begin(), v.end());
        bool flag = 1;
        for(int i=1, j=0; i<=n && flag; i++)
        {
            if(!m[i])
            {
                if(v[j] < (2*i + 1)) flag = 0;
                else j++;
            }
        }
        cout << (flag ? ans : -1) << endl;
    }

    return 0;
}