// WA

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
        int n, k;
        cin >> n >> k;
        int N = n/2;
        if(k<(2*(N*N) + N)) cout << "-1";
        else
        {
            int ans[n], add1 = 1, add2 = 2;
            for(int i=0; i<(n/2)-1; i++, add1+=2)
            {
                ans[i] = add1;
                k -= add1;
            }
            for(int i=(n/2)-1; i<(n-2); i++, add2+=2) 
            {
                ans[i] = add2;
                k -= add2;
            }
            if(k%2)
            {
                ans[n-2] = add1+2;
                ans[n-1] = k-(add1+2);
            }
            else
            {
                ans[n-2] = add2+2;
                ans[n-1] = k-(add2+2);
            }
            sort(ans, ans+n);
            for(int i=0; i<n; i++) cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}