#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    int current_passangers = 0, ans = 0;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        current_passangers += (b-a);
        if(current_passangers>ans) ans = current_passangers;
    }
    cout << ans;

    return 0;
}