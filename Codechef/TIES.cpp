#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int sum = 0;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum%n)
        {
            cout << "NO" << endl;
            continue;
        }
        bool flag = true;
        int target = sum / n;
        for(int i=0; i<n; i++)
        {
            int dif = a[i]-target;
            if(dif%2)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}