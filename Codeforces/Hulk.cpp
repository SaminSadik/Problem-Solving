#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    string f = "I hate ";
    for(int i=2; i<=n; i++)
    {
        if(i%2) f += "that I hate ";
        else f += "that I love ";
    }
    cout << f << "it";

    return 0;
}