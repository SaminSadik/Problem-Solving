#include <bits/stdc++.h>
using namespace std;

#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define Bg begin()
#define Ed end()

int main()
{
    SSK

    int n, q, x, c = 1;
    while(cin >> n >> q)
    {
        if(!n && !q) break;
        cout << "CASE# " << c++ << ":\n";

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.Bg, a.Ed);
        while(q--)
        {
            cin >> x;
            auto i = lower_bound(a.Bg, a.Ed, x) - a.Bg;
            if(i>=n || a[i]!=x) cout << x << " not found\n";
            else cout << x << " found at " << i+1 << endl;
        }
    }

    return 0;
}