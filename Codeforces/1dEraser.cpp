#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n, k, i = 0, op = 0;
        cin >> n >> k;
        string s; cin >> s;

        while(i<n)
        {
            if(s[i]=='B')
            {
                op++;
                i += k;
            }
            else i++;
        }
        cout << op << endl;
    }

    return 0;
}