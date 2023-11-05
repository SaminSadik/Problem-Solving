#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n, t;
    cin >> n >> t;
    string s; cin >> s;
    string ans = s;

    for(int x=0; x<t; x++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i], s[i+1]);
                i++;
                ans = s;
            }
        }
    }

    cout << ans;

    return 0;
}