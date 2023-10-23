#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], sum=0, first=0, last=0, mid=0;
        bool flag = false, First = true;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i] < 0)
            {
                if(First)
                {
                    first = i;
                    First = false;
                }
                else last = i;

                if(!flag) flag = true;

                sum -= a[i];
            }
            else sum += a[i];
            //cout << first << " " << last << endl;
        }
        
        for(int i=first; i<last; i++)
        {
            
            if(a[i]>0)
            {
                mid++;
                while(a[i+1]>=0) i++;
            }
        }

        cout << sum << " ";
        if(flag) cout << mid + 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}