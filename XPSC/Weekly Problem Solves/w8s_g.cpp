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
        string s; cin >> s;
        int ans = n+1;
        for(char c='a'; c<='z'; c++)
        {
            int l=0, r=n-1, cnt=0;
            while(l<r)
            {
                if(s[l]==s[r]) {l++; r--;}
                else if(s[l]==c) {l++; cnt++;}
                else if(s[r]==c) {r--; cnt++;}
                else {cnt=n+1; break;}
            }
            ans = min(ans, cnt);
        }
        cout << (ans>n ? -1 : ans) << endl;
    }

    return 0;
}