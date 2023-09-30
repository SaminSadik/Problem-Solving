#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n, k;
    cin >> n >> k;
    for(int i=0; i<k; i++)
    {
        if(n%10) n--;
        else n/=10;
    }
    cout << n;

    return 0;
}