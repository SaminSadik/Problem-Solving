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
        string s; cin >> s;
        int first = 0, last = 0;
        for(int i=0; i<6; i++)
        {
            int x = (int)s[i] - '0';
            if(i<3) first += x;
            else last += x;
        }

        if(first == last) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}