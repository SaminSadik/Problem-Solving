#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    string strt = "", prev;
    int g = 1;
    while(n--)
    {
        string s;
        cin >> s;
        if(strt == "")
        {
            strt = s;
            prev = strt;
        }
        
        if(prev != s) g++;

        prev = s;
    }
    cout << g;

    return 0;
}