#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n, a, q, p=0, m=0;
    string s;
    cin >> n >> a >> q >> s;
    
    if(n==a)
    {
        cout << "YES" << endl;
        return;
    }

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+') p++;
        else m++;

        if(a+p-m >= n)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if(a+p >= n) cout << "MAYBE" << endl;
    else cout << "NO" << endl;
}

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}