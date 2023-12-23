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
        int x; cin >> x;
        vector<int> a;
        while(x)
        {
            a.push_back(x);
            if(x&(x-1)) x -= (x & -x);
            else x >>= 1;
        }
        cout << a.size() << endl;;
        for(auto i: a) cout << i << " ";
        cout << endl;
    }

    return 0;
}