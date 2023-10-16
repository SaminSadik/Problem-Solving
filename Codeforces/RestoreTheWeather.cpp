#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;

    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<pair<int, int>> a;
        vector<int> b;
        int c[n];
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            a.push_back(make_pair(x, i));
        }
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            b.push_back(x);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i=0; i<n; i++)
        {
            c[a[i].second] =  b[i];
        }

        for(auto e : c) cout << e << " ";
        cout << endl;

        /*
        cout << endl;
        for(auto e : a) cout << e.first << " " << e.second << endl;
        cout << endl;
        for(auto e : b) cout << e << " ";
        cout << endl << endl;
        */
    }

    return 0;
}