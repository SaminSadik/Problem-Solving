#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin >> n;
    
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int maxe = *max_element(a, a+n);

    long long ans = 0;
    for(int i=0; i<n; i++) ans += (maxe - a[i]);
    cout << ans;

    return 0;
}