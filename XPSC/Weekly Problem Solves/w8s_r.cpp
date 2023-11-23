#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
const int N = 1e6+1;
bool snow[N];

signed main()
{
    SSK

    for(int i=2; i<1001; i++)
    {
        int add = i*i;
        int num = i+1+add;
        while(num < N)
        {
            snow[num] = 1;
            add *= i;
            num += add;
        }
    }

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << (snow[n] ? "YES" : "NO") << endl;
    }

    return 0;
}