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
        string n; cin >> n;
        vector<int> v;
        int s = n.size();

        for(int i=0; i<n.size(); i++)
        {
            s--;
            int x = n[i] - '0';
            x *= pow(10, s);
            if(x) v.push_back(x);
        }

        cout << v.size() << endl;
        for(auto e : v) cout << e << " ";
        cout << endl;
    }

    return 0;
}