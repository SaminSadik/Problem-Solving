// SSKsan //

#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    IOS

    int n; cin >> n;
    int a[n];
    int sum = 0;
    int evn=0, odd=0, zro=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i]%2) odd++;
        else if(a[i]) evn++;
        else zro++;
    }
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(a[i]==sum)
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
    cout << odd << " " << evn << endl;
    sort(a, a+n);
    cout << a[n-2] << endl;


    return 0;
}
