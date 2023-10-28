#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

bool canPlace(vector<int> s, int d, int c)
{
    int cows = 1, last = s[0];
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]-last >= d)
        {
            cows++;
            last = s[i];
        }
        if(cows >= c) return true;
    }
    return false;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> s(n);
        for(int i=0; i<n; i++) cin >> s[i];
        sort(s.begin(), s.end());
        int lo = 1, hi = s[n-1]-s[0];
        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
            if(canPlace(s, mid, c)) lo = mid+1;
            else hi = mid-1;
        }
        cout << hi << endl;
    }

    return 0;
}