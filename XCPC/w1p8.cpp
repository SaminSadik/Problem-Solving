#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int a, b, c, i = 0, j = 0, k = 0;
    cin >> a >> b >> c;
    while(1)
    {
        while(1)
        {
            k = (a*i) + (b*j);
            if(k == c)
            {
                cout << "Yes";
                return 0;
            }
            if(k > c)
            {
                if(a*(i+1) > c)
                {
                    cout << "No";
                    return 0;
                }
                else
                {
                    j = 0;
                    break;
                }
            }
            j++;
        }
        i++;
    }
}