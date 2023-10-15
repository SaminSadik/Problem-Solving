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
        string s; cin >> s;
        if(n > 5)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(s.begin(), s.end());
        string Timur = "Timur";
        sort(Timur.begin(), Timur.end());
        cout << ((s == Timur) ? "YES" : "NO") << endl;
    }

    return 0;
}