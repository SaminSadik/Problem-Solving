#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int k, r;
    cin >> k >> r;
    int Count=0, price=k;

    while (1)
    {
        k %= 10;
        Count++;
        if((k==r) || (k==0)) break;
        else k += price;
    }
    
    cout << Count << endl;

    return 0;
}