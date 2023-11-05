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
        int s; cin >> s;
        vector<int> num;
        for(int i=9; i>0; i--)
        {
            int digit = min(s, i);
            num.push_back(digit);
            s -= digit;
            if(!s) break;
        }
        sort(num.begin(), num.end());
        for(auto n : num) cout << n;
        cout << endl;
    }

    return 0;
}