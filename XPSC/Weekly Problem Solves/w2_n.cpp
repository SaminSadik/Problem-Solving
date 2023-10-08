#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    string s, t;
    cin >> s >> t;
    int dif = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=t[i]) dif++;
    }
    cout << dif;

    return 0;
}