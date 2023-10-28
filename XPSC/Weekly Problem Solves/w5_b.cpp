#include <bits/stdc++.h>
using namespace std;

#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pii pair<int, int>

pii find_wives(vector<int> a, int s)
{
    pii xy = {-1, -1};
    int p = -1;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>=s) break;
        xy.first = a[i];
        p = i;
    }
    for(int i=p+1; i<a.size(); i++)
    {
        if(a[i]>s)
        {
            xy.second = a[i];
            break;
        }
    }
    return xy;
}

signed main()
{
    SSK

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int q; cin >> q;
    vector<int> b(q);
    for(int i=0; i<q; i++) cin >> b[i];

    for(int i=0; i<q; i++)
    {
        pii w = find_wives(a, b[i]);
        if(w.first < 0) cout << "X";
        else cout << w.first;
        cout << " ";
        if(w.second < 0) cout << "X";
        else cout << w.second;
        cout << endl;
    }

    return 0;
}