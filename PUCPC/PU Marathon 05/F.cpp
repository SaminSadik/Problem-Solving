#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin >> n;
    // max 15 days (2^14)
    int t[15]; t[0] = 1;
    for(int i=1; i<15; i++)
    {
        t[i] = t[i-1] * 2;
    }
    for(int i=0; i<15; i++)
    {
        if(t[i] >= n)
        {
            cout << i+1;
            break;
        }
    }

    return 0;
}