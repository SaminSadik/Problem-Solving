// Wrong ans on test 6

#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<int>());
    vector<int> l;
    l.push_back(a[0]);
    a.erase(a.begin());
    for(int i=0; i<n; i++)
    {
        if((l[0] % a[i] == 0) && (a[i] != l.back()))
        {
            l.push_back(a[i]);
            a.erase(a.begin()+i);
            n--;
        }
    }
    cout << l[0] << " " << a[0];

    return 0;
}