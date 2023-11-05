#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define pii pair<int,int>

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int bad = 0, mini = a[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(a[i] > mini) bad++;
        else mini = a[i];
    }
    cout << bad << endl;

    return;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
