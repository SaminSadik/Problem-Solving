#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    int cnt = 0, pos = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == c)
        {
            cnt++;
            pos = i+1;
        }
    }
    if(cnt == n) cout << 0 << endl;
    else if(pos>(n/2)) cout << "1\n" << pos << endl;
    else cout << "2\n" << n << " " << n-1 << endl;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}