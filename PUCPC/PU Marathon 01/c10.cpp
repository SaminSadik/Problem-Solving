#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n; cin >> n;
        int ans = 0;
        while(n--)
        {
            int c; cin >> c;
            if(c>ans) ans = c;
        }
        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}