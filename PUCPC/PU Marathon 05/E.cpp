#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int x, n;
    cin >> x >> n;
    int p[n], X=x;
    for(int i=0; i<n; i++)
    {
        cin >> p[i];
        X += (x-p[i]);
    }
    cout << X << endl;

    return 0;
}