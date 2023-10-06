#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin>>n;
    vector<int> v(n), u(n), Vsum(n), Usum(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        u[i] = v[i];
        if(i==0) Vsum[i] = v[i];
        else Vsum[i] = Vsum[i-1] + v[i];
    }

    sort(u.begin(), u.end());
    for(int i=0; i<n; i++)
    {
        if(i==0) Usum[i] = u[i];
        else Usum[i] = Usum[i-1] + u[i];
    }

    int m; cin>>m;
    while(m--)
    {
        int type, l, r, ans;
        cin >> type >> l >> r;
        l--; r--;
        if(type==1) ans = ((l>0)?(Vsum[r]-Vsum[l-1]):Vsum[r]);
        else ans = ((l>0)?(Usum[r]-Usum[l-1]):Usum[r]);
        cout << ans << endl;
    }

    return 0;
}