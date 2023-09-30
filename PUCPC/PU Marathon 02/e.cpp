#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int x, ans=0;
    cin >> x;
    while(x>1)
    {
        if(x%2)
        {
            x--;
            ans++;
        }
        else x/=2;
    }
    cout << ans+1 << endl;

    return 0;
}