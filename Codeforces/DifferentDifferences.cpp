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
        int k, n;
        cin >> k >> n;
        vector<int> a;
        for(int i=1, j=0; i<=n; j++, i+=j)
        {
            a.push_back(i);
        }
        while(a.size()>k) a.pop_back();
        if(a.size()<k)
        {
            while((k-a.size())>(n-a.back())) a.pop_back();
            while(a.size()!=k) a.push_back(a.back()+1);
        }
        for(int i : a) cout << i << " ";
        cout << endl;
    }

    return 0;
}