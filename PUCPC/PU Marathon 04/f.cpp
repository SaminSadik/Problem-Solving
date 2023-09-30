#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n, k; cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);

    /* for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl; */
    
    int ind=0;
    vector<int> dup(n, 0); //Didn't work without specifying size
    dup[ind]++;
    for(int i=1; i<n; i++)
    {
        if(a[i] != a[i-1]) ind++;
        dup[ind]++;
    }

    /* for(int i=0; i<n; i++) cout << dup[i] << " ";
    cout << endl; */

    while(k)
    {
        int r = (max_element(dup.begin(), dup.begin()+(ind+1)) - dup.begin());
        dup[r]--;
        k--;
    }
    int r = (max_element(dup.begin(), dup.begin()+(ind+1)) - dup.begin());
    cout << dup[r] << endl;

    return 0;
}