#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Db double

Db filter(Db a, Db b, Db c)
{
    while(b+c > a-c)
    {
        c -= (b+c-a+c)/2;
    }
    return c;
}

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        Db a, b, c, x;
        cin >> a >> b >> c;

        int m  = 0;
        while(a != b)
        {
            if(a > b)
            {
                if(b+c > a-c)
                {
                    x = filter(a, b, c);
                    a -= x;
                    b += x;
                }
                else
                {
                    a -= c;
                    b += c;
                }
            }
            else
            {
                if(b-c < a+c)
                {
                    x = filter(b, a, c);
                    a += x;
                    b -= x;
                }
                else
                {
                    a += c;
                    b -= c;
                }
            }
            m++;
        }
        cout << m << endl;
    }

    return 0;
}