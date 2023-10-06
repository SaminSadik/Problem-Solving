#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

string changed(string r)
{
    for(int i=0; i<r.size(); i++) if(r[i]=='G') r[i] = 'B';
    return r;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n;
        string r1, r2;
        cin >> n >> r1 >> r2;
        cout<<((changed(r1)==changed(r2))?"YES":"NO")<<endl;
    }

    return 0;
}