#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int b[n];
        for(int i=0; i<n; i++) cin >> b[i];

        vector<int> a;
        a.push_back(b[0]);

        for(int i=1; i<n; i++)
        {
            a.push_back(b[i]);
            if(b[i] < b[i-1])
            {
                a.push_back(b[i]);
            }
        }

        cout << a.size() << endl;
        for(auto e : a) cout << e << " ";
        cout << endl;

    }

    return 0;
}