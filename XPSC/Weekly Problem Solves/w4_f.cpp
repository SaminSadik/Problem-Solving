#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        string s; cin >> s;
        string ans = s;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[j]==a[i]) ans[j] = s[i];
            }
        }
        cout << ((ans == s) ? "YES" : "NO") << endl;
    }

    return 0;
}
/* // Another approach:
#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

bool solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    string s; cin >> s;
    vector<char> rep(51);
    for(int i=0; i<n; i++)
    {
        if(!rep[a[i]]) rep[a[i]] = s[i];
        else if(rep[a[i]] != s[i]) return false;
    }
    return true;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        cout << (solve() ? "YES" : "NO") << endl;
    }

    return 0;
}
*/