#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    vector<int> a, b;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
        b.push_back(x);
    }
    sort(b.begin(), b.end());

    

    return 0;
}