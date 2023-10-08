#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, x;
    cin >> n >> x;
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int v; cin >> v;
        if(v!=x) a.push_back(v);
    }
    for(int i : a) cout << i << " ";
    cout << endl;

    return 0;
}