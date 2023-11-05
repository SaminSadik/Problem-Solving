#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    IOS

    string Yes = "";
    for(int i=1; i<20; i++) Yes += "Yes";
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        cout << ((Yes.find(s)!=-1) ? "YES" : "NO") << endl;
    }

    return 0;
}