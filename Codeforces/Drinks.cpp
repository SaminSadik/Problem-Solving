#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    int total = 0;
    for(int i=0; i<n; i++)
    {
        int p; cin >> p;
        total += p;
    }
    cout << fixed << setprecision(12) << (double) total/n;

    return 0;
}