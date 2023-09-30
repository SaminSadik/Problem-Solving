#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    string s; cin >> s;

    int anton=0, danik=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A') anton++;
        else if(s[i]=='D') danik++;
    }
    if(anton>danik) cout << "Anton\n";
    else if(danik>anton) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}