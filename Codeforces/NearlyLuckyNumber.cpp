#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    string n; cin >> n;
    int cnt=0;
    for(int i=0; i<n.size(); i++) if(n[i]=='4' || n[i]=='7') cnt++;
    if(cnt==4 || cnt==7) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}