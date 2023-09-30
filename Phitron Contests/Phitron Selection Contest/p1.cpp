#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define pii pair<int, int>
#define O2 second

int main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<pii> h;
        
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            h.push_back({x, i});
        }
        sort(h.begin(), h.end(), greater<pii>());
        cout << min(h[0].O2, h[1].O2) << " " << max(h[0].O2, h[1].O2) << endl;
    }

    return 0;
}