#include <bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a>b) cout << ">\n";
        else if(a<b) cout << "<\n";
        else cout << "=\n";
    }

    return 0;
}