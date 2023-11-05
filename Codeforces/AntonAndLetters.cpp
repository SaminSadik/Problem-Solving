#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    string s;
    set<char> c;

    while(1)
    {
        cin >> s;
        if(s.size()<2) break;
        if(s[0] == '{') s[0] = s[1];
        if(s[0] != '}') c.insert(s[0]);
        if(s[s.size()-1] == '}') break;
    }

    cout << c.size();

    return 0;
}