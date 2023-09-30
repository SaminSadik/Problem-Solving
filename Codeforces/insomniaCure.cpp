#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> harmed;

    
    for(int i=k; i<=d; i+=k)
    {
        harmed.insert(i);
    }
    
    for(int i=l; i<=d; i+=l)
    {
        harmed.insert(i);
    }
    
    for(int i=m; i<=d; i+=m)
    {
        harmed.insert(i);
    }
    
    for(int i=n; i<=d; i+=n)
    {
        harmed.insert(i);
    }
    
    cout << harmed.size();

    return 0;
}