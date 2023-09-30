#include <bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    int a[n], ans=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i)
        {
            if(a[i]>0 && a[i-1]>0)
            {
                ans++;
                a[i]--; a[i-1]--;
            }
        }

        ans += (a[i]/2);
        a[i] %= 2;
    }

    cout << ans;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    int a[n], ans=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        ans += (a[i]/2);
        a[i] %= 2;
    }
    for(int i=1; i<n; i++)
    {
        if(a[i]==1 && a[i-1]==1)
        {
            ans++;
            a[i]--; a[i-1]--;
        }
    }

    cout << ans;

    return 0;
}
*/