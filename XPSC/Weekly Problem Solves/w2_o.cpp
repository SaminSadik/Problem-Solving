#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n, k;
    cin >> n >> k;
    string N = "";
    while(n > 0)
    {
        int r = n % k;
        n /= k;
        N = to_string(r) + N;
    }
    cout << N.size();

    return 0;
}