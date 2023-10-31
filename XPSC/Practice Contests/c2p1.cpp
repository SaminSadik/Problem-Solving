#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, k;
    cin >> n >> k;
    for(int i=0; i<k; i++)
    {
        if(n%10) n--;
        else n /= 10;
    }
    cout << n;

    return 0;
}