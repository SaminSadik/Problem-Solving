#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        
        if((n/2)%2) cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(int i=2; i<=n; i+=2) cout << i << " ";
            for(int i=1; i<n-2; i+=2) cout << i << " ";
            int sum = (n/2)*((n/2)+1), last = (n/2)-1;
            cout << sum - (last*last) << endl;
        }
    }

    return 0;
}