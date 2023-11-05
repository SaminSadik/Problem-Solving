#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n, ans = 0;

    cin >> n;
    vector<int>a(n);
    vector<int>b(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    while(a[0]!=b[n-1] || a[n-1]!=b[0])
    {
        if(a[0]!=b[n-1])
        {
            for(int x=1; x<n; x++)
            {
                if(a[x]==b[n-1])
                {
                    swap(a[x], a[x-1]);
                    ans++;
                    break;
                }
            }
        }
        else if(a[n-1]!=b[0])
        {
            for(int y=n-2; y>=0; y--)
            {
                if(a[y]==b[0])
                {
                    swap(a[y], a[y+1]);
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}