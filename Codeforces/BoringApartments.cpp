#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int a[37] = {0,1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    vector<int> b(37, 0);
    for(int i=1; i<37; i+=4)
    {
        b[i]+=(b[i-1]+1);
        b[i+1]+=(b[i]+2);
        b[i+2]+=(b[i+1]+3);
        b[i+3]+=(b[i+2]+4);
    }

    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        for(int i=1; i<37; i++)
        {
            if(x == a[i]) cout << b[i] << endl;
        }
    }

    return 0;
}