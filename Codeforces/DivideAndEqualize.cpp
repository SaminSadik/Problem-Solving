#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define Loop(x,y,z) for(auto x=y; x<z; x++)

void PrimeFact(int x, map<int,int>&m)
{
    Loop(i,2,sqrt(x)+1)
    {
        while(x%i == 0)
        {
            m[i]++;
            x /= i;
        }
    }
    if(x>1) m[x]++;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, int> m;
        Loop(i,0,n)
        {
            int x; cin >> x;
            PrimeFact(x, m);
        }
        bool flag = false;
        for(auto i : m)
        {
            if(i.second % n) flag = true;
            if(flag) break;
        }
        cout << (flag ? "NO" : "YES") << endl;
    }

    return 0;
}