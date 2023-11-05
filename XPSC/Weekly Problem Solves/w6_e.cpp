#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define Loop(x,y,z) for(auto x=y; x<z; x++)

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n, z, last = -1;
        n = z = s.size();
        Loop(i,0,z)
        {
            if(s[i]=='0')
            {
                z = i+1;
                break;
            }
            if(s[i]=='1') last = i+1;
        }
        if(n==1 || last==n) cout << 1;
        else if(last<0) cout << z;
        else cout << z - last + 1;
        cout << endl;
    }

    return 0;
}