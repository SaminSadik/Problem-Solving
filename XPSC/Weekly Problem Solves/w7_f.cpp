#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, k;
    cin >> n >> k;
    vector<int> dvsor;
    for(int i=1; (i*i)<=n; i++)
    {
        if(n%i == 0)
        {
            dvsor.push_back(i);
            if(i != n/i) dvsor.push_back(n/i);
        }
    }
    sort(dvsor.begin(), dvsor.end());

    if(dvsor.size()<k) cout << -1 << endl;
    else cout << dvsor[k-1] << endl;

    return 0;
}