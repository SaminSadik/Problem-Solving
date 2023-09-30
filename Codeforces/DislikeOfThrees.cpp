#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        vector<int> seq;
        for(int i=1; seq.size()<k; i++)
        {
            if((i%3) && (i%10 != 3)) seq.push_back(i);
        }
        cout << seq.back() << endl;
    }

    return 0;
}