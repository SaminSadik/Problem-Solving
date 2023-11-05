#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int a[4];
    for(int i=0; i<4; i++) cin >> a [i];
    sort(a, a+4);

    cout << a[3]-a[2] <<" "<< a[3]-a[1] <<" "<< a[3]-a[0] << endl; 

    return 0;
}