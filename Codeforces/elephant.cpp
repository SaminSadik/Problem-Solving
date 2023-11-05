#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int x, Count=1;
    cin >> x;
    while(x>5)
    {
        x-=5;
        Count++;
    }
    cout << Count;

    return 0;
}