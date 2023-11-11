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
        int m[4], sum = 0;
        for(int i=0; i<4; i++)
        {
            cin >> m[i];
            sum += m[i];
        }
        bool flag = true;
        for(int i=0; i<4; i++)
        {
            if(m[i] > sum-m[i]) flag = false;
        }
        cout << (flag ? "NO" : "YES") << endl;
    }

    return 0;
}