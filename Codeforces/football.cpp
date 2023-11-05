#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    string s; cin >> s;
    int c = 1;
    for(int i=0; i<s.size(); i++)
    {
        if(c==7) break;
        if(s[i]==s[i+1]) c++;
        else c = 1;
    }
    if(c==7) cout << "YES";
    else cout << "NO";

    return 0;
}