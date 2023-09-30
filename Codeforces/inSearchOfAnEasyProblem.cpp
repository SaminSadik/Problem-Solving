#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    bool ans = true;
    for(int i=0; i<n; i++)
    {
        int a; cin >> a;
        if(a==1) ans = false;
    }
    if(ans) cout << "EASY";
    else cout << "HARD";

    return 0;
}