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
        int n, a, b, p;
        string s;
        cin >> n >> s;
        a = b = p = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B') {p ? b++ : p++;}
            else {p ? p-- : a++;}
        }
        cout << a << " " << b << endl;
    }

    return 0;
}