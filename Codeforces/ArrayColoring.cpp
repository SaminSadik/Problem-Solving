#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], odd = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]%2) odd++;
        }
        if(odd%2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}