#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        
        int total = 0;
        for(int i=0; i<n; i++)
        total += ((s[i]=='R') ? (n-1-i) : i);
        
        int ans[n], k = 0;
        for(int i=0, j=n-1; i<n/2; i++, j--)
        {
            if((k<n) && (s[i] == 'L'))
            {
                total += (n-1-i-i);
                ans[k++] = total;
            }
            if((k<n) && (s[j] == 'R'))
            {
                total += (j-n+j+1);
                ans[k++] = total;
            }
        }
        while(k<n) ans[k++] = total;
        
        for(int a : ans) cout << a << " ";
        cout << endl;
    }

    return 0;
}