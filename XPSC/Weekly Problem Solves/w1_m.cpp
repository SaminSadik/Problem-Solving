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
        int n, loons = 0;
        string s;
        cin >> n >> s;
        vector<bool> solved(26, false);
        for(int i=0; i<n; i++)
        {
            int prb = s[i] - 'A';
            if(solved[prb]) loons++;
            else
            {
                solved[prb] = true;
                loons += 2;
            }
        }
        cout << loons << endl;
    }

    return 0;
}