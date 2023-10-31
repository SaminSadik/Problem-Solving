#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    vector<int> a(n);
    int evn = 0, odd = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2) odd++;
        else evn++;
    }
    cout << min(evn, odd) << endl;

    return 0;
}