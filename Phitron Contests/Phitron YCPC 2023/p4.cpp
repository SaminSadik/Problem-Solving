#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int x[n];
        vector<int> dif;
        for(int i=0; i<n; i++) cin >> x[i];
        sort(x, x+n);
        for(int i=1; i<n; i++)
        {
            dif.push_back(x[i]-x[i-1]);
        }
        int c; cin >> c;
        for(auto e : dif) cout << e << " ";
        cout << endl;
        sort(dif.begin(), dif.end(), greater<int>());
        cout << dif[c-1] << endl;

    }

    return 0;
}