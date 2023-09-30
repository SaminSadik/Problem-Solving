#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    string n; cin >> n;
    for(int i=0; i<(4-n.size()); i++) cout << 0;
    cout << n;

    return 0;
}