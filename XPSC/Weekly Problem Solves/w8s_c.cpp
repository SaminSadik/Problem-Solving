#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int sum = (n*(n+1))/2;
        if(sum%n)
        {
            cout << n*((sum/n)+1) - sum + 1;
        }
        else cout << 1;
        for(int i=2; i<=n; i++) cout << " " << i;
        cout << endl;
    }

    return 0;
}