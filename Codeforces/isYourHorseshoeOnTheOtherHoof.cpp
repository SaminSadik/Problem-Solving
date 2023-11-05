#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int s[4], Count=0;
    for(int i=0; i<4; i++) cin >> s[i];

    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(s[i]==s[j])
                {
                    Count++;
                    break;
                }
        }
    }
    cout << Count;

    return 0;
}