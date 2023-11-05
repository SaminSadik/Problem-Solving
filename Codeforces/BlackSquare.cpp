#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int a, b, c, d, ans = 0;
    string s;
    cin >> a >> b >> c >> d >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1') ans += a;
        else if(s[i]=='2') ans += b;
        else if(s[i]=='3') ans += c;
        else if(s[i]=='4') ans += d;
    }
    cout << ans << endl;

    return 0;
}