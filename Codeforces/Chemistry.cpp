#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

bool solve()
{
    string s;
    int n, k;
    cin >> n >> k >> s;

    vector<int> freq(26, 0);
    for(char c: s) freq[(int)(c-'a')]++;

    int odd = 0;
    for(int i=0; i<26; i++) if(freq[i]%2) odd++;

    return (max(0, odd-1) <= k);
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    cout << (solve() ? "YES" : "NO") << endl;

    return 0;
}