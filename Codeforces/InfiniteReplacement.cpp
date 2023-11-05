#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s2=="a") return 1;

    sort(s2.begin(), s2.end());
    if(s2[0]=='a') return -1;

    return (int)pow(2, s1.size());
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << solve() << endl;

    return 0;
}