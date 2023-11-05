#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    vector<int> p(101, 0);
    for(int i=1; i<101; i++) p[i] = p[i-1] + i;

    int t; cin >> t;
    while(t--)
    {
        int m, s;
        cin >> m >> s;
        int b[m], sum = s;
        unordered_set<int> uniq;
        for(int i=0; i<m; i++)
        {
            cin >> b[i];
            uniq.insert(b[i]);
        }
        for(auto i : uniq) sum += i;
        bool ans = true;
        if(find(p.begin(), p.end(), sum) == p.end()) ans = false;
        int n = (sqrt(1+(8*sum) - 1))/2;
        //cout << n << " " << sum << endl;
        vector<bool> a(n+1, true);
        for(int i=0; i<m && ans; i++)
        {
            if(b[i]>0 && b[i]<=n && a[b[i]]) a[b[i]] = false;
            else ans = false;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}