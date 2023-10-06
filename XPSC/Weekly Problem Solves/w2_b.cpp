#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cin.ignore();
        string a, ray;
        getline(cin, ray);
        stringstream ar(ray);
        map<string, int> freq;
        pair<int, string> ans = {0, "-1"};
        while(ar >> a)
        {
            freq[a]++;
            if(freq[a]>2 && freq[a]>ans.first) ans = {freq[a], a};
        }
        cout << ans.second << endl;
    }

    return 0;
}