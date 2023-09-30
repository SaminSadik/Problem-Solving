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
        int n; cin >> n;
        int a[n], maxi = INT_MIN, mini = INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]>maxi) maxi = a[i];
            if(a[i]<mini) mini = a[i];
        }
        
        cout << maxi - mini << endl;
    }

    return 0;
}