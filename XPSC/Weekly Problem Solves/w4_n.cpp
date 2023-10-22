#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        int ans = 0;
        for(int i=0, j=n-1; i<n/2; i++, j--)
        {
            ans += (a[j]-a[i]);
        }
        cout << ans << endl;
    }

    return 0;
}