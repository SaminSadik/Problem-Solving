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
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        string b[n];
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            cin >> b[i];
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<b[i].size(); j++)
            {
                if(b[i][j]=='U') {(a[i]>0) ? a[i]-- : a[i]=9;} 
                else {(a[i]<9) ? a[i]++ : a[i]=0;} 
            }
        }

        for(int i : a) cout << i << " ";
        cout << endl;
    }

    return 0;
}