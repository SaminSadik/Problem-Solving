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
        int n, x;
        cin >> n >> x;
        string s = to_string(n*x);
        cout << ((s.size()==5)?"YES":"NO") << endl;
    }

    return 0;
}