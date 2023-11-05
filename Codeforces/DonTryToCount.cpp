#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int n, m;
string x, s;

bool is_substr()
{
    int N = x.size(), M = s.size();
    if(N<M) return false;
    for(int i=0; i<N; i++)
    {
        if(s[0]==x[i])
        {
            if(M==1) return true;
            for(int j=1; j<M; j++)
            {
                if(s[j] != x[i+j]) break;
                if(j == M-1) return true;
            }
        }
    }
    return false;
}

void solve()
{
    cin >> n >> m >> x >> s;
    
    int ans = 0;
    while(x.size()<m)
    {
        x += x;
        ans++;
    }
    if((x == s) || is_substr())
    {
        cout << ans << endl;
        return;
    }

    x+=x; ans++;
    if(is_substr()) cout << ans;
    else cout << "-1";
    cout << endl;
    return;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}