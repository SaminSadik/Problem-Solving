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
        vector<vector<int>> ans;
        int val = 1, sign = 1, dif = n*n -1;
        for(int i=0; i<n; i++)
        {
            vector<int> v;
            for(int j=0; j<n; j++)
            {
                v.push_back(val);
                val += (sign*dif);
                sign *= -1;
                dif--;
            }
            if(i%2) reverse(v.begin(), v.end());
            ans.push_back(v);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++) cout << ans[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}