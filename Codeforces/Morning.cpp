#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int sec = 0, pos = 1;
        int dgt[4];
        for(int i=0; i<4; i++) dgt[i] = s[i]-'0';
        for(int i=0; i<4; i++)
        {
            if(dgt[i] == 0) dgt[i] = 10;
            if(pos!=dgt[i])
            {
                sec += abs(pos-dgt[i]);
                pos = dgt[i];
            }
            sec++;
        }
        cout << sec << endl;
    }

    return 0;
}