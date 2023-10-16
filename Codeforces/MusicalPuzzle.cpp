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
        int n; cin >> n;
        string s; cin >> s;
        set<string> S;

        for(int i=0; i<(n-1); i++)
        {
            string ss = s.substr(i, 2);
            S.insert(ss);
        }

        cout << S.size() << endl;
    }

    return 0;
}