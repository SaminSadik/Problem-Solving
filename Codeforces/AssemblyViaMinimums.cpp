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
        int m = (n*(n-1))/2;
        
        int a[n], b[m];
        for(int i=0; i<m; i++) cin >> b[i];
        sort(b, b+m);

        for(int i=0, j=0, k=n-1; i<m; i+=k, j++, k--) a[j] = b[i];
        a[n-1] = b[m-1];

        for(auto x : a) cout << x << " ";
        cout << endl;
    }

    return 0;
}