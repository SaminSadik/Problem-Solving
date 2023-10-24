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
        if(n == 3) cout << -1;
        else
        {
            vector<int> p;
            for(int i=n; i>0; i--) p.push_back(i);
            if(n == 5) swap(p[0], p[2]);
            else if(n%2) swap(p[n/2], p[1+(n/2)]);
            for(int f : p) cout << f << " ";
        }
        cout << endl;
    }

    return 0;
}