#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    string s; cin >> s;
    string ans = "";
    for(int i=0; i<s.size(); i+=2) ans += s[i];
    cout << ans;

    return 0;
}