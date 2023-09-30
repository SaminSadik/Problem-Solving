#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin >> n;
    int a[n], ans = 0, h = INT_MIN, l = INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i) if(a[i]>h || a[i]<l) ans++;
        if(a[i]>h) h = a[i];
        if(a[i]<l) l = a[i];
    }
    cout << ans;

    return 0;
}