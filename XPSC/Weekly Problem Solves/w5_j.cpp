#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define Loop(x,y,z) for(auto x=y; x<z; x++)
int n, x, l, m, r;

bool check(int m, vector<int> a)
{
    int s = 0;
    Loop(i,0,n)
    {
        if(m>a[i]) s += (m-a[i]);
        if(s>x) break;
    }
    return (s>x);
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vector<int> a(n);
        Loop(i,0,n) cin >> a[i];
        sort(a.begin(), a.end());

        l = 0; r = INT_MAX-1;
        while(l <= r)
        {
            m = (l+r)/2;
            check(m,a) ? r = m-1 : l = m+1;
        }
        cout << l-1 << endl;
    }

    return 0;
}