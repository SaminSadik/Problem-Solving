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
        vector<int> a(n), b(n, 1);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<vector<int>> IJ(101);
        for(int i=0; i<n; i++) IJ[a[i]].push_back(i);

        int con = 2;
        for(int i=1; i<101; i++)
        {
            if(IJ[i].size() > 1)
            {
                b[IJ[i][0]] = con++;
                if(con > 3) break;
            }
        }

        if(con>3) for(int x : b) cout << x << " ";
        else cout << -1;
        cout << endl;
    }

    return 0;
}