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
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.rbegin(), a.rend());
        int box = a[0], Count = 1;
        for(int i=1; i<n; i++)
        {
            if(box < a[i])
            {
                Count++;
                box = a[i];
            }
            else box ^= a[i];
        }
        cout << Count << endl;
    }

    return 0;
}