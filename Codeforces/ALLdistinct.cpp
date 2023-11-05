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
        vector<int> a;
        set<int> filter;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            a.push_back(x);
            filter.insert(x);
        }
        int s = filter.size();
        if((n-s)%2) cout << s-1;
        else cout << s;
        cout << endl;
    }

    return 0;
}