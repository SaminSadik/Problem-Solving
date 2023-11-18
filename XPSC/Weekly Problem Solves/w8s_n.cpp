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
        int n, k; 
        cin >> n >> k;

        vector<int> nx, px;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            if(x<0) nx.push_back(abs(x));
            else px.push_back(x);
        }
        sort(px.rbegin(), px.rend());
        sort(nx.rbegin(), nx.rend());

        int ans = 0, far = 0;
        for(int i=0; i<px.size(); i+=k)
        {
            if(!i)
            {
                far = px[i];
                continue;
            }
            ans += (px[i]*2);
        }
        for(int i=0; i<nx.size(); i+=k)
        {
            if(!i && nx[i]>far)
            {
                int temp = far;
                far = nx[i];
                nx[i] = temp;
            }
            ans += (nx[i]*2);
        }
        cout << ans+far << endl;
    }

    return 0;
}