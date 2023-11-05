#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

    void solve()
    {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> v;
        v.push_back(y);
        for (int i = n - 2, j = 1; i > 0; i--, j++)
        {
            int k = v[j-1] - j;
            v.push_back(k);

            if(k <= x)
            {
                cout << "-1" << endl;
                return;
            }
        }
        v.push_back(x);
        reverse(v.begin(), v.end());
        if (v[1]-v[0] <= v[2]-v[1])
        {
            cout << -1 << endl;
            return;
        }
        for (auto e : v) cout << e << " ";
        cout << endl;  
    }

int main()
{
    int t; cin >> t;
    while (t--) solve();

    return 0;
}