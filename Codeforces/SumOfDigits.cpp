#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    string n; cin >> n;
    int ans = 0;
    while(true)
    {
        if(n.size()==1) break;
        int sum = 0;
        for(int i=0; i<n.size(); i++) sum += ((int)n[i]-'0');
        n = to_string(sum);
        ans++;
    }
    cout << ans;

    return 0;
}