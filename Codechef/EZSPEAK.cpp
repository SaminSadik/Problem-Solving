#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

bool is_con(char c)
{
    return (c!='a' && c!='e' && c!='i' && c!='o' && c!='u');
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        
        int con = 0;
        for(int i=0; i<n && n>3 && con<4; i++)
        {
            if(is_con(s[i])) con++;
            else if(con<4) con = 0; // else con = 0;
        }
        cout << ((con<4) ? "YES" : "NO") << endl;
    }

    return 0;
}