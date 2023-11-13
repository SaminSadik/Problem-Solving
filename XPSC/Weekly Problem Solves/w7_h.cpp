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
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            cout << (a ? 0 : 1) << " ";
        }
        cout << endl;
    }

    return 0;
}