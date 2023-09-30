#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    int Count = 0;
    while(n--)
    {
        int p, q;
        cin >> p >> q;
        if((q-p)>=2) Count++;
    }
    cout << Count;

    return 0;
}